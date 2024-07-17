module IF_ID_reg (
    input clk, rst,
    input [31:0] inst_in, pc_in,
    output reg [31:0] inst_out, pc_out
);

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            inst_out <= 0;
            pc_out <= 0;
        end else begin
            inst_out <= inst_in;
            pc_out <= pc_in;
        end
    end
    
endmodule
