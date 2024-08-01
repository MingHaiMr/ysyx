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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgCData(oldp+32,((0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)),7);
        bufp->chgCData(oldp+33,((7U & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+34,((vlSelf->ysyx_23060187_top__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+35,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+36,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+37,((0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_23060187_top__DOT__imm),32);
        bufp->chgBit(oldp+39,((1U & (~ ((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen) 
                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                                 | ((IData)(vlSelf->ysyx_23060187_top__DOT__bgeu) 
                                                    | ((IData)(vlSelf->ysyx_23060187_top__DOT__blt) 
                                                       | (IData)(vlSelf->ysyx_23060187_top__DOT__ori)))))))))));
        bufp->chgBit(oldp+40,((0x17U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
        bufp->chgBit(oldp+41,((0x6fU == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
        bufp->chgBit(oldp+42,(vlSelf->ysyx_23060187_top__DOT__jalr));
        bufp->chgBit(oldp+43,((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
        bufp->chgBit(oldp+44,((IData)((0x13U == (0x707fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)))));
        bufp->chgBit(oldp+45,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                               & (0U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+46,(vlSelf->ysyx_23060187_top__DOT__sub));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_23060187_top__DOT__sltiu));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_23060187_top__DOT__sltu));
        bufp->chgBit(oldp+49,(vlSelf->ysyx_23060187_top__DOT__bne));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_23060187_top__DOT__beq));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_23060187_top__DOT__sll));
        bufp->chgBit(oldp+52,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                               & (0U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_23060187_top__DOT__and_));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_23060187_top__DOT__andi));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_23060187_top__DOT__or_));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_23060187_top__DOT__ori));
        bufp->chgBit(oldp+57,(vlSelf->ysyx_23060187_top__DOT__xor_));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_23060187_top__DOT__xori));
        bufp->chgBit(oldp+59,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                               & (0U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                         >> 0x19U)))));
        bufp->chgBit(oldp+60,(vlSelf->ysyx_23060187_top__DOT__slli));
        bufp->chgBit(oldp+61,(vlSelf->ysyx_23060187_top__DOT__bge));
        bufp->chgBit(oldp+62,(vlSelf->ysyx_23060187_top__DOT__bgeu));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_23060187_top__DOT__sra));
        bufp->chgBit(oldp+64,(((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                               & (0x20U == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                            >> 0x19U)))));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_23060187_top__DOT__blt));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_23060187_top__DOT__slt));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_23060187_top__DOT__slti));
        bufp->chgBit(oldp+68,(vlSelf->ysyx_23060187_top__DOT__mul));
        bufp->chgBit(oldp+69,(vlSelf->ysyx_23060187_top__DOT__mulh));
        bufp->chgBit(oldp+70,(vlSelf->ysyx_23060187_top__DOT__div));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_23060187_top__DOT__divu));
        bufp->chgBit(oldp+72,(vlSelf->ysyx_23060187_top__DOT__rem));
        bufp->chgBit(oldp+73,(vlSelf->ysyx_23060187_top__DOT__remu));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_23060187_top__DOT__lbu));
        bufp->chgBit(oldp+75,((IData)((0x23U == (0x707fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)))));
        bufp->chgBit(oldp+76,((IData)((0x2023U == (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)))));
        bufp->chgBit(oldp+77,(vlSelf->ysyx_23060187_top__DOT__lw));
        bufp->chgBit(oldp+78,((IData)((0x1023U == (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)))));
        bufp->chgBit(oldp+79,(vlSelf->ysyx_23060187_top__DOT__lh));
        bufp->chgBit(oldp+80,(vlSelf->ysyx_23060187_top__DOT__lhu));
        bufp->chgIData(oldp+81,(vlSelf->ysyx_23060187_top__DOT__instruction),32);
        bufp->chgCData(oldp+82,((0x1fU & vlSelf->ysyx_23060187_top__DOT__imm)),5);
        bufp->chgBit(oldp+83,(vlSelf->ysyx_23060187_top__DOT__valid2));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_23060187_top__DOT__mem_wen));
        bufp->chgCData(oldp+85,(((IData)((0x23U == 
                                          (0x707fU 
                                           & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                  ? 1U : ((IData)((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                           ? 0xfU : 
                                          ((IData)(
                                                   (0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                            ? 3U : 0U)))),8);
        bufp->chgBit(oldp+86,(((0x17U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                               | (0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)))));
        bufp->chgBit(oldp+87,(((3U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                               | ((0x13U == (0x7fU 
                                             & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                  | (0x67U == (0x7fU 
                                               & vlSelf->ysyx_23060187_top__DOT__instruction))))));
        bufp->chgBit(oldp+88,((0x63U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
        bufp->chgBit(oldp+89,((0x33U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))));
        bufp->chgIData(oldp+90,((0xfffff000U & vlSelf->ysyx_23060187_top__DOT__instruction)),32);
        bufp->chgIData(oldp+91,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0xcU) | (vlSelf->ysyx_23060187_top__DOT__instruction 
                                              >> 0x14U))),32);
        bufp->chgIData(oldp+92,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
                                              >> 0x1fU))) 
                                  << 0x14U) | ((0xff000U 
                                                & vlSelf->ysyx_23060187_top__DOT__instruction) 
                                               | ((0x800U 
                                                   & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                        >> 0x14U)))))),32);
        bufp->chgIData(oldp+93,((((- (IData)((vlSelf->ysyx_23060187_top__DOT__instruction 
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
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgQData(oldp+94,(((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0
                                  : 0ULL)),64);
        bufp->chgQData(oldp+96,(((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0
                                  : 0ULL)),64);
        bufp->chgIData(oldp+98,(((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                  ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mul)
                                      ? (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0)
                                      : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                ? ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                    ? (IData)(
                                                              (vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0 
                                                               >> 0x20U))
                                                    : 0U)
                                                : 0U))),32);
        bufp->chgIData(oldp+99,(((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                  ? VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                  : 0U)),32);
        bufp->chgIData(oldp+100,(((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                   ? VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                   : 0U)),32);
        bufp->chgIData(oldp+101,(((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                   ? ((IData)(vlSelf->ysyx_23060187_top__DOT__div)
                                       ? VL_DIVS_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                       : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__divu)
                                                  ? 
                                                 VL_DIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2)
                                                  : 0U)
                                                 : 0U))),32);
        bufp->chgIData(oldp+102,(((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                   ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                   : 0U)),32);
        bufp->chgIData(oldp+103,(((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                   ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                   : 0U)),32);
        bufp->chgIData(oldp+104,(((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                   ? ((IData)(vlSelf->ysyx_23060187_top__DOT__remu)
                                       ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                       : 0U) : ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__rem)
                                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0
                                                  : 0U)
                                                 : 0U))),32);
        bufp->chgIData(oldp+105,(((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen)
                                   ? (vlSelf->ysyx_23060187_top__DOT__imm 
                                      + vlSelf->ysyx_23060187_top__DOT__src1)
                                   : 0U)),32);
        bufp->chgIData(oldp+106,(((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen)
                                   ? vlSelf->ysyx_23060187_top__DOT__src2
                                   : 0U)),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+107,(vlSelf->ysyx_23060187_top__DOT__result),32);
        bufp->chgIData(oldp+108,(vlSelf->ysyx_23060187_top__DOT__src1),32);
        bufp->chgIData(oldp+109,(vlSelf->ysyx_23060187_top__DOT__src2),32);
        bufp->chgIData(oldp+110,(vlSelf->ysyx_23060187_top__DOT__opnumber1),32);
        bufp->chgIData(oldp+111,(vlSelf->ysyx_23060187_top__DOT__opnumber2),32);
        bufp->chgBit(oldp+112,(vlSelf->ysyx_23060187_top__DOT__cout));
        bufp->chgBit(oldp+113,(vlSelf->ysyx_23060187_top__DOT__isjump));
        bufp->chgIData(oldp+114,((vlSelf->ysyx_23060187_top__DOT__src1 
                                  >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))),32);
        bufp->chgIData(oldp+115,((~ (0xffffffffU >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))),32);
        bufp->chgIData(oldp+116,((((~ (0xffffffffU 
                                       >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt))) 
                                   & (- (IData)((vlSelf->ysyx_23060187_top__DOT__src1 
                                                 >> 0x1fU)))) 
                                  | (vlSelf->ysyx_23060187_top__DOT__src1 
                                     >> (IData)(vlSelf->ysyx_23060187_top__DOT__shift_amt)))),32);
        bufp->chgCData(oldp+117,(vlSelf->ysyx_23060187_top__DOT__shift_amt),5);
        bufp->chgIData(oldp+118,(vlSelf->ysyx_23060187_top__DOT__mem_raddr),32);
        bufp->chgIData(oldp+119,(vlSelf->ysyx_23060187_top__DOT__mem_rdata),32);
        bufp->chgIData(oldp+120,(vlSelf->ysyx_23060187_top__DOT__alu__DOT__res),32);
    }
    bufp->chgBit(oldp+121,(vlSelf->clk));
    bufp->chgBit(oldp+122,(vlSelf->rst));
    bufp->chgIData(oldp+123,(vlSelf->pc),32);
    bufp->chgIData(oldp+124,(vlSelf->reg_a0),32);
    bufp->chgIData(oldp+125,(vlSelf->reg_a5),32);
    bufp->chgBit(oldp+126,(vlSelf->cout_));
    bufp->chgIData(oldp+127,(vlSelf->result_),32);
    bufp->chgCData(oldp+128,(vlSelf->aluctrl),4);
    bufp->chgIData(oldp+129,(((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))
                               ? vlSelf->ysyx_23060187_top__DOT__imm
                               : ((IData)(vlSelf->__VdfgTmp_h431b7873__0)
                                   ? ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h9142cc3d__0)
                                       ? 1U : 0U) : 
                                  (((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                    | (IData)(vlSelf->ysyx_23060187_top__DOT__sltu))
                                    ? (((~ ((0U == vlSelf->ysyx_23060187_top__DOT__result) 
                                            | ((0U 
                                                == vlSelf->ysyx_23060187_top__DOT__opnumber1) 
                                               & ((0U 
                                                   == vlSelf->ysyx_23060187_top__DOT__opnumber2) 
                                                  & (6U 
                                                     == (IData)(vlSelf->aluctrl)))))) 
                                        & (IData)(vlSelf->ysyx_23060187_top__DOT__cout))
                                        ? 1U : 0U) : 
                                   ((IData)(vlSelf->__VdfgTmp_h2c8c28ec__0)
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
                                                 ? (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0)
                                                 : 0U)
                                             : ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                 ? 
                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__mulh)
                                                  ? (IData)(
                                                            (vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0 
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
    bufp->chgBit(oldp+130,(((0U == vlSelf->ysyx_23060187_top__DOT__result) 
                            | ((0U == vlSelf->ysyx_23060187_top__DOT__opnumber1) 
                               & ((0U == vlSelf->ysyx_23060187_top__DOT__opnumber2) 
                                  & (6U == (IData)(vlSelf->aluctrl)))))));
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
}
