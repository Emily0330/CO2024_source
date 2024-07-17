module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire signed hazard_o, flush;
wire [31:0] inst;

wire signed w18, w20, w21, w23, w24, w26, w27, w29;
wire signed [1:0] w16, w17, w19, w25;
wire signed [2:0] w22, w28;
wire signed [31:0] w1, w2, w3, w4, w5, w6, w7, w8, w9, w11, w12, w13, w14, w15;

wire signed [31:0] IFID_pc, IFID_inst, IFID_next_pc;
wire signed [31:0] IDEX_next_pc, IDEX_rs1, IDEX_rs2, IDEX_imm;
wire signed IDEX_regWrite, IDEX_memRead, IDEX_memWrite, IDEX_ALUSrc;
wire signed [2:0] IDEX_ALUOp, IDEX_funct3;
wire signed IDEX_funct7;
wire signed [3:0] ALUCtl;
wire signed [31:0] EXMEM_aluResult, EXMEM_rs2, EXMEM_next_pc;
wire signed EXMEM_memRead, EXMEM_memWrite, EXMEM_regWrite;
wire signed [31:0] MEMWB_memData, MEMWB_aluResult, MEMWB_next_pc;
wire signed MEMWB_regWrite;
wire signed [4:0] IDEX_rd, EXMEM_rd, MEMWB_rd, IDEX_rs1_num, IDEX_rs2_num;
wire signed [1:0] IDEX_memtoReg, EXMEM_memtoReg, MEMWB_memtoReg;

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(flush & !hazard_o),
    .s0(w1),
    .s1(w2),
    .out(w3)
);

PC m_PC(
    .clk(clk),
    .rst(start),
    .hazard_i(hazard_o),
    .pc_i(w3),
    .pc_o(w4)
);

Adder m_Adder_1
(
    .a(w4),
    .b(32'd4),
    .sum(w1)
);

InstructionMemory m_InstMem(
    .readAddr(w4),
    .inst(inst)
);

IF_ID_reg m_IF_ID_reg(
    .clk(clk),
    .rst(start),
    .flush(flush),
    .hazard(hazard_o),
    .inst_i(inst),
    .inst_o(IFID_inst),
    .pc_i(w4),
    .pc_o(IFID_pc),
    .next_pc_i(w1),
    .next_pc_o(IFID_next_pc)
);

Mux2to1 #(.size(32)) m_MuxBranch(
    .sel(IFID_inst[6:0] == 7'b1100111), // JALR: 1, others: 0
    .s0(IFID_pc),
    .s1(w5),
    .out(w8)
);

Adder m_Adder_2(
    .a(w8),
    .b(w7),
    .sum(w2)
);

Control m_Control(
    .opcode(IFID_inst[6:0]),
    .memRead(w20),
    .memtoReg(w19),
    .ALUOp(w22),
    .memWrite(w21),
    .ALUSrc(w23),
    .regWrite(w18)
);

HazardDetectionUnit m_HazardDetectionUnit(
    //.opcode_i(IFID_inst[6:0]),
    .IF_ID_rs1_i(IFID_inst[19:15]),
    .IF_ID_rs2_i(IFID_inst[24:20]),
    .ID_EX_rd_i(IDEX_rd),
    .EX_MEM_rd_i(EXMEM_rd),
    .memRead_i(IDEX_memRead),
    .ID_EX_regWrite_i(IDEX_regWrite),
    .EX_MEM_regWrite_i(EXMEM_regWrite),
    .hazard_o(hazard_o)
);

MuxControl m_MuxControl(
    .hazard_i(hazard_o),
    .regWrite_i(w18),
    .memRead_i(w20),
    .memWrite_i(w21),
    .ALUSrc_i(w23),
    .memtoReg_i(w19),
    .ALUOp_i(w22),
    .ALUOp_o(w28),
    .memtoReg_o(w25),
    .memRead_o(w26),
    .memWrite_o(w27),
    .ALUSrc_o(w29),
    .regWrite_o(w24)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(MEMWB_regWrite),
    .readReg1(IFID_inst[19:15]),
    .readReg2(IFID_inst[24:20]),
    .writeReg(MEMWB_rd),
    .writeData(w15),
    .readData1(w5),
    .readData2(w6)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(IFID_inst),
    .imm(w7)
);

BranchComp m_BranchComp(
    .rs1_i(w5),
    .rs2_i(w6),
    .opcode_i(IFID_inst[6:0]),
    .funct3_i(IFID_inst[14:12]),
    .flush_o(flush)
);

ID_EX_reg m_ID_EX_reg(
    .clk(clk),
    .rst(start),
    .regWrite_i(w24),
    .memRead_i(w26),
    .memWrite_i(w27),
    .ALUSrc_i(w29),
    .memtoReg_i(w25),
    .ALUOp_i(w28),
    .next_pc_i(IFID_next_pc),
    .imm_i(w7),
    .rs1_i(w5),
    .rs2_i(w6),
    .rd_i(IFID_inst[11:7]),
    .funct7_i(IFID_inst[30]),
    .funct3_i(IFID_inst[14:12]),
    .rs1_num_i(IFID_inst[19:15]),
    .rs2_num_i(IFID_inst[24:20]),
    .regWrite_o(IDEX_regWrite),
    .memRead_o(IDEX_memRead),
    .memWrite_o(IDEX_memWrite),
    .ALUSrc_o(IDEX_ALUSrc),
    .memtoReg_o(IDEX_memtoReg),
    .ALUOp_o(IDEX_ALUOp),
    .next_pc_o(IDEX_next_pc),
    .imm_o(IDEX_imm),
    .rs1_o(IDEX_rs1),
    .rs2_o(IDEX_rs2),
    .rd_o(IDEX_rd),
    .funct7_o(IDEX_funct7),
    .funct3_o(IDEX_funct3),
    .rs1_num_o(IDEX_rs1_num),
    .rs2_num_o(IDEX_rs2_num)
);

Mux3to1 #(.size(32)) m_Mux_ALUSubSrc(
    .sel(w17),
    .s0(IDEX_rs2),
    .s1(w15),
    .s2(EXMEM_aluResult),
    .out(w9)
);

