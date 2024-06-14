module ysyx_23060187_ALU(
    input [3:0] ALUctrl,
    input [31:0] opnum1,
    input [31:0] opnum2,
    output reg [31:0] result,
    output zero,
    output reg cout
);
    assign zero = (result == 0);
    always @(ALUctrl, opnum1, opnum2) begin
        case(ALUctrl)
            0: begin result = opnum1 & opnum2; cout = 0; end
            1: begin result = opnum1 | opnum2; cout = 0; end
            2: {cout, result} = opnum1 + opnum2;
            3: begin result = opnum1 << opnum2; cout = 0; end
            4: begin result = opnum1 >> opnum2; cout = 0; end
            5: begin result = opnum1 ^ opnum2; cout = 0; end
            6: {cout, result} = opnum1 + ~opnum2 + 1;
            default: result = 0;
        endcase
    end
    

endmodule







