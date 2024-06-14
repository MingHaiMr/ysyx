module ysyx_23060187_top(
    input clk,
    input [31:0] inst,
    input rst,
    output reg [31:0] pc,
    output [31:0] result,
    output [6:0] opcode,
    output [2:0] fun3,
    output fun7,
    output [31:0] unusedata,
    output [4:0] rs2
);

    //wire [6:0] opcode;
    wire [4:0] rs1;
    wire [4:0] rs2;
    wire auipc;
    wire jal;
    wire jalr;
    wire lui;
    wire [4:0] rd;
    wire [31:0] imm;
    wire [31:0] src1;
    wire [31:0] src2;
    wire [31:0] opnumber1;
    wire [31:0] opnumber2;
    wire wen;
    wire [3:0] ALUctrl;
    wire addi;
    wire zero;
    wire [31:0] wdata;
    wire [31:0] gpr10;
    wire add;
    wire sub;
    wire sltiu;
    wire cout;
    wire sltu;
    wire bne;
    wire beq;
    wire sll;
    wire srl;
    wire and_;
    wire andi;
    wire or_;
    wire ori;
    wire xor_;
    wire xori;
    wire srli;
    wire slli;
    wire bge;
    wire bgeu;
    wire isjump;
    wire [4:0]shamt;

    assign opnumber1 = (auipc | jal | jalr) ? pc : src1;
    assign opnumber2 = (addi | auipc | sltiu | andi | ori | xori) ? imm : (add | sltu | bne | beq | sll | srl | and_ | or_ | xor_ | bge | bgeu) ? src2 : (srli | slli) ? shamt: 32'd4;
    assign wen = 1;
    assign wdata = lui ? imm : (sltiu | sltu) ? (cout == 1 ? 0 : 1) : result;
    assign isjump = ((bne || beq) && (src1 == src2)) || (bge && (src1[31] > src2[31] || result[31] == 1)) || (bgeu && cout == 0);
    assign shamt = imm[4:0];

    ysyx_23060187_instDecode decode(
        .inst(inst[31:0]), 
        .rs1(rs1[4:0]), 
        .rs2(rs2[4:0]), 
        .rd(rd[4:0]), 
        .imm(imm[31:0]), 
        .opcode(opcode[6:0]), 
        .fun3(fun3[2:0]), 
        .fun7(fun7)
    );

    ysyx_23060187_registerFile register1(.clk(clk), 
        .wdata(wdata[31:0]), 
        .waddr(rd[4:0]), 
        .wen(wen), 
        .raddr1(rs1[4:0]), 
        .rdata1(src1[31:0]),
        .raddr2(rs2[4:0]),
        .rdata2(src2[31:0]), 
        .GPR10(gpr10[31:0])
    );

    ysyx_23060187_ALU alu(.ALUctrl(ALUctrl[3:0]), 
        .opnum1(opnumber1[31:0]), 
        .opnum2(opnumber2[31:0]), 
        .result(result[31:0]), 
        .zero(zero),
        .cout(cout)
    );

    ysyx_23060187_pcRegister pcRegister(.clk(clk), 
        .rst(rst), 
        .jal(jal), 
        .jalr(jalr), 
        .bne(bne),
        .beq(beq),
        .bge(bge),
        .bgeu(bgeu),
        .imm(imm[31:0]), 
        .src1(src1[31:0]), 
        .isjump(isjump),
        .pc_out(pc[31:0])
    );

    dpi dpi1(.inst(inst[31:0]), 
        .gpr10(gpr10[31:0]), 
        .pc(pc[31:0])
    );

    ysyx_23060187_maincontroller maincontroller(.fun3(fun3[2:0]), 
        .opcode(opcode[6:0]), 
        .ALUctrl(ALUctrl[3:0]), 
        .addi(addi), 
        .auipc(auipc), 
        .jal(jal), 
        .jalr(jalr), 
        .lui(lui),
        .add(add),
        .sub(sub),
        .sltiu(sltiu),
        .sltu(sltu),
        .bne(bne),
        .beq(beq),
        .sll(sll),
        .srl(srl),
        .and_(and_),
        .andi(andi),
        .or_(or_),
        .ori(ori),
        .xor_(xor_),
        .xori(xori),
        .srli(srli),
        .slli(slli),
        .bge(bge),
        .bgeu(bgeu)
    );
    
    

endmodule 

// Path: npc/vsrc/ysyx_23060187_ALU.v










