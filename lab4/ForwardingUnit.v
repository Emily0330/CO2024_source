module ForwardingUnit (
    input EX_MEM_regWrite_i, MEM_WB_regWrite_i,
    input [4:0] EX_MEM_rd_i, MEM_WB_rd_i, ID_EX_rs1_num_i, ID_EX_rs2_num_i,
    output reg [1:0] fwdA_o, fwdB_o
);
    always @(*) begin
        if (EX_MEM_regWrite_i && (EX_MEM_rd_i != 0) && (EX_MEM_rd_i == ID_EX_rs1_num_i)) begin
            fwdA_o = 2'b10;
        end else if (MEM_WB_regWrite_i && (MEM_WB_rd_i != 0) && (MEM_WB_rd_i == ID_EX_rs1_num_i)) begin
            fwdA_o = 2'b01;
        end else begin
            fwdA_o = 2'b00;
        end

        if (EX_MEM_regWrite_i && (EX_MEM_rd_i != 0) && (EX_MEM_rd_i == ID_EX_rs2_num_i)) begin
            fwdB_o = 2'b10;
        end else if (MEM_WB_regWrite_i && (MEM_WB_rd_i != 0) && (MEM_WB_rd_i == ID_EX_rs2_num_i)) begin
            fwdB_o = 2'b01;
        end else begin
            fwdB_o = 2'b00;
        end
    end

endmodule
