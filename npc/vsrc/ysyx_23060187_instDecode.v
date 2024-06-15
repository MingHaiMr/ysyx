module ysyx_23060187_instDecode(
    input [31:0] inst,
    output [4:0] rs1,
    output [4:0] rs2,
    output [4:0] rd,
    output [31:0] imm,
    output [6:0] opcode,
    output [2:0] fun3,
    output [6:0] fun7
);
    wire U_type;
    wire I_type;
    wire J_type;

    wire [31:0] U_imm;
    wire [31:0] I_imm;
    wire [31:0] J_imm;

    assign opcode = inst[6:0];
    assign fun3 = inst[14:12];
    assign fun7 = inst[31:25];
    assign rs1 = inst[19:15];
    assign rs2 = inst[24:20];
    assign rd = inst[11:7];

    assign U_type = (opcode == 7'b0010111) | (opcode == 7'b0110111);
    assign I_type = (opcode == 7'b0000011) | (opcode == 7'b0010011) | (opcode == 7'b1100111);
    assign J_type = (opcode == 7'b1101111);

    assign U_imm = {inst[31:12], {12{1'b0}}};
    assign I_imm = {{20{inst[31]}}, inst[31:20]};
    assign J_imm = {{12{inst[31]}}, inst[19:12], inst[20], inst[30:21], {1'b0}};

    assign imm = I_type ? I_imm : U_type ? U_imm : J_imm;
                
endmodule








