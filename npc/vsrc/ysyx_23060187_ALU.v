module ysyx_23060187_ALU(
    input [3:0] ALUctrl,
    input [31:0] opnum1,
    input [31:0] opnum2,
    output reg [31:0] result,
    output zero,
    output reg cout
);
    reg [31:0]res;
    assign zero = (result == 0) || ((opnum1 == 0 && opnum2 == 0) && (ALUctrl == 4'd6));
    always @(*) begin
        case(ALUctrl)
            0: begin result = opnum1 & opnum2; cout = 0; res = 0; end
            1: begin result = opnum1 | opnum2; cout = 0; res = 0; end
            2: begin {cout, res} = opnum1 + opnum2; result = opnum1 + opnum2; end
            3: begin result = opnum1 << opnum2; cout = 0; res = 0; end
            4: begin result = opnum1 >> opnum2; cout = 0; res = 0; end
            5: begin result = opnum1 ^ opnum2; cout = 0; res = 0; end
            6: begin {cout, res} = opnum1 + opnum2 ^ 32'b11111111_11111111_11111111_11111111 + 32'd1; result = opnum1 - opnum2; end
            default: begin result = 0 ; res = 0; end
        endcase
    end
    

endmodule







