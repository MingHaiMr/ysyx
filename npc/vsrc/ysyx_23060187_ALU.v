module ysyx_23060187_ALU(
        input [3:0] ALUctrl,
        input [31:0] opnum1,
        input [31:0] opnum2,
        output reg [31:0] result,
        output zero,
        output reg cout,
        output reg overflow
    );
    reg [31:0]tmp;
    assign zero = (result == 0) || ((opnum1 == 0 && opnum2 == 0) && (ALUctrl == 4'd6));
    always @(*) begin
        case(ALUctrl)
            0: begin
                result = opnum1 & opnum2;
                cout = 0;
                tmp = 0;
                overflow = 0;
            end
            1: begin
                result = opnum1 | opnum2;
                cout = 0;
                tmp  = 0;
                overflow = 0;
            end
            2: begin
                {cout, result} = opnum1 + opnum2;
                tmp = 0;
                overflow = ((opnum1[31] == opnum2[31]) && (result[31] != opnum1[31]));
            end
            3: begin
                result = opnum1 << opnum2;
                cout = 0;
                tmp = 0;
                overflow = 0;
            end
            4: begin
                result = opnum1 >> opnum2;
                cout = 0;
                tmp = 0;
                overflow = 0;
            end
            5: begin
                result = opnum1 ^ opnum2;
                cout = 0;
                tmp = 0;
                overflow = 0;
            end
            6: begin
                tmp = opnum2 ^ 32'b11111111_11111111_11111111_11111111 + 32'd1;
                result = opnum1 - opnum2;
                cout = 0;
                overflow = (opnum1 < opnum2) ? 1 : 0;
            end
            default: begin
                result = 0 ;
                tmp = 0;
                overflow = 0;
            end
        endcase
    end


endmodule







