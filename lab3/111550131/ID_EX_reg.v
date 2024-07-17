module ID_EX_reg (
    input clk, rst,
    input [2:0] in_funct3,
    input [1:0] in_ALUOp,
    input in_regWrite, in_memRead, in_memtoReg, in_memWrite, in_branch, in_ALUSrc, in_funct7,
    input [31:0] in_pc, in_rs1, in_rs2, in_imm,
    input [4:0] in_rd,
    output reg [31:0] out_pc, out_rs1, out_rs2, out_imm,
    output reg out_regWrite, out_memRead, out_memtoReg, out_memWrite, out_branch, out_ALUSrc, out_funct7,
    output reg [2:0] out_funct3,
    output reg [1:0] out_ALUOp,
    output reg [4:0] out_rd
);

    always @(posedge clk or negedge rst) begin
        if (!rst) begin // active low reset
            out_pc <= 0;
            out_rs1 <= 0;
            out_rs2 <= 0;
            out_rd <= 0;
            out_imm <= 0;
            out_regWrite <= 0;
            out_memRead <= 0;
            out_memtoReg <= 0;
            out_memWrite <= 0;
            out_branch <= 0;
            out_ALUSrc <= 0;
            out_funct7 <= 0;
            out_funct3 <= 0;
            out_ALUOp <= 0;
        end else begin
            out_pc <= in_pc;
            out_rs1 <= in_rs1;
            out_rs2 <= in_rs2;
            out_rd <= in_rd;
            out_imm <= in_imm;
            out_regWrite <= in_regWrite;
            out_memRead <= in_memRead;
            out_memtoReg <= in_memtoReg;
            out_memWrite <= in_memWrite;
            out_branch <= in_branch;
            out_ALUSrc <= in_ALUSrc;
            out_funct7 <= in_funct7;
            out_funct3 <= in_funct3;
            out_ALUOp <= in_ALUOp;
        end
    end

endmodule
