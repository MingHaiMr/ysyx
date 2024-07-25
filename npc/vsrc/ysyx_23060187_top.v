module ysyx_23060187_top(
    input clk,
    input rst,
    output [31:0] pc,
    output [31:0] reg_a0,
    output [31:0] reg_a5,
    output cout_
);

    wire [6:0] opcode;
    wire [2:0] fun3;
    wire [6:0] fun7;
    wire [31:0] result;
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
    wire lbu;
    wire sb;
    wire sw;
    wire lw;
    wire sh;
    wire lh;
    wire lhu;

    wire isjump;
    /* verilator lint_off UNOPTFLAT */
    wire [31:0]instruction;
    /* verilator lint_off UNOPTFLAT */
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
    wire [31:0]mem_raddr;
    wire [31:0]mem_wdata;
    wire [31:0]mem_rdata;
    wire [7:0]wmask;
    wire [31:0] gpr15;
    assign reg_a0 = gpr10;
    assign reg_a5 = gpr15;
    assign cout_ = cout;
    assign valid = 1;
    assign wen = (sb | sw | sh) ? 0 : 1;
    assign mem_wen = (sb) ? 1 : 0;
    assign opnumber1 = (auipc | jal | jalr) ? pc : src1;
    assign opnumber2 = (addi | auipc | sltiu | andi | ori | xori | slti) ? imm : 
                       (add | sltu | bne | beq | sll | srl | and_ | or_ | xor_ | bge | bgeu | blt | slt | sub) ? src2 : 
                       (srli | slli) ? {{27{1'b0}}, imm_4_0} : 32'd4;
    assign wdata = lui ? imm : 
                   (slt | slti) ? ((opnumber1[31] > opnumber2[31] || result[31] == 1) ? 32'd1 : 32'd0) :
                   (sltiu | sltu) ? ((cout == 1) ? 32'd1 : 32'd0) : 
                   (sra | srai) ? sra_res : 
                   (mul | mulh) ? prod : 
                   (div | divu) ? div_res : 
                   (rem | remu) ? rem_res : 
                   (lbu) ? {24'b0, mem_rdata[7:0]} :
                   (lw) ? mem_rdata :
                   (lh) ? {{16{mem_rdata[15]}}, mem_rdata[15:0]} :
                   (lhu) ? {16'b0, mem_rdata[15:0]} :
                   result;
    assign isjump = ((bne || beq) && (opnumber1 == opnumber2)) || ((bge || blt) && (opnumber1[31] > opnumber2[31] || result[31] == 1)) || ((bgeu || bltu) && cout == 0);
    assign imm_4_0 = imm[4:0];
    assign shift_amt = sra ? src2[4:0] : imm_4_0;
    assign shift_res = src1 >> shift_amt;
    assign sra_mask = ~(32'hffffffff >> shift_amt);
    assign sra_res = ({32{src1[31]}} & sra_mask) | shift_res;
    assign unsigned_prod = mul ? (src1 * src2) : 0;
    assign signed_prod = mulh ? ($signed(src1) * $signed(src2)) : 0;
    assign prod = mul ? unsigned_prod[31:0] : mulh ? signed_prod[63:32] : 0; 
    assign unsigned_div_res = divu ? (src1 / src2) : 0;
    assign signed_div_res = div ? ($signed(src1) / $signed(src2)) : 0;
    assign div_res = div ? signed_div_res : divu ? unsigned_div_res : 0;
    assign unsigned_rem_res = remu ? (src1 % src2) : 0;
    assign signed_rem_res = rem ? ($unsigned(src1) % $unsigned(src2)) : 0;
    assign rem_res = remu ? unsigned_rem_res : rem ? signed_rem_res : 0;
    assign mem_raddr = (lbu | lw | lh | lhu) ? (src1 + imm) : 0;
    assign mem_waddr = (sb | sw | sh) ? (src1 + imm) : 0;
    assign mem_wdata = (sb | sw | sh) ? src2 : 0;
    assign wmask = (sb) ? 8'h1 : 
                   (sw) ? 8'h15 : 
                   (sh) ? 8'h3 : 0;
    

    ysyx_23060187_instDecode decode(
        .inst(instruction[31:0]), 
        .rs1(rs1[4:0]), 
        .rs2(rs2[4:0]), 
        .rd(rd[4:0]), 
        .imm(imm[31:0]), 
        .opcode(opcode[6:0]), 
        .fun3(fun3[2:0]), 
        .fun7(fun7[6:0])
    );

    ysyx_23060187_registerFile register1(.clk(clk), 
        .wdata(wdata[31:0]), 
        .waddr(rd[4:0]), 
        .wen(wen), 
        .raddr1(rs1[4:0]), 
        .rdata1(src1[31:0]),
        .raddr2(rs2[4:0]),
        .rdata2(src2[31:0]), 
        .GPR10(gpr10[31:0]),
        .GPR15(gpr15[31:0])
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

    ebreak_dpi dpi1(.inst(instruction[31:0]), 
        .gpr10(gpr10[31:0]), 
        .pc(pc[31:0])
    );

    mem_dpi dpi2(.valid(valid),
        .wen(mem_wen),
        .raddr1(pc[31:0]),
        .rdata1(instruction[31:0]),
        .raddr2(mem_raddr[31:0]),
        .rdata2(mem_rdata[31:0]),
        .waddr(mem_waddr),
        .wdata(mem_wdata[31:0]),
        .wmask(wmask[7:0])
    );

    ysyx_23060187_maincontroller maincontroller(.fun3(fun3[2:0]), 
        .fun7(fun7[6:0]),
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
        .remu(remu),
        .lbu(lbu),
        .sb(sb),
        .sw(sw),
        .lw(lw),
        .sh(sh),
        .lh(lh),
        .lhu(lhu)
    );
    
    

endmodule 

// Path: npc/vsrc/ysyx_23060187_ALU.v










