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
    wire auipc;
    wire jal;
    wire jalr;
    wire lui;
    wire [4:0]rd;
    wire [31:0]imm;
    wire [31:0]src1;
    wire [31:0]opnumber1;
    wire [31:0]opnumber2;
    wire wen;
    wire [3:0]ALUctrl;
    wire addi;
    wire zero;
    wire [31:0]wdata;

    assign opnumber1 = (auipc | jal | jalr) ? pc : src1;
    assign opnumber2 = (addi | auipc) ? imm : 32'd4;
    assign wen = 1;
    assign wdata = lui ? imm : result;

    ysyx_23060187_instDecode decode(.inst(inst[31:0]), .rs1(rs1[4:0]), .rs2(rs2[4:0]), .rd(rd[4:0]), .imm(imm[31:0]), .opcode(opcode[6:0]), .fun3(fun3[2:0]), .fun7(fun7));
    ysyx_23060187_registerFile register1(.clk(clk), .wdata(wdata[31:0]), .waddr(rd[4:0]), .wen(wen), .raddr(rs1[4:0]), .rdata(src1[31:0]));
    ysyx_23060187_ALU alu(.ALUctrl(ALUctrl[3:0]), .opnum1(opnumber1[31:0]), .opnum2(opnumber2[31:0]), .result(result[31:0]), .zero(zero));
    ysyx_23060187_pcRegister pcRegister(.clk(clk), .rst(rst), .jal(jal), .jalr(jalr), .imm(imm[31:0]), .src1(src1[31:0]), .pc_out(pc));
    dpi dpi1(.inst(inst[31:0]), .clk(clk));
    ysyx_23060187_maincontroller maincontroller(.fun3(fun3[2:0]), .opcode(opcode[6:0]), .ALUctrl(ALUctrl[3:0]), .addi(addi), .auipc(auipc), .jal(jal), .jalr(jalr), .lui(lui));
    
       



endmodule 

// Path: npc/vsrc/ysyx_23060187_ALU.v










