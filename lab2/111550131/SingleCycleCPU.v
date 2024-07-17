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

wire signed [31:0] w1,w2,w3,w4,w13,w14,w15,w17,w18,w19,w20,w21;
wire signed [3:0] w16;
wire signed [2:0] w7; // AluOp
wire signed [1:0] w6; // MemtoReg
wire signed w5,w8,w9,w10,w11,w12,w22,w23;

PC m_PC(
    .clk(clk),
    .rst(start),
    .pc_i(w3),
    .pc_o(w1)
);

Adder m_Adder_1(
    .a(w1),
    .b(32'd4),
    .sum(w2)
);

InstructionMemory m_InstMem(
    .readAddr(w1),
    .inst(w4)
);

Control m_Control(
    .opcode(w4[6:0]),
    //.branch(w4),
    .memRead(w5),
    .memtoReg(w6),
    .ALUOp(w7),
    .memWrite(w8),
    .ALUSrc1(w11),
    .ALUSrc2(w12),
    .regWrite(w10),
    .PCSel(w9)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(w10),
    .readReg1(w4[19:15]),
    .readReg2(w4[24:20]),
    .writeReg(w4[11:7]),
    .writeData(w21),
    .readData1(w13),
    .readData2(w14)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(w4[31:0]),
    .imm(w15)
);

/* ShiftLeftOne m_ShiftLeftOne(
    .i(w13),
    .o(w14)
); */

/* Adder m_Adder_2(
    .a(w1),
    .b(w14),
    .sum(w15)
); */

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(w9),
    .s0(w2),
    .s1(w19),
    .out(w3)
);

Mux2to1 #(.size(32)) m_Mux_ALU_1(
    .sel(w11),
    .s0(w13),
    .s1(w1),
    .out(w17)
);

Mux2to1 #(.size(32)) m_Mux_ALU_2(
    .sel(w12),
    .s0(w14),
    .s1(w15),
    .out(w18)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(w7),
    .funct7(w4[30]),
    .funct3(w4[14:12]),
    .ALUCtl(w16)
);

ALU m_ALU(
    .ALUctl(w16),
    .BrLT(w23),
    .BrEq(w22),
    .A(w17),
    .B(w18),
    .ALUOut(w19)
    //,.zero(w16)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(w8),
    .memRead(w5),
    .address(w19),
    .writeData(w14),
    .readData(w20)
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(w6),
    .s0(w19),
    .s1(w20),
    .s2(w2),
    .out(w21)
);

BranchComp m_BranchComp(
    .Rs1(w13),
    .Rs2(w14),
    .BrLT(w23),
    .BrEq(w22)
);

endmodule
