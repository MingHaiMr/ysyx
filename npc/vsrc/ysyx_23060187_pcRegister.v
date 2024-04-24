module ysyx_23060187_pcRegister(
    input clk,
    input rst,
    input jal,
    input jalr,
    input [31:0]imm,
    input [31:0]src1,
    output reg [31:0]pc_out 
);

    always @(posedge clk or posedge rst) begin
        if(rst) begin pc_out <= 32'h80000000; end
        else if(jal) begin pc_out <= pc_out + imm; end
        else if(jalr) begin pc_out <= (src1 + imm) & (32'b11111111_11111111_11111111_11111110); end
        else begin pc_out <= pc_out + 4; end
    end

endmodule




































































