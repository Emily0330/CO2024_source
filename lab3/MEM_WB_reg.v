module MEM_WB_reg (
    input clk, rst,
    input [31:0] in_memData, in_aluResult,
    input [4:0] in_rd,
    input in_memtoReg, in_regWrite,
    output reg [31:0] out_memData, out_aluResult,
    output reg [4:0] out_rd,
    output reg out_memtoReg, out_regWrite
);
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            out_memData <= 0;
            out_aluResult <= 0;
            out_rd <= 0;
            out_memtoReg <= 0;
            out_regWrite <= 0;
        end else begin
            out_memData <= in_memData;
            out_aluResult <= in_aluResult;
            out_rd <= in_rd;
            out_memtoReg <= in_memtoReg;
            out_regWrite <= in_regWrite;
        end
    end
endmodule
