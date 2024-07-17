/* verilator lint_off CASEINCOMPLETE */
module Control (
    input [6:0] opcode,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [2:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    always @(opcode) begin
        case (opcode)
            7'b0110011: begin // R-type
                memRead = 0;
                memtoReg = 2'b00;
                ALUOp = 3'b100;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 1;
            end
            7'b0000011: begin // I-type (load word)
                memRead = 1;
                memtoReg = 2'b01;
                ALUOp = 3'b000;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
            end
            7'b0100011: begin // S-type
                memRead = 0;
                memtoReg = 2'b00; // don't care
                ALUOp = 3'b000;
                memWrite = 1;
                ALUSrc = 1;
                regWrite = 0;
            end
            7'b1100011: begin // SB-type //branch
                memRead = 0;
                memtoReg = 2'b00; // don't care
                ALUOp = 3'b010;
                memWrite = 0;
                ALUSrc = 1; // don't care
                regWrite = 0;
            end
            7'b0010011: begin // I-type (arithmetic and logical)
                memRead = 0;
                memtoReg = 2'b00;
                ALUOp = 3'b110;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
            end
            7'b1101111: begin // UJ-type //jal
                memRead = 0;
                memtoReg = 2'b10;
                ALUOp = 3'b011;
                memWrite = 0;
                ALUSrc = 1; // don't care
                regWrite = 1;
            end
            7'b1100111: begin // I-type (jalr)
                memRead = 0;
                memtoReg = 2'b10;
                ALUOp = 3'b101;
                memWrite = 0;
                ALUSrc = 1; // don't care
                regWrite = 1;
            end
        endcase
    end

endmodule
