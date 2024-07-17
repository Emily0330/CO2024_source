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
wire signed [2:0] w7; // AluOp
wire signed w4,w5,w6,w8,w9,w10,w16;

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

Control m_Control(
    .opcode(w3[6:0]),
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
    .regWrite(w10),
    .readReg1(w3[19:15]),
    .readReg2(w3[24:20]),
    .writeReg(w3[11:7]),
    .writeData(w21),
    .readData1(w11),
    .readData2(w12)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(w3[31:0]),
    .imm(w13)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(w13),
    .o(w14)
);

Adder m_Adder_2(
    .a(w1),
    .b(w14),
    .sum(w15)
);

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(w4 & w16),
    .s0(w2),
    .s1(w15),
    .out(w18)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(w9),
    .s0(w12),
    .s1(w13),
    .out(w23)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(w7),
    .funct7(w3[30]),
    .funct3(w3[14:12]),
    .ALUCtl(w22)
);

ALU m_ALU(
    .ALUctl(w22),
    .A(w11),
    .B(w23),
    .ALUOut(w19),
    .zero(w16)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(w8),
    .memRead(w5),
    .address(w19),
    .writeData(w12),
    .readData(w20)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(w6),
    .s0(w19),
    .s1(w20),
    .out(w21)
);

endmodule
