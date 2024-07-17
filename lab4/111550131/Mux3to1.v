module Mux3to1 #(
    parameter size = 32
) 
(
    input [1:0] sel, // select signal
    input signed [size-1:0] s0, // what is [size-1:0] // 32 bit signed number
    input signed [size-1:0] s1,
    input signed [size-1:0] s2,
    output signed [size-1:0] out
);
    // TODO: implement your 2to1 multiplexer here
    
    assign out = (sel == 2'b00) ? s0 : (sel == 2'b01) ? s1 : s2; //if sel is 1, output s1, else output s0
    
endmodule
