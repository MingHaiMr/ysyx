module ysyx_23060187_IDU(
    input clk,
    input rst,
    input [31:0] IFU_inst,
    input EXU_IDU_ready,
    input IFU_IDU_valid,
    output reg IDU_EXU_valid,
    output reg IDU_IFU_ready,
    output reg [31:0] raddr1,
    output reg [31:0] raddr2,
    output reg [31:0] waddr,
    output reg [31:0] wdata
);
    
    wire opcode;
    wire fun3;
    wire fun7;
    wire rs1;
    wire rs2;
    wire rd;

    



endmodule