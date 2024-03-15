module ysyx_23060187_pcRegister(
    input clk,
    input rst,
    input [31:0]pc_in,
    output reg [31:0]pc_out 
);
    always @(posedge clk or posedge rst) begin
        if(rst) pc_out <= 32'h80000000;
        else pc_out <= pc_in + 4;
    end
endmodule