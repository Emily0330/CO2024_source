module EX_MEM_reg (
    input clk, rst,
    input [31:0] in_aluResult, in_pc, in_rs2,
    input [4:0] in_rd,
    input in_memRead, in_memtoReg, in_memWrite, in_regWrite, in_branch, in_zero,
    output reg [31:0] out_aluResult, out_pc, out_rs2,
    output reg [4:0] out_rd,
    output reg out_memRead, out_memtoReg, out_memWrite, out_regWrite, out_branch, out_zero
);

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            out_aluResult <= 0;
            out_pc <= 0;
            out_rd <= 0;
            out_rs2 <= 0;
            out_memRead <= 0;
            out_memtoReg <= 0;
            out_memWrite <= 0;
            out_regWrite <= 0;
            out_branch <= 0;
            out_zero <= 0;
        end else begin
            out_aluResult <= in_aluResult;
            out_pc <= in_pc;
            out_rd <= in_rd;
            out_rs2 <= in_rs2;
            out_memRead <= in_memRead;
            out_memtoReg <= in_memtoReg;
            out_memWrite <= in_memWrite;
            out_regWrite <= in_regWrite;
            out_branch <= in_branch;
            out_zero <= in_zero;
        end
    end
endmodule
