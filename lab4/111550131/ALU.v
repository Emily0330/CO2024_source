/* verilator lint_off CASEINCOMPLETE */
module ALU (
    input [3:0] ALUCtl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut
    //,output zero
);
    // ALU has two operand, it execute different operator based on ALUCtl wire 
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement

    always @(ALUCtl or A or B) begin
        case(ALUCtl)
            4'b0001: ALUOut = A + B; //add, addi, jalr, jal
            4'b0100: ALUOut = $signed(A) - $signed(B); //sub
            4'b0110: ALUOut = ($signed(A) < $signed(B)) ? 32'd1 : 32'd0; //slt and slti
            4'b0111: ALUOut = A & B; //and and andi
            4'b1000: ALUOut = A | B; //or and ori
        endcase
    end

endmodule

