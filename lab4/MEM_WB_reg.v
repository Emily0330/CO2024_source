module MEM_WB_reg (
    input clk, rst,
    input regWrite_i,
    input [1:0] memtoReg_i,
    input [31:0] MEM_result_i, next_pc_i, ALU_result_i,
    input [4:0] rd_i, 
    output reg regWrite_o,
    output reg [1:0] memtoReg_o,
    output reg [31:0] MEM_result_o, next_pc_o, ALU_result_o,
    output reg [4:0] rd_o
);
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            regWrite_o <= 0;
            memtoReg_o <= 0;
            MEM_result_o <= 0;
            next_pc_o <= 0;
            rd_o <= 0;
            ALU_result_o <= 0;
        end else begin
            regWrite_o <= regWrite_i;
            memtoReg_o <= memtoReg_i;
            MEM_result_o <= MEM_result_i;
            next_pc_o <= next_pc_i;
            rd_o <= rd_i;
            ALU_result_o <= ALU_result_i;
        end
    end

endmodule
