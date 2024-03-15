module ysyx_23060187_top(
    input clk,
    input [31:0]inst,
    input rst,
    output [31:0]pc,
    output [31:0]result
);

    wire [6:0]opcode;
    wire [4:0]rs1;
    wire [4:0]rs2;
    wire [4:0]rd;
    wire [31:0]imm;
    wire [31:0]opnumber1;
    wire [31:0]opnumber2;
    wire opzero;
    wire opoverflow;
    wire [31:0]wdata;
    wire [31:0]waddr;
    wire wen;
    wire [1:0]ctrl;
    wire [31:0]oldpc;

    assign wen = 1;
    assign wdata = 0;
    assign waddr = 0;
    assign ctrl = 2'b00;
    assign oldpc = pc;

    ysyx_23060187_instDecode decode(.inst(inst[31:0]), .rs1(rs1[4:0]), .rs2(rs2[4:0]), .rd(rd[4:0]), .imm(imm[31:0]));
    ysyx_23060187_registerFile register1(.clk(clk), .wdata(wdata[31:0]), .waddr(waddr[31:0]), .raddr(rs1[4:0]), .rdata(opnumber1[31:0]));
    ysyx_23060187_registerFile register2(.clk(clk), .wdata(wdata[31:0]), .waddr(waddr[31:0]), .raddr(rs2[4:0]), .rdata(opnumber2[31:0]));
    ysyx_23060187_ALU alu(.opnum1(opnumber1[31:0]), .opnum2(opnumber2[31:0]), .ctrl(ctrl[1:0]), .result(result[31:0]), .alu_zero(opzero), .alu_overflow(opoverflow));
    ysyx_23060187_registerFile register3(.clk(clk), .wdata(opres[31:0]), .waddr(rd[4:0]), .raddr(rs1[4:0]), .rdata(opnumber1[31:0]));
    ysyx_23060187_pcRegister ocregister1(.clk(clk), .rst(rst), .pc_in(oldpc[31:0]), .pc_out(pc[31:0]));
    
endmodule 