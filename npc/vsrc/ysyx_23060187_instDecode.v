module ysyx_23060187_instDecode(
    input [31:0] inst,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [31:0] imm,
    output [6:0] opcode,
    output [2:0] fun3,
    output fun7
);

    //wire [6:0]opcode;
    //wire [2:0]fun3;
    //wire fun7;
    //wire isaddi;

    assign opcode = inst[6:0];
    assign fun3 = inst[14:12];
    assign fun7 = inst[30];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign rd = inst[11:7];
    //assign isaddi = (opcode == 7'b0010011) ? 1 : 0;
    assign imm = {{20{inst[31]}}, inst[31:20]};

endmodule








