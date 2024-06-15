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
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"rst", false,-1);
    tracep->declBus(c+121,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_23060187_top ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"rst", false,-1);
    tracep->declBus(c+121,"pc", false,-1, 31,0);
    tracep->declBus(c+31,"opcode", false,-1, 6,0);
    tracep->declBus(c+32,"fun3", false,-1, 2,0);
    tracep->declBus(c+33,"fun7", false,-1, 6,0);
    tracep->declBus(c+34,"result", false,-1, 31,0);
    tracep->declBus(c+35,"rs1", false,-1, 4,0);
    tracep->declBus(c+36,"rs2", false,-1, 4,0);
    tracep->declBus(c+17,"wdata", false,-1, 31,0);
    tracep->declBus(c+86,"gpr10", false,-1, 31,0);
    tracep->declBus(c+37,"rd", false,-1, 4,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"src1", false,-1, 31,0);
    tracep->declBus(c+13,"src2", false,-1, 31,0);
    tracep->declBus(c+38,"opnumber1", false,-1, 31,0);
    tracep->declBus(c+39,"opnumber2", false,-1, 31,0);
    tracep->declBit(c+2,"wen", false,-1);
    tracep->declBus(c+40,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+41,"zero", false,-1);
    tracep->declBit(c+42,"auipc", false,-1);
    tracep->declBit(c+43,"jal", false,-1);
    tracep->declBit(c+44,"jalr", false,-1);
    tracep->declBit(c+45,"lui", false,-1);
    tracep->declBit(c+46,"addi", false,-1);
    tracep->declBit(c+47,"add", false,-1);
    tracep->declBit(c+48,"sub", false,-1);
    tracep->declBit(c+49,"sltiu", false,-1);
    tracep->declBit(c+50,"cout", false,-1);
    tracep->declBit(c+51,"sltu", false,-1);
    tracep->declBit(c+52,"bne", false,-1);
    tracep->declBit(c+53,"beq", false,-1);
    tracep->declBit(c+54,"sll", false,-1);
    tracep->declBit(c+55,"srl", false,-1);
    tracep->declBit(c+56,"and_", false,-1);
    tracep->declBit(c+57,"andi", false,-1);
    tracep->declBit(c+58,"or_", false,-1);
    tracep->declBit(c+59,"ori", false,-1);
    tracep->declBit(c+60,"xor_", false,-1);
    tracep->declBit(c+61,"xori", false,-1);
    tracep->declBit(c+62,"srli", false,-1);
    tracep->declBit(c+63,"slli", false,-1);
    tracep->declBit(c+64,"bge", false,-1);
    tracep->declBit(c+57,"bgeu", false,-1);
    tracep->declBit(c+65,"sra", false,-1);
    tracep->declBit(c+66,"srai", false,-1);
    tracep->declBit(c+67,"blt", false,-1);
    tracep->declBit(c+59,"bltu", false,-1);
    tracep->declBit(c+68,"slt", false,-1);
    tracep->declBit(c+69,"slti", false,-1);
    tracep->declBit(c+70,"mul", false,-1);
    tracep->declBit(c+71,"mulh", false,-1);
    tracep->declBit(c+72,"div", false,-1);
    tracep->declBit(c+73,"divu", false,-1);
    tracep->declBit(c+74,"rem", false,-1);
    tracep->declBit(c+75,"remu", false,-1);
    tracep->declBit(c+3,"lbu", false,-1);
    tracep->declBit(c+4,"sb", false,-1);
    tracep->declBit(c+5,"sw", false,-1);
    tracep->declBit(c+6,"lw", false,-1);
    tracep->declBit(c+7,"sh", false,-1);
    tracep->declBit(c+8,"lh", false,-1);
    tracep->declBit(c+9,"lhu", false,-1);
    tracep->declBit(c+76,"isjump", false,-1);
    tracep->declBus(c+77,"instruction", false,-1, 31,0);
    tracep->declBus(c+10,"imm_4_0", false,-1, 4,0);
    tracep->declBus(c+18,"shift_res", false,-1, 31,0);
    tracep->declBus(c+78,"sra_mask", false,-1, 31,0);
    tracep->declBus(c+19,"sra_res", false,-1, 31,0);
    tracep->declBus(c+79,"shift_amt", false,-1, 4,0);
    tracep->declQuad(c+20,"unsigned_prod", false,-1, 63,0);
    tracep->declQuad(c+22,"signed_prod", false,-1, 63,0);
    tracep->declBus(c+24,"prod", false,-1, 31,0);
    tracep->declBus(c+25,"unsigned_div_res", false,-1, 31,0);
    tracep->declBus(c+26,"signed_div_res", false,-1, 31,0);
    tracep->declBus(c+27,"div_res", false,-1, 31,0);
    tracep->declBus(c+28,"unsigned_rem_res", false,-1, 31,0);
    tracep->declBus(c+29,"signed_rem_res", false,-1, 31,0);
    tracep->declBus(c+30,"rem_res", false,-1, 31,0);
    tracep->declBit(c+122,"valid", false,-1);
    tracep->declBit(c+4,"mem_wen", false,-1);
    tracep->declBus(c+14,"mem_waddr", false,-1, 31,0);
    tracep->declBus(c+15,"mem_raddr", false,-1, 31,0);
    tracep->declBus(c+16,"mem_wdata", false,-1, 31,0);
    tracep->declBus(c+80,"mem_rdata", false,-1, 31,0);
    tracep->declBus(c+11,"wmask", false,-1, 7,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+40,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+38,"opnum1", false,-1, 31,0);
    tracep->declBus(c+39,"opnum2", false,-1, 31,0);
    tracep->declBus(c+34,"result", false,-1, 31,0);
    tracep->declBit(c+41,"zero", false,-1);
    tracep->declBit(c+50,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+77,"inst", false,-1, 31,0);
    tracep->declBus(c+35,"rs1", false,-1, 4,0);
    tracep->declBus(c+36,"rs2", false,-1, 4,0);
    tracep->declBus(c+37,"rd", false,-1, 4,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+31,"opcode", false,-1, 6,0);
    tracep->declBus(c+32,"fun3", false,-1, 2,0);
    tracep->declBus(c+33,"fun7", false,-1, 6,0);
    tracep->declBit(c+81,"U_type", false,-1);
    tracep->declBit(c+82,"I_type", false,-1);
    tracep->declBit(c+43,"J_type", false,-1);
    tracep->declBus(c+83,"U_imm", false,-1, 31,0);
    tracep->declBus(c+84,"I_imm", false,-1, 31,0);
    tracep->declBus(c+85,"J_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi1 ");
    tracep->declBus(c+77,"inst", false,-1, 31,0);
    tracep->declBus(c+86,"gpr10", false,-1, 31,0);
    tracep->declBus(c+121,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi2 ");
    tracep->declBit(c+122,"valid", false,-1);
    tracep->declBit(c+4,"wen", false,-1);
    tracep->declBus(c+121,"raddr1", false,-1, 31,0);
    tracep->declBus(c+77,"rdata1", false,-1, 31,0);
    tracep->declBus(c+15,"raddr2", false,-1, 31,0);
    tracep->declBus(c+80,"rdata2", false,-1, 31,0);
    tracep->declBus(c+14,"waddr", false,-1, 31,0);
    tracep->declBus(c+16,"wdata", false,-1, 31,0);
    tracep->declBus(c+11,"wmask", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("maincontroller ");
    tracep->declBus(c+32,"fun3", false,-1, 2,0);
    tracep->declBus(c+33,"fun7", false,-1, 6,0);
    tracep->declBus(c+31,"opcode", false,-1, 6,0);
    tracep->declBus(c+40,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+46,"addi", false,-1);
    tracep->declBit(c+42,"auipc", false,-1);
    tracep->declBit(c+43,"jal", false,-1);
    tracep->declBit(c+44,"jalr", false,-1);
    tracep->declBit(c+45,"lui", false,-1);
    tracep->declBit(c+47,"add", false,-1);
    tracep->declBit(c+48,"sub", false,-1);
    tracep->declBit(c+49,"sltiu", false,-1);
    tracep->declBit(c+51,"sltu", false,-1);
    tracep->declBit(c+52,"bne", false,-1);
    tracep->declBit(c+53,"beq", false,-1);
    tracep->declBit(c+54,"sll", false,-1);
    tracep->declBit(c+55,"srl", false,-1);
    tracep->declBit(c+56,"and_", false,-1);
    tracep->declBit(c+57,"andi", false,-1);
    tracep->declBit(c+58,"or_", false,-1);
    tracep->declBit(c+59,"ori", false,-1);
    tracep->declBit(c+60,"xor_", false,-1);
    tracep->declBit(c+61,"xori", false,-1);
    tracep->declBit(c+62,"srli", false,-1);
    tracep->declBit(c+63,"slli", false,-1);
    tracep->declBit(c+64,"bge", false,-1);
    tracep->declBit(c+57,"bgeu", false,-1);
    tracep->declBit(c+65,"sra", false,-1);
    tracep->declBit(c+66,"srai", false,-1);
    tracep->declBit(c+67,"blt", false,-1);
    tracep->declBit(c+59,"bltu", false,-1);
    tracep->declBit(c+68,"slt", false,-1);
    tracep->declBit(c+69,"slti", false,-1);
    tracep->declBit(c+70,"mul", false,-1);
    tracep->declBit(c+71,"mulh", false,-1);
    tracep->declBit(c+72,"div", false,-1);
    tracep->declBit(c+73,"divu", false,-1);
    tracep->declBit(c+74,"rem", false,-1);
    tracep->declBit(c+75,"remu", false,-1);
    tracep->declBit(c+3,"lbu", false,-1);
    tracep->declBit(c+4,"sb", false,-1);
    tracep->declBit(c+5,"sw", false,-1);
    tracep->declBit(c+6,"lw", false,-1);
    tracep->declBit(c+7,"sh", false,-1);
    tracep->declBit(c+8,"lh", false,-1);
    tracep->declBit(c+9,"lhu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcRegister ");
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBit(c+120,"rst", false,-1);
    tracep->declBit(c+43,"jal", false,-1);
    tracep->declBit(c+44,"jalr", false,-1);
    tracep->declBit(c+52,"bne", false,-1);
    tracep->declBit(c+53,"beq", false,-1);
    tracep->declBit(c+64,"bge", false,-1);
    tracep->declBit(c+57,"bgeu", false,-1);
    tracep->declBit(c+67,"blt", false,-1);
    tracep->declBit(c+59,"bltu", false,-1);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+12,"src1", false,-1, 31,0);
    tracep->declBit(c+76,"isjump", false,-1);
    tracep->declBus(c+121,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register1 ");
    tracep->declBus(c+123,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+124,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+119,"clk", false,-1);
    tracep->declBus(c+17,"wdata", false,-1, 31,0);
    tracep->declBus(c+37,"waddr", false,-1, 4,0);
    tracep->declBit(c+2,"wen", false,-1);
    tracep->declBus(c+35,"raddr1", false,-1, 4,0);
    tracep->declBus(c+12,"rdata1", false,-1, 31,0);
    tracep->declBus(c+36,"raddr2", false,-1, 4,0);
    tracep->declBus(c+13,"rdata2", false,-1, 31,0);
    tracep->declBus(c+86,"GPR10", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+87+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->ysyx_23060187_top__DOT__imm),32);
    bufp->fullBit(oldp+2,((1U & (~ (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h38f3c40a__0)))));
    bufp->fullBit(oldp+3,(vlSelf->ysyx_23060187_top__DOT__lbu));
    bufp->fullBit(oldp+4,(vlSelf->ysyx_23060187_top__DOT__sb));
    bufp->fullBit(oldp+5,(vlSelf->ysyx_23060187_top__DOT__sw));
    bufp->fullBit(oldp+6,(vlSelf->ysyx_23060187_top__DOT__lw));
    bufp->fullBit(oldp+7,(vlSelf->ysyx_23060187_top__DOT__sh));
    bufp->fullBit(oldp+8,(vlSelf->ysyx_23060187_top__DOT__lh));
    bufp->fullBit(oldp+9,(vlSelf->ysyx_23060187_top__DOT__lhu));
    bufp->fullCData(oldp+10,((0x1fU & vlSelf->ysyx_23060187_top__DOT__imm)),5);
    bufp->fullCData(oldp+11,(((IData)(vlSelf->ysyx_23060187_top__DOT__sb)
                               ? 1U : ((IData)(vlSelf->ysyx_23060187_top__DOT__sw)
                                        ? 0x15U : ((IData)(vlSelf->ysyx_23060187_top__DOT__sh)
                                                    ? 3U
                                                    : 0U)))),8);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060187_top__DOT__src1),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060187_top__DOT__src2),32);
    bufp->fullIData(oldp+14,(((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h38f3c40a__0)
                               ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0
                               : 0U)),32);
    bufp->fullIData(oldp+15,((((IData)(vlSelf->ysyx_23060187_top__DOT__lbu) 
                               | ((IData)(vlSelf->ysyx_23060187_top__DOT__lw) 
                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__lh) 
                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__lhu))))
                               ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0
                               : 0U)),32);
    bufp->fullIData(oldp+16,(((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h38f3c40a__0)
                               ? vlSelf->ysyx_23060187_top__DOT__src2
                               : 0U)),32);
    bufp->fullIData(oldp+17,(((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))
                               ? vlSelf->ysyx_23060187_top__DOT__imm
                               : ((IData)(vlSelf->__VdfgTmp_heb5b0ecc__0)
                                   ? ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h996c9d82__0)
                                       ? 1U : 0U) : 
                                  (((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                    | (IData)(vlSelf->ysyx_23060187_top__DOT__sltu))
                                    ? ((IData)(vlSelf->ysyx_23060187_top__DOT__cout)
                                        ? 0U : 1U) : 
                                   (((IData)(vlSelf->ysyx_23060187_top__DOT__sra) 
                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                                        & (0x20U == 
                                           (vlSelf->ysyx_23060187_top__DOT__instruction 
                                            >> 0x19U))))
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
                                             ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                                 ? (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96db4c7f__0)
                                                 : 0U)
                                             : ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                  ? (IData)(
                                                            (vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5ba643a8__0 
                                                             >> 0x20U))
                                                  : 0U)
                                                 : 0U))
                                         : (((IData)(vlSelf->ysyx_23060187_top__DOT__div) 
                                             | (IData)(vlSelf->ysyx_23060187_top__DOT__divu))
                                             ? ((IData)(vlSelf->ysyx_23060187_top__DOT__div)
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
                                             : (((IData)(vlSelf->ysyx_23060187_top__DOT__rem) 
                                                 | (IData)(vlSelf->ysyx_23060187_top__DOT__remu))
                                                 ? 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                                   ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                                                   : 0U)
                                                  : 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                    ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
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
    bufp->fullIData(oldp+18,((vlSelf->ysyx_23060187_top__DOT__src1 
                              >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))),32);
    bufp->fullIData(oldp+19,((((~ (0xffffffffU >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))) 
                               & (- (IData)((vlSelf->ysyx_23060187_top__DOT__src1 
                                             >> 0x1fU)))) 
                              | (vlSelf->ysyx_23060187_top__DOT__src1 
                                 >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))),32);
    bufp->fullQData(oldp+20,(((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                               ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96db4c7f__0
                               : 0ULL)),64);
    bufp->fullQData(oldp+22,(((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                               ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5ba643a8__0
                               : 0ULL)),64);
    bufp->fullIData(oldp+24,(((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                               ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                   ? (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96db4c7f__0)
                                   : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                             ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                 ? (IData)(
                                                           (vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5ba643a8__0 
                                                            >> 0x20U))
                                                 : 0U)
                                             : 0U))),32);
    bufp->fullIData(oldp+25,(((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                               ? VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                               : 0U)),32);
    bufp->fullIData(oldp+26,(((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                               ? VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                               : 0U)),32);
    bufp->fullIData(oldp+27,(((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                               ? ((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                   ? VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                   : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                             ? ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                                 ? 
                                                VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                                 : 0U)
                                             : 0U))),32);
    bufp->fullIData(oldp+28,(((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                               ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                               : 0U)),32);
    bufp->fullIData(oldp+29,(((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                               ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                               : 0U)),32);
    bufp->fullIData(oldp+30,(((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                               ? ((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                   ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                                   : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                             ? ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                 ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                                                 : 0U)
                                             : 0U))),32);
    bufp->fullCData(oldp+31,((0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)),7);
    bufp->fullCData(oldp+32,((7U & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+33,((vlSelf->ysyx_23060187_top__DOT__instruction 
                              >> 0x19U)),7);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060187_top__DOT__result),32);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+36,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                       >> 7U))),5);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060187_top__DOT__opnumber1),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060187_top__DOT__opnumber2),32);
    bufp->fullCData(oldp+40,(vlSelf->ysyx_23060187_top__DOT__ALUctrl),4);
    bufp->fullBit(oldp+41,((0U == vlSelf->ysyx_23060187_top__DOT__result)));
    bufp->fullBit(oldp+42,((0x17U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullBit(oldp+43,((0x6fU == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullBit(oldp+44,(vlSelf->ysyx_23060187_top__DOT__jalr));
    bufp->fullBit(oldp+45,((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
    bufp->fullBit(oldp+46,((IData)((0x13U == (0x707fU 
                                              & vlSelf->ysyx_23060187_top__DOT__instruction)))));
    bufp->fullBit(oldp+47,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                            & (0U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                      >> 0x19U)))));
    bufp->fullBit(oldp+48,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                            & (0x20U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_23060187_top__DOT__sltiu));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_23060187_top__DOT__cout));
    bufp->fullBit(oldp+51,(vlSelf->ysyx_23060187_top__DOT__sltu));
    bufp->fullBit(oldp+52,(vlSelf->ysyx_23060187_top__DOT__bne));
    bufp->fullBit(oldp+53,(vlSelf->ysyx_23060187_top__DOT__beq));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_23060187_top__DOT__sll));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_23060187_top__DOT__srl));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_23060187_top__DOT__and_));
    bufp->fullBit(oldp+57,(vlSelf->ysyx_23060187_top__DOT__andi));
    bufp->fullBit(oldp+58,(vlSelf->ysyx_23060187_top__DOT__or_));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_23060187_top__DOT__ori));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_23060187_top__DOT__xor_));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_23060187_top__DOT__xori));
    bufp->fullBit(oldp+62,(vlSelf->ysyx_23060187_top__DOT__srli));
    bufp->fullBit(oldp+63,(vlSelf->ysyx_23060187_top__DOT__slli));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_23060187_top__DOT__bge));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_23060187_top__DOT__sra));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                            & (0x20U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                         >> 0x19U)))));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_23060187_top__DOT__blt));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_23060187_top__DOT__slt));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_23060187_top__DOT__slti));
    bufp->fullBit(oldp+70,(vlSelf->ysyx_23060187_top__DOT__mul));
    bufp->fullBit(oldp+71,(vlSelf->ysyx_23060187_top__DOT__mulh));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_23060187_top__DOT__div));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_23060187_top__DOT__divu));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_23060187_top__DOT__rem));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_23060187_top__DOT__remu));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_23060187_top__DOT__isjump));
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060187_top__DOT__instruction),32);
    bufp->fullIData(oldp+78,((~ (0xffffffffU >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))),32);
    bufp->fullCData(oldp+79,(vlSelf->ysyx_23060187_top__DOT__shift_amt),5);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_23060187_top__DOT__mem_rdata),32);
    bufp->fullBit(oldp+81,(((0x17U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                            | (0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)))));
    bufp->fullBit(oldp+82,(((3U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                            | ((0x13U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                               | (0x67U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))))));
    bufp->fullIData(oldp+83,((0xfffff000U & vlSelf->ysyx_23060187_top__DOT__instruction)),32);
    bufp->fullIData(oldp+84,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->ysyx_23060187_top__DOT__instruction 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+85,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->ysyx_23060187_top__DOT__instruction) 
                                            | ((0x800U 
                                                & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                     >> 0x14U)))))),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
                             [0xaU]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[0]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[1]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[2]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[3]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[4]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[5]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[6]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[7]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[8]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[9]),32);
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[10]),32);
    bufp->fullIData(oldp+98,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[11]),32);
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[12]),32);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[13]),32);
    bufp->fullIData(oldp+101,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[14]),32);
    bufp->fullIData(oldp+102,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[15]),32);
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[16]),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[17]),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[18]),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[19]),32);
    bufp->fullIData(oldp+107,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[20]),32);
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[21]),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[22]),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[23]),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[24]),32);
    bufp->fullIData(oldp+112,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[25]),32);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[26]),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[27]),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[28]),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[29]),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[30]),32);
    bufp->fullIData(oldp+118,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[31]),32);
    bufp->fullBit(oldp+119,(vlSelf->clk));
    bufp->fullBit(oldp+120,(vlSelf->rst));
    bufp->fullIData(oldp+121,(vlSelf->pc),32);
    bufp->fullBit(oldp+122,(1U));
    bufp->fullIData(oldp+123,(5U),32);
    bufp->fullIData(oldp+124,(0x20U),32);
}
