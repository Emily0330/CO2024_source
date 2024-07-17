module EX_MEM_reg (
    input clk, rst,
    input regWrite_i, memRead_i, memWrite_i,
    input [1:0] memtoReg_i,
    input [31:0] ALU_result_i, next_pc_i, rs2_i,
    input [4:0] rd_i,
    output reg regWrite_o, memRead_o, memWrite_o,
    output reg [1:0] memtoReg_o,
    output reg [31:0] ALU_result_o, next_pc_o, rs2_o,
    output reg [4:0] rd_o
);
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            regWrite_o <= 0;
            memRead_o <= 0;
            memWrite_o <= 0;
            memtoReg_o <= 0;
            ALU_result_o <= 0;
            next_pc_o <= 0;
            rs2_o <= 0;
            rd_o <= 0;
        end else begin
            regWrite_o <= regWrite_i;
            memRead_o <= memRead_i;
            memWrite_o <= memWrite_i;
            memtoReg_o <= memtoReg_i;
            ALU_result_o <= ALU_result_i;
            next_pc_o <= next_pc_i;
            rs2_o <= rs2_i;
            rd_o <= rd_i;
        end
    end
endmodule
