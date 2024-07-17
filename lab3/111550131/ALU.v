/* verilator lint_off CASEINCOMPLETE */
module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero
);
    // ALU has two operand, it execute different operator based on ALUctl wire 
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement
    
    always @(ALUctl or A or B) begin
        case(ALUctl)
            4'b0001: ALUOut = A + B; //add and addi
            4'b0100: ALUOut = $signed(A) - $signed(B); //sub and beq
            4'b0110: ALUOut = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0; //slt and slti
            4'b0111: ALUOut = A & B; //and and andi
            4'b1000: ALUOut = A | B; //or and ori
        endcase
    end

    assign zero = (ALUOut == 0) ? 1 : 0;


endmodule

