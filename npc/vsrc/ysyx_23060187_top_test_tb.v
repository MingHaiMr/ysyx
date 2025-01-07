`timescale 1ns/1ns

module ysyx_23060187_top_test_tb();
    reg clk;
    reg rst;
    wire [31:0]reg_s1;
    wire [31:0]reg_s2;
    wire overflow;
    wire [31:0]result;
    wire [3:0]aluctrl;
    wire jump;
    wire [31:0]pc;
    wire [31:0] num1;
    wire [31:0] num2;
    wire [31:0] num3;
    wire [31:0] num4;
    wire [31:0] num5;
    wire [31:0] num6;
    wire [31:0] num7;
    wire [31:0] num8;
    ysyx_23060187_top_test u1(
                               .clk(clk),
                               .rst(rst),
                               .pc(pc[31:0]),
                               .reg_s1(reg_s1[31:0]),
                               .reg_s2(reg_s2[31:0]),
                               .overflow_(overflow),
                               .result_(result[31:0]),
                               .aluctrl(aluctrl[3:0]),
                               .jump_(jump),
                               .num1(num1[31:0]),
                               .num2(num2[31:0]),
                               .num3(num3[31:0]),
                               .num4(num4[31:0]),
                               .num5(num5[31:0]),
                               .num6(num6[31:0]),
                               .num7(num7[31:0]),
                               .num8(num8[31:0])
                           );
    parameter clk_period = 10;
    always #(clk_period/2) clk = ~clk;
    initial begin
        $dumpfile("wave.vcd");        //生成的vcd文件名称
        $dumpvars(0, ysyx_23060187_top_test_tb);    //tb模块名称
    end
    initial begin
        clk = 0;
        rst = 0;
        #20
         @(negedge clk);
        rst = 1;
        #20
         @(negedge clk);
        rst = 0;
        $display("============SIM Start =============");
        #100000000;
        $display("============ Time Out =============");
        $display("1:0x%08x",num1);
        $display("2:0x%08x",num2);
        $display("3:0x%08x",num3);
        $display("4:0x%08x",num4);
        $display("5:0x%08x",num5);
        $display("6:0x%08x",num6);
        $display("7:0x%08x",num7);
        $display("8:0x%08x",num8);
        $finish();
    end
endmodule
