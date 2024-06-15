// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060187_top__Syms.h"


void Vysyx_23060187_top___024root__trace_chg_sub_0(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060187_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060187_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060187_top___024root*>(voidSelf);
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060187_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060187_top___024root__trace_chg_sub_0(Vysyx_23060187_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->ysyx_23060187_top__DOT__imm),32);
        bufp->chgBit(oldp+1,((1U & (~ (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h38f3c40a__0)))));
        bufp->chgBit(oldp+2,(vlSelf->ysyx_23060187_top__DOT__lbu));
        bufp->chgBit(oldp+3,(vlSelf->ysyx_23060187_top__DOT__sb));
        bufp->chgBit(oldp+4,(vlSelf->ysyx_23060187_top__DOT__sw));
        bufp->chgBit(oldp+5,(vlSelf->ysyx_23060187_top__DOT__lw));
        bufp->chgBit(oldp+6,(vlSelf->ysyx_23060187_top__DOT__sh));
        bufp->chgBit(oldp+7,(vlSelf->ysyx_23060187_top__DOT__lh));
        bufp->chgBit(oldp+8,(vlSelf->ysyx_23060187_top__DOT__lhu));
        bufp->chgCData(oldp+9,((0x1fU & vlSelf->ysyx_23060187_top__DOT__imm)),5);
        bufp->chgCData(oldp+10,(((IData)(vlSelf->ysyx_23060187_top__DOT__sb)
                                  ? 1U : ((IData)(vlSelf->ysyx_23060187_top__DOT__sw)
                                           ? 0x15U : 
                                          ((IData)(vlSelf->ysyx_23060187_top__DOT__sh)
                                            ? 3U : 0U)))),8);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+11,(vlSelf->ysyx_23060187_top__DOT__src1),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060187_top__DOT__src2),32);
        bufp->chgIData(oldp+13,(((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h38f3c40a__0)
                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0
                                  : 0U)),32);
        bufp->chgIData(oldp+14,((((IData)(vlSelf->ysyx_23060187_top__DOT__lbu) 
                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__lw) 
                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__lh) 
                                        | (IData)(vlSelf->ysyx_23060187_top__DOT__lhu))))
                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0
                                  : 0U)),32);
        bufp->chgIData(oldp+15,(((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h38f3c40a__0)
                                  ? vlSelf->ysyx_23060187_top__DOT__src2
                                  : 0U)),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+16,(((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))
                                  ? vlSelf->ysyx_23060187_top__DOT__imm
                                  : ((IData)(vlSelf->__VdfgTmp_heb5b0ecc__0)
                                      ? ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h996c9d82__0)
                                          ? 1U : 0U)
                                      : (((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                          | (IData)(vlSelf->ysyx_23060187_top__DOT__sltu))
                                          ? ((IData)(vlSelf->ysyx_23060187_top__DOT__cout)
                                              ? 0U : 1U)
                                          : (((IData)(vlSelf->ysyx_23060187_top__DOT__sra) 
                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                                                 & (0x20U 
                                                    == 
                                                    (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                     >> 0x19U))))
                                              ? (((~ 
                                                   (0xffffffffU 
                                                    >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))) 
                                                  & (- (IData)(
                                                               (vlSelf->ysyx_23060187_top__DOT__src1 
                                                                >> 0x1fU)))) 
                                                 | (vlSelf->ysyx_23060187_top__DOT__src1 
                                                    >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))
                                              : (((IData)(vlSelf->ysyx_23060187_top__DOT__mul) 
                                                  | (IData)(vlSelf->ysyx_23060187_top__DOT__mulh))
                                                  ? 
                                                 ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                                   ? 
                                                  ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                                    ? (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96db4c7f__0)
                                                    : 0U)
                                                   : 
                                                  ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                    ? 
                                                   ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                     ? (IData)(
                                                               (vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5ba643a8__0 
                                                                >> 0x20U))
                                                     : 0U)
                                                    : 0U))
                                                  : 
                                                 (((IData)(vlSelf->ysyx_23060187_top__DOT__div) 
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
        bufp->chgIData(oldp+17,((vlSelf->ysyx_23060187_top__DOT__src1 
                                 >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))),32);
        bufp->chgIData(oldp+18,((((~ (0xffffffffU >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))) 
                                  & (- (IData)((vlSelf->ysyx_23060187_top__DOT__src1 
                                                >> 0x1fU)))) 
                                 | (vlSelf->ysyx_23060187_top__DOT__src1 
                                    >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))),32);
        bufp->chgQData(oldp+19,(((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96db4c7f__0
                                  : 0ULL)),64);
        bufp->chgQData(oldp+21,(((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5ba643a8__0
                                  : 0ULL)),64);
        bufp->chgIData(oldp+23,(((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                  ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                      ? (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96db4c7f__0)
                                      : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5ba643a8__0 
                                                               >> 0x20U))
                                                    : 0U)
                                                : 0U))),32);
        bufp->chgIData(oldp+24,(((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                  ? VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                  : 0U)),32);
        bufp->chgIData(oldp+25,(((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                  ? VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                  : 0U)),32);
        bufp->chgIData(oldp+26,(((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                  ? ((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                      ? VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                      : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                                ? ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                                    ? 
                                                   VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                                    : 0U)
                                                : 0U))),32);
        bufp->chgIData(oldp+27,(((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                                  : 0U)),32);
        bufp->chgIData(oldp+28,(((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                                  : 0U)),32);
        bufp->chgIData(oldp+29,(((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                  ? ((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                      ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                                      : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                ? ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                    ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5c706d__0
                                                    : 0U)
                                                : 0U))),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+30,((0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)),7);
        bufp->chgCData(oldp+31,((7U & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+32,((vlSelf->ysyx_23060187_top__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgIData(oldp+33,(vlSelf->ysyx_23060187_top__DOT__result),32);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+35,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_23060187_top__DOT__opnumber1),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_23060187_top__DOT__opnumber2),32);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_23060187_top__DOT__ALUctrl),4);
        bufp->chgBit(oldp+40,((0U == vlSelf->ysyx_23060187_top__DOT__result)));
        bufp->chgBit(oldp+41,((0x17U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
        bufp->chgBit(oldp+42,((0x6fU == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
        bufp->chgBit(oldp+43,(vlSelf->ysyx_23060187_top__DOT__jalr));
        bufp->chgBit(oldp+44,((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
        bufp->chgBit(oldp+45,((IData)((0x13U == (0x707fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)))));
        bufp->chgBit(oldp+46,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                               & (0U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+47,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                               & (0x20U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_23060187_top__DOT__sltiu));
        bufp->chgBit(oldp+49,(vlSelf->ysyx_23060187_top__DOT__cout));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_23060187_top__DOT__sltu));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_23060187_top__DOT__bne));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_23060187_top__DOT__beq));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_23060187_top__DOT__sll));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_23060187_top__DOT__srl));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_23060187_top__DOT__and_));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_23060187_top__DOT__andi));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_23060187_top__DOT__or_));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_23060187_top__DOT__ori));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_23060187_top__DOT__xor_));
        bufp->chgBit(oldp+60,(vlSelf->ysyx_23060187_top__DOT__xori));
        bufp->chgBit(oldp+61,(vlSelf->ysyx_23060187_top__DOT__srli));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_23060187_top__DOT__slli));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_23060187_top__DOT__bge));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_23060187_top__DOT__sra));
        bufp->chgBit(oldp+65,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                               & (0x20U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_23060187_top__DOT__blt));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_23060187_top__DOT__slt));
        bufp->chgBit(oldp+68,(vlSelf->ysyx_23060187_top__DOT__slti));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_23060187_top__DOT__mul));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_23060187_top__DOT__mulh));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_23060187_top__DOT__div));
        bufp->chgBit(oldp+72,(vlSelf->ysyx_23060187_top__DOT__divu));
        bufp->chgBit(oldp+73,(vlSelf->ysyx_23060187_top__DOT__rem));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_23060187_top__DOT__remu));
        bufp->chgBit(oldp+75,(vlSelf->ysyx_23060187_top__DOT__isjump));
        bufp->chgIData(oldp+76,(vlSelf->ysyx_23060187_top__DOT__instruction),32);
        bufp->chgIData(oldp+77,((~ (0xffffffffU >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))),32);
        bufp->chgCData(oldp+78,(vlSelf->ysyx_23060187_top__DOT__shift_amt),5);
        bufp->chgIData(oldp+79,(vlSelf->ysyx_23060187_top__DOT__mem_rdata),32);
        bufp->chgBit(oldp+80,(((0x17U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                               | (0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)))));
        bufp->chgBit(oldp+81,(((3U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->ysyx_23060187_top__DOT__instruction))))));
        bufp->chgIData(oldp+82,((0xfffff000U & vlSelf->ysyx_23060187_top__DOT__instruction)),32);
        bufp->chgIData(oldp+83,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ysyx_23060187_top__DOT__instruction 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+84,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_23060187_top__DOT__instruction) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                        >> 0x14U)))))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+85,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
                                [0xaU]),32);
        bufp->chgIData(oldp+86,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[0]),32);
        bufp->chgIData(oldp+87,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[1]),32);
        bufp->chgIData(oldp+88,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[2]),32);
        bufp->chgIData(oldp+89,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[3]),32);
        bufp->chgIData(oldp+90,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[4]),32);
        bufp->chgIData(oldp+91,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[5]),32);
        bufp->chgIData(oldp+92,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[6]),32);
        bufp->chgIData(oldp+93,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[7]),32);
        bufp->chgIData(oldp+94,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[8]),32);
        bufp->chgIData(oldp+95,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[9]),32);
        bufp->chgIData(oldp+96,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[10]),32);
        bufp->chgIData(oldp+97,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[11]),32);
        bufp->chgIData(oldp+98,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[12]),32);
        bufp->chgIData(oldp+99,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[13]),32);
        bufp->chgIData(oldp+100,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[14]),32);
        bufp->chgIData(oldp+101,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[15]),32);
        bufp->chgIData(oldp+102,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[16]),32);
        bufp->chgIData(oldp+103,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[17]),32);
        bufp->chgIData(oldp+104,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[18]),32);
        bufp->chgIData(oldp+105,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[19]),32);
        bufp->chgIData(oldp+106,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[20]),32);
        bufp->chgIData(oldp+107,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[21]),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[22]),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[23]),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[24]),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[25]),32);
        bufp->chgIData(oldp+112,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[26]),32);
        bufp->chgIData(oldp+113,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[27]),32);
        bufp->chgIData(oldp+114,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[28]),32);
        bufp->chgIData(oldp+115,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[29]),32);
        bufp->chgIData(oldp+116,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[30]),32);
        bufp->chgIData(oldp+117,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+118,(vlSelf->clk));
    bufp->chgBit(oldp+119,(vlSelf->rst));
    bufp->chgIData(oldp+120,(vlSelf->pc),32);
}

void Vysyx_23060187_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060187_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060187_top___024root*>(voidSelf);
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
