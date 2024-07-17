module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire signed [31:0] w1,w2,w3,w11,w12,w13,w14,w15,w18,w19,w20,w21,w23;
wire signed [3:0] w22;
wire signed [1:0] w7; // AluOp
wire signed w4,w5,w6,w8,w9,w10,w16;

wire signed [31:0] IFID_out_pc, IFID_out_inst;
wire signed [31:0] IDEX_out_pc, IDEX_out_rs1, IDEX_out_rs2, IDEX_out_imm;
wire signed [2:0] IDEX_out_funct3;
wire signed [1:0] IDEX_out_ALUOp;
wire signed IDEX_out_regWrite, IDEX_out_memRead, IDEX_out_memtoReg, IDEX_out_memWrite, IDEX_out_branch, IDEX_out_ALUSrc, IDEX_out_funct7;
wire signed [31:0] EXMEM_out_aluResult, EXMEM_out_pc, EXMEM_out_rs2;
wire signed EXMEM_out_memRead, EXMEM_out_memtoReg, EXMEM_out_memWrite, EXMEM_out_regWrite, EXMEM_out_branch, EXMEM_out_zero;
wire signed [31:0] MEMWB_out_memData, MEMWB_out_aluResult;
wire signed MEMWB_out_memtoReg, MEMWB_out_regWrite;
wire signed [4:0] IDEX_out_rd, EXMEM_out_rd, MEMWB_out_rd;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(w18),
    .pc_o(w1)
);

Adder m_Adder_1(
    .a(w1),
    .b(32'd4),
    .sum(w2)
);

InstructionMemory m_InstMem(
    .readAddr(w1),
    .inst(w3)
);

IF_ID_reg m_IF_ID_reg(
    .clk(clk),
    .rst(start),
    .pc_in(w1),
    .inst_in(w3),
    .pc_out(IFID_out_pc),
    .inst_out(IFID_out_inst)
);

Control m_Control(
    .opcode(IFID_out_inst[6:0]),
    .branch(w4),
    .memRead(w5),
    .memtoReg(w6),
    .ALUOp(w7),
    .memWrite(w8),
    .ALUSrc(w9),
    .regWrite(w10)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(MEMWB_out_regWrite),
    .readReg1(IFID_out_inst[19:15]),
    .readReg2(IFID_out_inst[24:20]),
    .writeReg(MEMWB_out_rd),
    .writeData(w21),
    .readData1(w11),
    .readData2(w12)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(IFID_out_inst),
    .imm(w13)
);

ID_EX_reg m_ID_EX_reg(
    .clk(clk),
    .rst(start),
    .in_pc(IFID_out_pc),
    .in_rs1(w11),
    .in_rs2(w12),
    .in_rd(IFID_out_inst[11:7]),
    .in_imm(w13),
    .in_regWrite(w10),
    .in_memRead(w5),
    .in_memtoReg(w6),
    .in_memWrite(w8),
    .in_branch(w4),
    .in_ALUSrc(w9),
    .in_funct7(IFID_out_inst[30]),
    .in_funct3(IFID_out_inst[14:12]),
    .in_ALUOp(w7),
    .out_pc(IDEX_out_pc),
    .out_rs1(IDEX_out_rs1),
    .out_rs2(IDEX_out_rs2),
    .out_rd(IDEX_out_rd),
    .out_imm(IDEX_out_imm),
    .out_regWrite(IDEX_out_regWrite),
    .out_memRead(IDEX_out_memRead),
    .out_memtoReg(IDEX_out_memtoReg),
    .out_memWrite(IDEX_out_memWrite),
    .out_branch(IDEX_out_branch),
    .out_ALUSrc(IDEX_out_ALUSrc),
    .out_funct7(IDEX_out_funct7),
    .out_funct3(IDEX_out_funct3),
    .out_ALUOp(IDEX_out_ALUOp)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(IDEX_out_imm),
    .o(w14)
);

Adder m_Adder_2(
    .a(IDEX_out_pc),
    .b(w14),
    .sum(w15)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(EXMEM_out_branch & EXMEM_out_zero),
    .s0(w2),
    .s1(EXMEM_out_pc),
    .out(w18)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(IDEX_out_ALUSrc),
    .s0(IDEX_out_rs2),
    .s1(IDEX_out_imm),
    .out(w23)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(IDEX_out_ALUOp),
    .funct7(IDEX_out_funct7),
    .funct3(IDEX_out_funct3),
    .ALUCtl(w22)
);

ALU m_ALU(
    .ALUctl(w22),
    .A(IDEX_out_rs1),
    .B(w23),
    .ALUOut(w19),
    .zero(w16)
);

EX_MEM_reg m_EX_MEM_reg(
    .clk(clk),
    .rst(start),
    .in_aluResult(w19),
    .in_pc(w15), //modified
    .in_rd(IDEX_out_rd),
    .in_rs2(IDEX_out_rs2),
    .in_memRead(IDEX_out_memRead),
    .in_memtoReg(IDEX_out_memtoReg),
    .in_memWrite(IDEX_out_memWrite),
    .in_regWrite(IDEX_out_regWrite),
    .in_branch(IDEX_out_branch),
    .in_zero(w16),
    .out_aluResult(EXMEM_out_aluResult),
    .out_pc(EXMEM_out_pc),
    .out_rd(EXMEM_out_rd),
    .out_rs2(EXMEM_out_rs2),
    .out_memRead(EXMEM_out_memRead),
    .out_memtoReg(EXMEM_out_memtoReg),
    .out_memWrite(EXMEM_out_memWrite),
    .out_regWrite(EXMEM_out_regWrite),
    .out_branch(EXMEM_out_branch),
    .out_zero(EXMEM_out_zero)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(EXMEM_out_memWrite),
    .memRead(EXMEM_out_memRead),
    .address(EXMEM_out_aluResult),
    .writeData(EXMEM_out_rs2),
    .readData(w20)
);

MEM_WB_reg m_MEM_WB_reg(
    .clk(clk),
    .rst(start),
    .in_memData(w20),
    .in_aluResult(EXMEM_out_aluResult),
    .in_rd(EXMEM_out_rd),
    .in_memtoReg(EXMEM_out_memtoReg),
    .in_regWrite(EXMEM_out_regWrite),
    .out_memData(MEMWB_out_memData),
    .out_aluResult(MEMWB_out_aluResult),
    .out_rd(MEMWB_out_rd),
    .out_memtoReg(MEMWB_out_memtoReg),
    .out_regWrite(MEMWB_out_regWrite)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(MEMWB_out_memtoReg),
    .s0(MEMWB_out_aluResult),
    .s1(MEMWB_out_memData),
    .out(w21)
);

endmodule
