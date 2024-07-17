module PC (
    input clk,
    input rst, // active low reset
    input [31:0] pc_i,
    output reg [31:0] pc_o
);

    // TODO: implement your program counter here
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            pc_o <= 0; //reset when rst is low
        end else begin
            pc_o <= pc_i;
        end
    end

endmodule

