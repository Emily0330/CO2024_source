module ID_EX_reg (
    input clk, rst, 
    input regWrite_i, memRead_i, memWrite_i, ALUSrc_i,
    input [1:0] memtoReg_i,
    input [2:0] ALUOp_i,
    input [31:0] next_pc_i, imm_i, rs1_i, rs2_i,
    input [4:0] rd_i, rs1_num_i, rs2_num_i,
    input funct7_i,
    input [2:0] funct3_i,
    output reg regWrite_o, memRead_o, memWrite_o, ALUSrc_o,
    output reg [1:0] memtoReg_o,
    output reg [2:0] ALUOp_o,
    output reg [31:0] next_pc_o, imm_o, rs1_o, rs2_o,
    output reg [4:0] rd_o, rs1_num_o, rs2_num_o,
    output reg funct7_o,
    output reg [2:0] funct3_o
);

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            regWrite_o <= 0;
            memRead_o <= 0;
            memWrite_o <= 0;
            ALUSrc_o <= 0;
            memtoReg_o <= 0;
            ALUOp_o <= 0;
            next_pc_o <= 0;
            imm_o <= 0;
            rs1_o <= 0;
            rs2_o <= 0;
            rd_o <= 0;
            funct7_o <= 0;
            funct3_o <= 0;
            rs1_num_o <= 0;
            rs2_num_o <= 0;
        end else begin
            regWrite_o <= regWrite_i;
            memRead_o <= memRead_i;
            memWrite_o <= memWrite_i;
            ALUSrc_o <= ALUSrc_i;
            memtoReg_o <= memtoReg_i;
            ALUOp_o <= ALUOp_i;
            next_pc_o <= next_pc_i;
            imm_o <= imm_i;
            rs1_o <= rs1_i;
            rs2_o <= rs2_i;
            rd_o <= rd_i;
            funct7_o <= funct7_i;
            funct3_o <= funct3_i;
            rs1_num_o <= rs1_num_i;
            rs2_num_o <= rs2_num_i;
        end
    end

endmodule
