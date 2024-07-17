/* verilator lint_off CASEINCOMPLETE */
module Control (
    input [6:0] opcode,
    output reg branch,
    output reg memRead,
    output reg memtoReg,
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
                branch = 0;
                memRead = 0;
                memtoReg = 0;
                ALUOp = 2'b100;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 1;
            end
            7'b0000011: begin // I-type (load word)
                branch = 0;
                memRead = 1;
                memtoReg = 1;
                ALUOp = 2'b000;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
            end
            7'b0100011: begin // S-type
                branch = 0;
                memRead = 0;
                memtoReg = 0; // don't care
                ALUOp = 2'b000;
                memWrite = 1;
                ALUSrc = 1;
                regWrite = 0;
            end
            7'b1100011: begin // SB-type //branch
                branch = 1;
                memRead = 0;
                memtoReg = 0; // don't care
                ALUOp = 2'b010;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 0;
            end
            7'b0010011: begin // I-type (arithmetic and logical)
                branch = 0;
                memRead = 0;
                memtoReg = 0;
                ALUOp = 2'b110;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
            end
        endcase
    end

endmodule

