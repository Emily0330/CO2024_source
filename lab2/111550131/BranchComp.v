module BranchComp(
    input [31:0] Rs1,
    input [31:0] Rs2,
    output BrLT, // Output for less than condition
    output BrEq  // Output for equality condition
);
    assign BrEq = (Rs1 == Rs2); // Set BrEq high if Rs1 equals Rs2
    assign BrLT = ($signed(Rs1) < $signed(Rs2)); // Set BrLT high if Rs1 is less than Rs2 in signed comparison
endmodule
