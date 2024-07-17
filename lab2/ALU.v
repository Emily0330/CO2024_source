/* verilator lint_off CASEINCOMPLETE */
module ALU (
    input [3:0] ALUctl,
    input BrLT,
    input BrEq,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut
    //,output zero
);
    // ALU has two operand, it execute different operator based on ALUctl wire 
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement
    
    wire [5:0] combined = {ALUctl, BrEq, BrLT};

    always @(combined or A or B) begin
        case(combined)
            6'b000100: ALUOut = A + B; //add, addi, jalr, jal
            6'b000101: ALUOut = A + B; //add, addi, jalr, jal
            6'b000110: ALUOut = A + B; //add, addi, jalr, jal
            6'b010000: ALUOut = $signed(A) - $signed(B); //sub
            6'b010001: ALUOut = $signed(A) - $signed(B); //sub
            6'b010010: ALUOut = $signed(A) - $signed(B); //sub
            6'b011000: ALUOut = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0; //slt and slti
            6'b011001: ALUOut = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0; //slt and slti
            6'b011010: ALUOut = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0; //slt and slti
            6'b011100: ALUOut = A & B; //and and andi
            6'b011101: ALUOut = A & B; //and and andi
            6'b011110: ALUOut = A & B; //and and andi
            6'b100000: ALUOut = A | B; //or and ori
            6'b100001: ALUOut = A | B; //or and ori
            6'b100010: ALUOut = A | B; //or and ori
            6'b010100: ALUOut = A + 32'd4; //beq
            6'b010101: ALUOut = A + 32'd4; //beq
            6'b010110: ALUOut = A + B; //beq
            6'b100100: ALUOut = A + B; //bne
            6'b100101: ALUOut = A + B; //bne
            6'b100110: ALUOut = A + 32'd4; //bne
            6'b101000: ALUOut = A + 32'd4; //blt
            6'b101001: ALUOut = A + B; //blt
            6'b101010: ALUOut = A + 32'd4; //blt
            6'b101100: ALUOut = A + B; //bge
            6'b101101: ALUOut = A + 32'd4; //bge
            6'b101110: ALUOut = A + B; //bge
        endcase
    end

    //assign zero = (ALUOut == 0) ? 1 : 0;


endmodule

