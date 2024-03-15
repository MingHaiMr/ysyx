module ysyx_23060187_ALU(
    input [31:0]opnum1,
    input [31:0]opnum2,
    input [1:0]ctrl,
    output [31:0]result,
    output alu_zero,
    output alu_overflow
);
    always @(*) begin
        case (alu_ctrl)
            2'b00: begin 
                result = opnum1 + opnum2;
                alu_overflow = ((opnum1[31] = opnum2[31]) && (result[31] != opnum1[31]));
                alu_zero = ~(| result);
            end
            default: begin
                result = 0;
                alu_overflow = 0;
                alu_zero = 0;
            end
        endcase 
    end

endmodule

