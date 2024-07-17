/* verilator lint_off CASEINCOMPLETE */
module BranchComp(
    input [31:0] rs1_i,
    input [31:0] rs2_i,
    input [6:0] opcode_i,
    input [2:0] funct3_i,
    output reg flush_o
);
    assign flush_o = (opcode_i == 7'b1101111) | (opcode_i == 7'b1100111) | ((opcode_i == 7'b1100011) & ((funct3_i == 3'b000 & rs1_i == rs2_i) | (funct3_i == 3'b001 & rs1_i != rs2_i) | (funct3_i == 3'b100 & rs1_i < rs2_i) | (funct3_i == 3'b101 & rs1_i >= rs2_i)));

endmodule
