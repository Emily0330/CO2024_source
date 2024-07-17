module HazardDetectionUnit (
    input memRead_i, ID_EX_regWrite_i, EX_MEM_regWrite_i,
    //input [6:0] opcode_i,
    input [4:0] IF_ID_rs1_i, IF_ID_rs2_i, ID_EX_rd_i, EX_MEM_rd_i,
    output reg hazard_o
);
    //assign hazard_o = (((memRead_i || (ID_EX_regWrite_i && (opcode_i == 7'b1100011))) && ((IF_ID_rs1_i == ID_EX_rd_i) || (IF_ID_rs2_i == ID_EX_rd_i))) || ( (EX_MEM_regWrite_i && (opcode_i == 7'b1100011)) && ((IF_ID_rs1_i == EX_MEM_rd_i) || (IF_ID_rs2_i == EX_MEM_rd_i)))) ? 1'b1 : 1'b0;
    assign hazard_o = (((memRead_i || ID_EX_regWrite_i) && ((IF_ID_rs1_i == ID_EX_rd_i) || (IF_ID_rs2_i == ID_EX_rd_i))) || ( EX_MEM_regWrite_i && ((IF_ID_rs1_i == EX_MEM_rd_i) || (IF_ID_rs2_i == EX_MEM_rd_i)))) ? 1'b1 : 1'b0;
endmodule
