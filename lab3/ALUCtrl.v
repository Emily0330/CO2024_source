/* verilator lint_off CASEINCOMPLETE */
module ALUCtrl (
    input [1:0] ALUOp,
    input funct7, //[25:31] of the instruction //only use 30th bit
    input [2:0] funct3,//[12:14] of the instruction
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation

    wire [5:0] combined= {ALUOp,funct7,funct3}; //combine ALUOp, funct7, funct3 to a 6-bit wire

    always @(combined) begin
        case(combined)
            6'b100000: ALUCtl = 4'b0001; //add
            6'b110000: ALUCtl = 4'b0001; //addi
            6'b111000: ALUCtl = 4'b0001; //addi
            6'b000010: ALUCtl = 4'b0001; //lw and sw
            6'b001010: ALUCtl = 4'b0001; //lw and sw
            6'b101000: ALUCtl = 4'b0100; //sub
            6'b010000: ALUCtl = 4'b0100; //beq
            6'b011000: ALUCtl = 4'b0100; //beq
            6'b100010: ALUCtl = 4'b0110; //slt
            6'b110010: ALUCtl = 4'b0110; //slti
            6'b111010: ALUCtl = 4'b0110; //slti
            6'b100111: ALUCtl = 4'b0111; //and
            6'b110111: ALUCtl = 4'b0111; //andi
            6'b111111: ALUCtl = 4'b0111; //andi
            6'b100110: ALUCtl = 4'b1000; //or
            6'b110110: ALUCtl = 4'b1000; //ori
            6'b111110: ALUCtl = 4'b1000; //ori
        endcase
    end

endmodule

