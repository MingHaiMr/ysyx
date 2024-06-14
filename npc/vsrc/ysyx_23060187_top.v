module ysyx_23060187_top(
    input clk,
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
    wire [31:0] wdata;
    wire [31:0] gpr10;
    wire [4:0] rd;
    wire [31:0] imm;
    wire [31:0] src1;
    wire [31:0] src2;
    wire [31:0] opnumber1;
    wire [31:0] opnumber2;
    wire wen;
    wire [3:0] ALUctrl;
    wire zero;

    wire auipc;
    wire jal;
    wire jalr;
    wire lui;
    wire addi;
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
    wire sra;
    wire srai;
    wire blt;
    wire bltu;
    wire slt;
    wire slti;
    wire mul;
    wire mulh;
    wire div;
    wire divu;
    wire rem;
    wire remu;

    wire isjump;

    wire [31:0]inst;
    wire [4:0]imm_4_0;
    wire [31:0]shift_res;
    wire [31:0]sra_mask;
    wire [31:0]sra_res;
    wire [4:0]shift_amt;
    wire [63:0]unsigned_prod;
    wire [63:0]signed_prod;
    wire [31:0]prod;
    wire [31:0]unsigned_div_res;
    wire [31:0]signed_div_res;
    wire [31:0]div_res;
    wire [31:0]unsigned_rem_res;
    wire [31:0]signed_rem_res;
    wire [31:0]rem_res;
    wire valid;
    wire mem_wen;
    wire [31:0]mem_waddr;
    wire [31:0]mem_data;
    wire [7:0]wmask;

    assign valid = 1;
    assign wen = 1;
    assign opnumber1 = (auipc | jal | jalr) ? pc : src1;
    assign opnumber2 = (addi | auipc | sltiu | andi | ori | xori | slti) ? imm : 
                       (add | sltu | bne | beq | sll | srl | and_ | or_ | xor_ | bge | bgeu | blt | slt) ? src2 : 
                       (srli | slli) ? imm_4_0 : 32'd4;
    assign wdata = lui ? imm : 
                   (slt | slti) ? (opnumber1[31] > opnumber2[31] || result[31] == 1) :
                   (sltiu | sltu) ? (cout == 1 ? 0 : 1) : 
                   (sra | srai) ? sra_res : 
                   (mul | mulh) ? prod : 
                   (div | divu) ? div_res : 
                   (rem | remu) ? rem_res : result;
    assign isjump = ((bne || beq) && (opnumber1 == opnumber2)) || ((bge || blt) && (opnumber1[31] > opnumber2[31] || result[31] == 1)) || ((bgeu || bltu) && cout == 0);
    assign imm_4_0 = imm[4:0];
    assign shift_amt = sra ? src2[4:0] : imm_4_0;
    assign shift_res = src1 >> shift_amt;
    assign sra_mask = ~(32'hffffffff >> shift_amt);
    assign sra_res = ({32{src[31]}} & sra_mask) | shift_res;
    assign unsigned_prod = mul ? (src1 * src2) : 0;
    assign signed_prod = mulh ? ($signed(src1) * $signed(src2)) : 0;
    assign prod = mul ? unsigned_prod[31:0] : mulh ? signed_prod[63:32] : 0; 
    assign unsigned_div_res = divu ? (src1 / src2) : 0;
    assign signed_div_res = div ? ($signed(src1) / $signed(src2)) : 0;
    assign div_res = div ? signed_div_res : divu ? unsigned_div_res : 0;
    assign unsigned_rem_res = remu ? (src1 % src2) : 0;
    assign signed_rem_res = rem ? ($unsigned(src1) % $unsigned(src2)) : 0;
    assign rem_res = remu ? unsigned_rem_res : rem ? signed_rem_res : 0;

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
        .blt(blt),
        .bltu(bltu),
        .imm(imm[31:0]), 
        .src1(src1[31:0]), 
        .isjump(isjump),
        .pc_out(pc[31:0])
    );

    ebreak_dpi dpi1(.inst(inst[31:0]), 
        .gpr10(gpr10[31:0]), 
        .pc(pc[31:0])
    );

    mem_dpi dpi2(.valid(valid),
        .wen(mem_wen),
        .raddr(pc[31:0]),
        .rdata(inst[31:0]),
        .waddr(mem_waddr),
        .wdata(mem_data[31:0]),
        .wmask(wmask[7:0])
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
        .bgeu(bgeu),
        .sra(sra),
        .srai(srai),
        .blt(blt),
        .bltu(bltu),
        .slt(slt),
        .slti(slti),
        .mul(mul),
        .mulh(mulh),
        .div(div),
        .divu(divu),
        .rem(rem),
        .remu(remu)
    );
    
    

endmodule 

// Path: npc/vsrc/ysyx_23060187_ALU.v










