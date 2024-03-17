module ysyx_23060187_ALU(
    input [31:0]opnum1,
    input [31:0]opnum2,
    output [31:0]result
);
    assign result = opnum1 + opnum2;
    //assign alu_overflow = ((opnum1[31] == opnum2[31]) && (result[31] != opnum1[31]));
    //assign alu_zero = ~(| result);
    

endmodule







