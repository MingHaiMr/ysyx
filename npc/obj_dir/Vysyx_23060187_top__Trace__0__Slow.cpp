// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060187_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_init_sub__TOP__0(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+127,"pc", false,-1, 31,0);
    tracep->declBus(c+128,"reg_a0", false,-1, 31,0);
    tracep->declBus(c+129,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+130,"overflow_", false,-1);
    tracep->declBus(c+131,"result_", false,-1, 31,0);
    tracep->declBus(c+132,"aluctrl", false,-1, 3,0);
    tracep->declBit(c+133,"jump_", false,-1);
    tracep->pushNamePrefix("ysyx_23060187_top ");
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBus(c+127,"pc", false,-1, 31,0);
    tracep->declBus(c+128,"reg_a0", false,-1, 31,0);
    tracep->declBus(c+129,"reg_a5", false,-1, 31,0);
    tracep->declBit(c+130,"overflow_", false,-1);
    tracep->declBus(c+131,"result_", false,-1, 31,0);
    tracep->declBus(c+132,"aluctrl", false,-1, 3,0);
    tracep->declBit(c+133,"jump_", false,-1);
    tracep->declBus(c+33,"opcode", false,-1, 6,0);
    tracep->declBus(c+34,"fun3", false,-1, 2,0);
    tracep->declBus(c+35,"fun7", false,-1, 6,0);
    tracep->declBus(c+112,"result", false,-1, 31,0);
    tracep->declBus(c+36,"rs1", false,-1, 4,0);
    tracep->declBus(c+37,"rs2", false,-1, 4,0);
    tracep->declBus(c+134,"wdata", false,-1, 31,0);
    tracep->declBus(c+128,"gpr10", false,-1, 31,0);
    tracep->declBus(c+38,"rd", false,-1, 4,0);
    tracep->declBus(c+39,"imm", false,-1, 31,0);
    tracep->declBus(c+113,"src1", false,-1, 31,0);
    tracep->declBus(c+114,"src2", false,-1, 31,0);
    tracep->declBus(c+115,"opnumber1", false,-1, 31,0);
    tracep->declBus(c+116,"opnumber2", false,-1, 31,0);
    tracep->declBit(c+40,"wen", false,-1);
    tracep->declBus(c+132,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+135,"zero", false,-1);
    tracep->declBit(c+41,"auipc", false,-1);
    tracep->declBit(c+42,"jal", false,-1);
    tracep->declBit(c+43,"jalr", false,-1);
    tracep->declBit(c+44,"lui", false,-1);
    tracep->declBit(c+45,"addi", false,-1);
    tracep->declBit(c+46,"add", false,-1);
    tracep->declBit(c+47,"sub", false,-1);
    tracep->declBit(c+48,"sltiu", false,-1);
    tracep->declBit(c+117,"cout", false,-1);
    tracep->declBit(c+49,"sltu", false,-1);
    tracep->declBit(c+50,"bne", false,-1);
    tracep->declBit(c+51,"beq", false,-1);
    tracep->declBit(c+52,"sll", false,-1);
    tracep->declBit(c+53,"srl", false,-1);
    tracep->declBit(c+54,"and_", false,-1);
    tracep->declBit(c+55,"andi", false,-1);
    tracep->declBit(c+56,"or_", false,-1);
    tracep->declBit(c+57,"ori", false,-1);
    tracep->declBit(c+58,"xor_", false,-1);
    tracep->declBit(c+59,"xori", false,-1);
    tracep->declBit(c+60,"srli", false,-1);
    tracep->declBit(c+61,"slli", false,-1);
    tracep->declBit(c+62,"bge", false,-1);
    tracep->declBit(c+63,"bgeu", false,-1);
    tracep->declBit(c+64,"sra", false,-1);
    tracep->declBit(c+65,"srai", false,-1);
    tracep->declBit(c+66,"blt", false,-1);
    tracep->declBit(c+67,"bltu", false,-1);
    tracep->declBit(c+68,"slt", false,-1);
    tracep->declBit(c+69,"slti", false,-1);
    tracep->declBit(c+70,"mul", false,-1);
    tracep->declBit(c+71,"mulh", false,-1);
    tracep->declBit(c+72,"div", false,-1);
    tracep->declBit(c+73,"divu", false,-1);
    tracep->declBit(c+74,"rem", false,-1);
    tracep->declBit(c+75,"remu", false,-1);
    tracep->declBit(c+76,"lbu", false,-1);
    tracep->declBit(c+77,"sb", false,-1);
    tracep->declBit(c+78,"sw", false,-1);
    tracep->declBit(c+79,"lw", false,-1);
    tracep->declBit(c+80,"sh", false,-1);
    tracep->declBit(c+81,"lh", false,-1);
    tracep->declBit(c+82,"lhu", false,-1);
    tracep->declBit(c+133,"isjump", false,-1);
    tracep->declBus(c+83,"instruction", false,-1, 31,0);
    tracep->declBus(c+84,"imm_4_0", false,-1, 4,0);
    tracep->declBus(c+118,"shift_res", false,-1, 31,0);
    tracep->declBus(c+119,"sra_mask", false,-1, 31,0);
    tracep->declBus(c+120,"sra_res", false,-1, 31,0);
    tracep->declBus(c+121,"shift_amt", false,-1, 4,0);
    tracep->declQuad(c+99,"unsigned_prod", false,-1, 63,0);
    tracep->declQuad(c+101,"signed_prod", false,-1, 63,0);
    tracep->declBus(c+103,"prod", false,-1, 31,0);
    tracep->declBus(c+104,"unsigned_div_res", false,-1, 31,0);
    tracep->declBus(c+105,"signed_div_res", false,-1, 31,0);
    tracep->declBus(c+106,"div_res", false,-1, 31,0);
    tracep->declBus(c+107,"unsigned_rem_res", false,-1, 31,0);
    tracep->declBus(c+108,"signed_rem_res", false,-1, 31,0);
    tracep->declBus(c+109,"rem_res", false,-1, 31,0);
    tracep->declBit(c+137,"valid1", false,-1);
    tracep->declBit(c+85,"valid2", false,-1);
    tracep->declBit(c+86,"mem_wen", false,-1);
    tracep->declBus(c+87,"mem_rlen", false,-1, 31,0);
    tracep->declBus(c+110,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+122,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+111,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+136,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+88,"wmask", false,-1, 7,0);
    tracep->declBus(c+129,"gpr15", false,-1, 31,0);
    tracep->declBit(c+123,"overflow", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+132,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+115,"opnum1", false,-1, 31,0);
    tracep->declBus(c+116,"opnum2", false,-1, 31,0);
    tracep->declBus(c+112,"result", false,-1, 31,0);
    tracep->declBit(c+135,"zero", false,-1);
    tracep->declBit(c+117,"cout", false,-1);
    tracep->declBit(c+123,"overflow", false,-1);
    tracep->declBus(c+124,"tmp", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+83,"inst", false,-1, 31,0);
    tracep->declBus(c+36,"rs1", false,-1, 4,0);
    tracep->declBus(c+37,"rs2", false,-1, 4,0);
    tracep->declBus(c+38,"rd", false,-1, 4,0);
    tracep->declBus(c+39,"imm", false,-1, 31,0);
    tracep->declBus(c+33,"opcode", false,-1, 6,0);
    tracep->declBus(c+34,"fun3", false,-1, 2,0);
    tracep->declBus(c+35,"fun7", false,-1, 6,0);
    tracep->declBit(c+89,"U_type", false,-1);
    tracep->declBit(c+90,"I_type", false,-1);
    tracep->declBit(c+42,"J_type", false,-1);
    tracep->declBit(c+91,"B_type", false,-1);
    tracep->declBit(c+92,"R_type", false,-1);
    tracep->declBit(c+93,"S_type", false,-1);
    tracep->declBus(c+94,"U_imm", false,-1, 31,0);
    tracep->declBus(c+95,"I_imm", false,-1, 31,0);
    tracep->declBus(c+96,"J_imm", false,-1, 31,0);
    tracep->declBus(c+97,"B_imm", false,-1, 31,0);
    tracep->declBus(c+138,"R_imm", false,-1, 31,0);
    tracep->declBus(c+98,"S_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi1 ");
    tracep->declBus(c+83,"inst", false,-1, 31,0);
    tracep->declBus(c+128,"gpr10", false,-1, 31,0);
    tracep->declBus(c+127,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi2 ");
    tracep->declBit(c+137,"valid1", false,-1);
    tracep->declBit(c+85,"valid2", false,-1);
    tracep->declBit(c+86,"wen", false,-1);
    tracep->declBus(c+87,"mem_rlen", false,-1, 31,0);
    tracep->declBus(c+127,"raddr1", false,-1, 31,0);
    tracep->declBus(c+83,"rdata1", false,-1, 31,0);
    tracep->declBus(c+122,"raddr2", false,-1, 31,0);
    tracep->declBus(c+136,"rdata2", false,-1, 31,0);
    tracep->declBus(c+110,"waddr", false,-1, 31,0);
    tracep->declBus(c+111,"wdata", false,-1, 31,0);
    tracep->declBus(c+88,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("maincontroller ");
    tracep->declBus(c+34,"fun3", false,-1, 2,0);
    tracep->declBus(c+35,"fun7", false,-1, 6,0);
    tracep->declBus(c+33,"opcode", false,-1, 6,0);
    tracep->declBus(c+132,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+45,"addi", false,-1);
    tracep->declBit(c+41,"auipc", false,-1);
    tracep->declBit(c+42,"jal", false,-1);
    tracep->declBit(c+43,"jalr", false,-1);
    tracep->declBit(c+44,"lui", false,-1);
    tracep->declBit(c+46,"add", false,-1);
    tracep->declBit(c+47,"sub", false,-1);
    tracep->declBit(c+48,"sltiu", false,-1);
    tracep->declBit(c+49,"sltu", false,-1);
    tracep->declBit(c+50,"bne", false,-1);
    tracep->declBit(c+51,"beq", false,-1);
    tracep->declBit(c+52,"sll", false,-1);
    tracep->declBit(c+53,"srl", false,-1);
    tracep->declBit(c+54,"and_", false,-1);
    tracep->declBit(c+55,"andi", false,-1);
    tracep->declBit(c+56,"or_", false,-1);
    tracep->declBit(c+57,"ori", false,-1);
    tracep->declBit(c+58,"xor_", false,-1);
    tracep->declBit(c+59,"xori", false,-1);
    tracep->declBit(c+60,"srli", false,-1);
    tracep->declBit(c+61,"slli", false,-1);
    tracep->declBit(c+62,"bge", false,-1);
    tracep->declBit(c+63,"bgeu", false,-1);
    tracep->declBit(c+64,"sra", false,-1);
    tracep->declBit(c+65,"srai", false,-1);
    tracep->declBit(c+66,"blt", false,-1);
    tracep->declBit(c+67,"bltu", false,-1);
    tracep->declBit(c+68,"slt", false,-1);
    tracep->declBit(c+69,"slti", false,-1);
    tracep->declBit(c+70,"mul", false,-1);
    tracep->declBit(c+71,"mulh", false,-1);
    tracep->declBit(c+72,"div", false,-1);
    tracep->declBit(c+73,"divu", false,-1);
    tracep->declBit(c+74,"rem", false,-1);
    tracep->declBit(c+75,"remu", false,-1);
    tracep->declBit(c+76,"lbu", false,-1);
    tracep->declBit(c+77,"sb", false,-1);
    tracep->declBit(c+78,"sw", false,-1);
    tracep->declBit(c+79,"lw", false,-1);
    tracep->declBit(c+80,"sh", false,-1);
    tracep->declBit(c+81,"lh", false,-1);
    tracep->declBit(c+82,"lhu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcRegister ");
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBit(c+126,"rst", false,-1);
    tracep->declBit(c+42,"jal", false,-1);
    tracep->declBit(c+43,"jalr", false,-1);
    tracep->declBit(c+50,"bne", false,-1);
    tracep->declBit(c+51,"beq", false,-1);
    tracep->declBit(c+62,"bge", false,-1);
    tracep->declBit(c+63,"bgeu", false,-1);
    tracep->declBit(c+66,"blt", false,-1);
    tracep->declBit(c+67,"bltu", false,-1);
    tracep->declBus(c+39,"imm", false,-1, 31,0);
    tracep->declBus(c+113,"src1", false,-1, 31,0);
    tracep->declBit(c+133,"isjump", false,-1);
    tracep->declBus(c+127,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register1 ");
    tracep->declBus(c+139,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+140,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+125,"clk", false,-1);
    tracep->declBus(c+134,"wdata", false,-1, 31,0);
    tracep->declBus(c+38,"waddr", false,-1, 4,0);
    tracep->declBit(c+40,"wen", false,-1);
    tracep->declBus(c+36,"raddr1", false,-1, 4,0);
    tracep->declBus(c+113,"rdata1", false,-1, 31,0);
    tracep->declBus(c+37,"raddr2", false,-1, 4,0);
    tracep->declBus(c+114,"rdata2", false,-1, 31,0);
    tracep->declBus(c+128,"GPR10", false,-1, 31,0);
    tracep->declBus(c+129,"GPR15", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_init_top(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060187_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060187_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060187_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_register(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060187_top___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060187_top___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060187_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_full_sub_0(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060187_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060187_top___024root*>(voidSelf);
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060187_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root__trace_full_sub_0(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[16]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[17]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[18]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[19]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[20]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[21]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[22]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[23]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[24]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[25]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[26]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[27]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[28]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[29]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[30]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[31]),32);
    bufp->fullCData(oldp+33,((0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)),7);
    bufp->fullCData(oldp+34,((7U & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+35,((vlSelf->ysyx_23060187_top__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+36,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+38,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060187_top__DOT__imm),32);
    bufp->fullBit(oldp+40,((1U & (~ ((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen) 
                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__bgeu) 
                                                 | ((IData)(vlSelf->ysyx_23060187_top__DOT__blt) 
                                                    | (IData)(vlSelf->ysyx_23060187_top__DOT__bltu)))))))))));
    bufp->fullBit(oldp+41,((0x17U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullBit(oldp+42,((0x6fU == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullBit(oldp+43,(vlSelf->ysyx_23060187_top__DOT__jalr));
    bufp->fullBit(oldp+44,((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullBit(oldp+45,((IData)((0x13U == (0x707fU 
                                              & vlSelf->ysyx_23060187_top__DOT__instruction)))));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                            & (0U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+47,(vlSelf->ysyx_23060187_top__DOT__sub));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_23060187_top__DOT__sltiu));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_23060187_top__DOT__sltu));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_23060187_top__DOT__bne));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_23060187_top__DOT__beq));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_23060187_top__DOT__sll));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_23060187_top__DOT__srl));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_23060187_top__DOT__and_));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_23060187_top__DOT__andi));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_23060187_top__DOT__or_));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_23060187_top__DOT__ori));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_23060187_top__DOT__xor_));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_23060187_top__DOT__xori));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_23060187_top__DOT__srli));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_23060187_top__DOT__slli));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_23060187_top__DOT__bge));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_23060187_top__DOT__bgeu));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_23060187_top__DOT__sra));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_23060187_top__DOT__srai));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_23060187_top__DOT__blt));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_23060187_top__DOT__bltu));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_23060187_top__DOT__slt));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_23060187_top__DOT__slti));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_23060187_top__DOT__mul));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_23060187_top__DOT__mulh));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_23060187_top__DOT__div));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_23060187_top__DOT__divu));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_23060187_top__DOT__rem));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_23060187_top__DOT__remu));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_23060187_top__DOT__lbu));
    bufp->fullBit(oldp+77,((IData)((0x23U == (0x707fU 
                                              & vlSelf->ysyx_23060187_top__DOT__instruction)))));
    bufp->fullBit(oldp+78,((IData)((0x2023U == (0x707fU 
                                                & vlSelf->ysyx_23060187_top__DOT__instruction)))));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_23060187_top__DOT__lw));
    bufp->fullBit(oldp+80,((IData)((0x1023U == (0x707fU 
                                                & vlSelf->ysyx_23060187_top__DOT__instruction)))));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_23060187_top__DOT__lh));
    bufp->fullBit(oldp+82,(vlSelf->ysyx_23060187_top__DOT__lhu));
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060187_top__DOT__instruction),32);
    bufp->fullCData(oldp+84,((0x1fU & vlSelf->ysyx_23060187_top__DOT__imm)),5);
    bufp->fullBit(oldp+85,(vlSelf->ysyx_23060187_top__DOT__valid2));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_23060187_top__DOT__mem_wen));
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060187_top__DOT__mem_rlen),32);
    bufp->fullCData(oldp+88,(((IData)((0x23U == (0x707fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)))
                               ? 1U : ((IData)((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                        ? 0xfU : ((IData)(
                                                          (0x1023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                                   ? 3U
                                                   : 0U)))),8);
    bufp->fullBit(oldp+89,(((0x17U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                            | (0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)))));
    bufp->fullBit(oldp+90,(((3U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                            | ((0x13U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                               | (0x67U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))))));
    bufp->fullBit(oldp+91,((0x63U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullBit(oldp+92,((0x33U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullBit(oldp+93,((0x23U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullIData(oldp+94,((0xfffff000U & vlSelf->ysyx_23060187_top__DOT__instruction)),32);
    bufp->fullIData(oldp+95,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->ysyx_23060187_top__DOT__instruction 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+96,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_23060187_top__DOT__instruction) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+97,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+98,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                 >> 7U))))),32);
    bufp->fullQData(oldp+99,(((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                               ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0
                               : 0ULL)),64);
    bufp->fullQData(oldp+101,(((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0
                                : 0ULL)),64);
    bufp->fullIData(oldp+103,(((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                    ? (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0)
                                    : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                              ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                  ? (IData)(
                                                            (vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0 
                                                             >> 0x20U))
                                                  : 0U)
                                              : 0U))),32);
    bufp->fullIData(oldp+104,(((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                ? VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                : 0U)),32);
    bufp->fullIData(oldp+105,(((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                ? VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                : 0U)),32);
    bufp->fullIData(oldp+106,(((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                ? ((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                    ? VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                    : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                              ? ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                                  ? 
                                                 VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                                  : 0U)
                                              : 0U))),32);
    bufp->fullIData(oldp+107,(((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                : 0U)),32);
    bufp->fullIData(oldp+108,(((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                : 0U)),32);
    bufp->fullIData(oldp+109,(((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                ? ((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                    ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                    : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                              ? ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                                  : 0U)
                                              : 0U))),32);
    bufp->fullIData(oldp+110,(((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen)
                                ? (vlSelf->ysyx_23060187_top__DOT__imm 
                                   + vlSelf->ysyx_23060187_top__DOT__src1)
                                : 0U)),32);
    bufp->fullIData(oldp+111,(((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen)
                                ? vlSelf->ysyx_23060187_top__DOT__src2
                                : 0U)),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060187_top__DOT__result),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060187_top__DOT__src1),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060187_top__DOT__src2),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060187_top__DOT__opnumber1),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060187_top__DOT__opnumber2),32);
    bufp->fullBit(oldp+117,(vlSelf->ysyx_23060187_top__DOT__cout));
    bufp->fullIData(oldp+118,((vlSelf->ysyx_23060187_top__DOT__src1 
                               >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))),32);
    bufp->fullIData(oldp+119,((~ (0xffffffffU >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))),32);
    bufp->fullIData(oldp+120,((((~ (0xffffffffU >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))) 
                                & (- (IData)((vlSelf->ysyx_23060187_top__DOT__src1 
                                              >> 0x1fU)))) 
                               | (vlSelf->ysyx_23060187_top__DOT__src1 
                                  >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))),32);
    bufp->fullCData(oldp+121,(vlSelf->ysyx_23060187_top__DOT__shift_amt),5);
    bufp->fullIData(oldp+122,(vlSelf->ysyx_23060187_top__DOT__mem_raddr),32);
    bufp->fullBit(oldp+123,(vlSelf->ysyx_23060187_top__DOT__overflow));
    bufp->fullIData(oldp+124,(vlSelf->ysyx_23060187_top__DOT__alu__DOT__tmp),32);
    bufp->fullBit(oldp+125,(vlSelf->clk));
    bufp->fullBit(oldp+126,(vlSelf->rst));
    bufp->fullIData(oldp+127,(vlSelf->pc),32);
    bufp->fullIData(oldp+128,(vlSelf->reg_a0),32);
    bufp->fullIData(oldp+129,(vlSelf->reg_a5),32);
    bufp->fullBit(oldp+130,(vlSelf->overflow_));
    bufp->fullIData(oldp+131,(vlSelf->result_),32);
    bufp->fullCData(oldp+132,(vlSelf->aluctrl),4);
    bufp->fullBit(oldp+133,(vlSelf->jump_));
    bufp->fullIData(oldp+134,(((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))
                                ? vlSelf->ysyx_23060187_top__DOT__imm
                                : ((IData)(vlSelf->__VdfgTmp_h431b7873__0)
                                    ? (((vlSelf->ysyx_23060187_top__DOT__result 
                                         >> 0x1fU) 
                                        | ((vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                            >> 0x1fU) 
                                           > (vlSelf->ysyx_23060187_top__DOT__opnumber2 
                                              >> 0x1fU)))
                                        ? 1U : 0U) : 
                                   (((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__sltu))
                                     ? ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h4e0dfd58__0)
                                         ? 1U : 0U)
                                     : (((IData)(vlSelf->ysyx_23060187_top__DOT__sra) 
                                         | (IData)(vlSelf->ysyx_23060187_top__DOT__srai))
                                         ? (((~ (0xffffffffU 
                                                 >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))) 
                                             & (- (IData)(
                                                          (vlSelf->ysyx_23060187_top__DOT__src1 
                                                           >> 0x1fU)))) 
                                            | (vlSelf->ysyx_23060187_top__DOT__src1 
                                               >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))
                                         : (((IData)(vlSelf->ysyx_23060187_top__DOT__mul) 
                                             | (IData)(vlSelf->ysyx_23060187_top__DOT__mulh))
                                             ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                                  ? (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0)
                                                  : 0U)
                                                 : 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                   ? (IData)(
                                                             (vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0 
                                                              >> 0x20U))
                                                   : 0U)
                                                  : 0U))
                                             : (((IData)(vlSelf->ysyx_23060187_top__DOT__div) 
                                                 | (IData)(vlSelf->ysyx_23060187_top__DOT__divu))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                                   ? 
                                                  VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                                    ? 
                                                   VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                                    : 0U)
                                                   : 0U))
                                                 : 
                                                (((IData)(vlSelf->ysyx_23060187_top__DOT__rem) 
                                                  | (IData)(vlSelf->ysyx_23060187_top__DOT__remu))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                                    ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                     ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__lbu)
                                                   ? 
                                                  (0xffU 
                                                   & vlSelf->ysyx_23060187_top__DOT__mem_rdata)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_23060187_top__DOT__lw)
                                                    ? vlSelf->ysyx_23060187_top__DOT__mem_rdata
                                                    : 
                                                   ((IData)(vlSelf->ysyx_23060187_top__DOT__lh)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSelf->ysyx_23060187_top__DOT__mem_rdata 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & vlSelf->ysyx_23060187_top__DOT__mem_rdata))
                                                     : 
                                                    ((IData)(vlSelf->ysyx_23060187_top__DOT__lhu)
                                                      ? 
                                                     (0xffffU 
                                                      & vlSelf->ysyx_23060187_top__DOT__mem_rdata)
                                                      : vlSelf->ysyx_23060187_top__DOT__result)))))))))))),32);
    bufp->fullBit(oldp+135,(((0U == vlSelf->ysyx_23060187_top__DOT__result) 
                             | ((0U == vlSelf->ysyx_23060187_top__DOT__opnumber1) 
                                & ((0U == vlSelf->ysyx_23060187_top__DOT__opnumber2) 
                                   & (6U == (IData)(vlSelf->aluctrl)))))));
    bufp->fullIData(oldp+136,(vlSelf->ysyx_23060187_top__DOT__mem_rdata),32);
    bufp->fullBit(oldp+137,(1U));
    bufp->fullIData(oldp+138,(vlSelf->ysyx_23060187_top__DOT__decode__DOT__R_imm),32);
    bufp->fullIData(oldp+139,(5U),32);
    bufp->fullIData(oldp+140,(0x20U),32);
}
