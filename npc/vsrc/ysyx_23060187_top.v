module ysyx_23060187_top(
    input clk,
    input [31:0]inst,
    input rst,
    output reg [31:0]pc,
    output [31:0]result,
    output [6:0]opcode,
    output [2:0]fun3,
    output fun7,
    output [31:0]unusedata,
    output [4:0]rs2
);

    //wire [6:0]opcode;
    wire [4:0]rs1;
    //wire [4:0]rs2;
    wire [4:0]rd;
    wire [31:0]imm;
    wire [31:0]opnumber1;
    //wire [31:0]opnumber2;
    //wire opzero;
    //wire opoverflow;
    //wire [31:0]wdata;
    //wire [31:0]waddr;
    //wire wen;
    //wire [31:0]oldpc;

    //assign wen = 1;
    //assign wdata = 0;
    //assign waddr = 0;
    //assign oldpc = pc;

    ysyx_23060187_instDecode decode(.inst(inst[31:0]), .rs1(rs1[4:0]), .rs2(rs2[4:0]), .rd(rd[4:0]), .imm(imm[31:0]), .opcode(opcode[6:0]), .fun3(fun3[2:0]), .fun7(fun7));
    ysyx_23060187_registerFile register1(.clk(clk), .wdata(0), .waddr(0), .wen(0), .raddr(rs1[4:0]), .rdata(opnumber1[31:0]));
    //ysyx_23060187_registerFile register2(.clk(clk), .wdata(0), .waddr(0), .wen(0), .raddr(rs2[4:0]), .rdata(opnumber2[31:0]));
    ysyx_23060187_ALU alu(.opnum1(opnumber1[31:0]), .opnum2(imm[31:0]), .result(result[31:0]));
    ysyx_23060187_registerFile register3(.clk(clk), .wdata(result[31:0]), .waddr(rd[4:0]), .wen(1), .raddr(0), .rdata(unusedata[31:0]));
    ysyx_23060187_pcRegister pcRegister(.clk(clk), .rst(rst), .pc_out(pc));
    dpi dpi1(.inst(inst[31:0]), .clk(clk));

    
       



endmodule 

// Path: npc/vsrc/ysyx_23060187_ALU.v