Mux3to1 #(.size(32)) m_Mux_ALUSrc1(
    .sel(w16),
    .s0(IDEX_rs1),
    .s1(w15),
    .s2(EXMEM_aluResult),
    .out(w11)
);

Mux2to1 #(.size(32)) m_Mux_ALUSrc2(
    .sel(IDEX_ALUSrc),
    .s0(w9),
    .s1(IDEX_imm),
    .out(w12)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(IDEX_ALUOp),
    .funct7(IDEX_funct7),
    .funct3(IDEX_funct3),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUCtl(ALUCtl),
    .A(w11),
    .B(w12),
    .ALUOut(w13)
);

ForwardingUnit m_ForwardingUnit(
    .EX_MEM_regWrite_i(EXMEM_regWrite),
    .MEM_WB_regWrite_i(MEMWB_regWrite),
    .EX_MEM_rd_i(EXMEM_rd),
    .MEM_WB_rd_i(MEMWB_rd),
    .ID_EX_rs1_num_i(IDEX_rs1_num),
    .ID_EX_rs2_num_i(IDEX_rs2_num),
    .fwdA_o(w16),
    .fwdB_o(w17)
);

EX_MEM_reg m_EX_MEM_reg(
    .clk(clk),
    .rst(start),
    .regWrite_i(IDEX_regWrite),
    .memRead_i(IDEX_memRead),
    .memWrite_i(IDEX_memWrite),
    .memtoReg_i(IDEX_memtoReg),
    .ALU_result_i(w13),
    .next_pc_i(IDEX_next_pc),
    .rs2_i(w9), //w12 //IDEX_rs2
    .rd_i(IDEX_rd),
    .regWrite_o(EXMEM_regWrite),
    .memRead_o(EXMEM_memRead),
    .memWrite_o(EXMEM_memWrite),
    .memtoReg_o(EXMEM_memtoReg),
    .ALU_result_o(EXMEM_aluResult),
    .next_pc_o(EXMEM_next_pc),
    .rs2_o(EXMEM_rs2),
    .rd_o(EXMEM_rd)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(EXMEM_memWrite),
    .memRead(EXMEM_memRead),
    .address(EXMEM_aluResult),
    .writeData(EXMEM_rs2),
    .readData(w14)
);

MEM_WB_reg m_MEM_WB_reg(
    .clk(clk),
    .rst(start),
    .regWrite_i(EXMEM_regWrite),
    .memtoReg_i(EXMEM_memtoReg),
    .MEM_result_i(w14),
    .next_pc_i(EXMEM_next_pc),
    .rd_i(EXMEM_rd),
    .ALU_result_i(EXMEM_aluResult),
    .regWrite_o(MEMWB_regWrite),
    .memtoReg_o(MEMWB_memtoReg),
    .MEM_result_o(MEMWB_memData),
    .next_pc_o(MEMWB_next_pc),
    .rd_o(MEMWB_rd),
    .ALU_result_o(MEMWB_aluResult)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(MEMWB_memtoReg),
    .s0(MEMWB_aluResult),
    .s1(MEMWB_memData),
    .s2(MEMWB_next_pc),
    .out(w15)
);

endmodule
