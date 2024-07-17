module PC (
    input clk,
    input rst, // active low reset
    input hazard_i, // stall
    input [31:0] pc_i,
    output reg [31:0] pc_o
);

    // TODO: implement your program counter here
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            pc_o <= 0;
        end else begin
            if (hazard_i) begin
                pc_o <= pc_o;
            end else begin
                pc_o <= pc_i;
            end
        end
    end

endmodule
