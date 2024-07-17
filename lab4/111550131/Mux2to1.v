module Mux2to1 #(
    parameter size = 32
) 
(
    input sel, // select signal
    input signed [size-1:0] s0, // what is [size-1:0] // 32 bit signed number
    input signed [size-1:0] s1,
    output signed [size-1:0] out
);
    // TODO: implement your 2to1 multiplexer here
    
    assign out = (sel) ? s1 : s0; //if sel is 1, output s1, else output s0
    
endmodule

