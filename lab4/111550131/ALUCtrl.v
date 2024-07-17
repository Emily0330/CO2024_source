/* verilator lint_off CASEINCOMPLETE */
module ALUCtrl (
    input [2:0] ALUOp,
    input funct7, //[25:31] of the instruction //only use 30th bit
    input [2:0] funct3,//[12:14] of the instruction
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation

    wire [6:0] combined= {ALUOp,funct7,funct3}; //combine ALUOp, funct7, funct3 to a 7-bit wire

    always @(combined) begin
        case(combined)
            7'b1000000: ALUCtl = 4'b0001; //add
            7'b1100000: ALUCtl = 4'b0001; //addi
            7'b1101000: ALUCtl = 4'b0001; //addi
            7'b0000010: ALUCtl = 4'b0001; //lw and sw
            7'b0001010: ALUCtl = 4'b0001; //lw and sw
            7'b1001000: ALUCtl = 4'b0100; //sub
            // 7'b0100000: ALUCtl = 4'b0101; //beq
            // 7'b0101000: ALUCtl = 4'b0101; //beq
            // 7'b0100001: ALUCtl = 4'b1001; //bne
            // 7'b0101001: ALUCtl = 4'b1001; //bne
            // 7'b0100100: ALUCtl = 4'b1010; //blt
            // 7'b0101100: ALUCtl = 4'b1010; //blt
            // 7'b0100101: ALUCtl = 4'b1011; //bge
            // 7'b0101101: ALUCtl = 4'b1011; //bge
            7'b1000010: ALUCtl = 4'b0110; //slt
            7'b1100010: ALUCtl = 4'b0110; //slti
            7'b1101010: ALUCtl = 4'b0110; //slti
            7'b1000111: ALUCtl = 4'b0111; //and
            7'b1100111: ALUCtl = 4'b0111; //andi
            7'b1101111: ALUCtl = 4'b0111; //andi
            7'b1000110: ALUCtl = 4'b1000; //or
            7'b1100110: ALUCtl = 4'b1000; //ori
            7'b1101110: ALUCtl = 4'b1000; //ori
            7'b0110000: ALUCtl = 4'b0001; //jal
            7'b0110001: ALUCtl = 4'b0001; //jal
            7'b0110011: ALUCtl = 4'b0001; //jal
            7'b0110100: ALUCtl = 4'b0001; //jal
            7'b0110101: ALUCtl = 4'b0001; //jal
            7'b0110110: ALUCtl = 4'b0001; //jal
            7'b0110111: ALUCtl = 4'b0001; //jal
            7'b0111000: ALUCtl = 4'b0001; //jal
            7'b0111001: ALUCtl = 4'b0001; //jal
            7'b0111010: ALUCtl = 4'b0001; //jal
            7'b0111011: ALUCtl = 4'b0001; //jal
            7'b0111100: ALUCtl = 4'b0001; //jal
            7'b0111101: ALUCtl = 4'b0001; //jal
            7'b0111110: ALUCtl = 4'b0001; //jal
            7'b0111111: ALUCtl = 4'b0001; //jal
            7'b1010000: ALUCtl = 4'b0001; //jalr
            7'b1011000: ALUCtl = 4'b0001; //jalr
            default: ALUCtl = 4'b0000; //default
        endcase
    end

endmodule

