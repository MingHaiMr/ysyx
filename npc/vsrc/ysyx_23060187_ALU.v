module ysyx_23060187_ALU(
    input [3:0]ALUctrl,
    input [31:0]opnum1,
    input [31:0]opnum2,
    output reg [31:0]result,
    output zero
);
    assign zero = (result == 0);
    always @(ALUctrl, opnum1, opnum2) begin
        case(ALUctrl)
            0: result = opnum1 & opnum2;
            1: result = opnum1 | opnum2;
            2: result = opnum1 + opnum2;
            6: result = opnum1 - opnum2;
            default: result = 0;
        endcase
    end
    

endmodule







