module ysyx_23060187_registerFile #(parameter ADDR_WIDTH = 5, parameter DATA_WIDTH = 32) (
        input clk,
        input [DATA_WIDTH-1:0] wdata,
        input [ADDR_WIDTH-1:0] waddr,
        input wen,
        input [ADDR_WIDTH-1:0] raddr1,
        output [DATA_WIDTH-1:0] rdata1,
        input [ADDR_WIDTH-1:0] raddr2,
        output [DATA_WIDTH-1:0] rdata2,
        output [DATA_WIDTH-1:0] GPR9,
        output [DATA_WIDTH-1:0] GPR18
    );
    integer i;
    initial begin
        for(i = 0; i < 32; i++)
            rf[i] = 32'h0;
    end

    reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
    always @(posedge clk) begin
        //for(i = 0; i < 32; i++)
        //    $display("%d: %h\n", i, rf[i]);
        if (wen && waddr != 0)
            rf[waddr] <= wdata;
    end
    assign rdata1 = rf[raddr1];
    assign rdata2 = rf[raddr2];
    assign GPR9 = rf[9];
    assign GPR18 = rf[18];
endmodule
