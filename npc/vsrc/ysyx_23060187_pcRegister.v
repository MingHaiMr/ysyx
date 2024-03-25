module ysyx_23060187_pcRegister(
    input clk,
    input rst,
    output reg [31:0]pc_out 
);

    always @(posedge clk or posedge rst) begin
        if(rst) begin pc_out <= 32'h80000000; end
        else begin pc_out <= pc_out + 4; end
    end

endmodule




































































