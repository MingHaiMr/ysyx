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
        bufp->chgIData(oldp+0,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[16]),32);
        bufp->chgIData(oldp+17,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[17]),32);
        bufp->chgIData(oldp+18,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[18]),32);
        bufp->chgIData(oldp+19,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[19]),32);
        bufp->chgIData(oldp+20,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[20]),32);
        bufp->chgIData(oldp+21,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[21]),32);
        bufp->chgIData(oldp+22,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[22]),32);
        bufp->chgIData(oldp+23,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[23]),32);
        bufp->chgIData(oldp+24,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[24]),32);
        bufp->chgIData(oldp+25,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[25]),32);
        bufp->chgIData(oldp+26,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[26]),32);
        bufp->chgIData(oldp+27,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[27]),32);
        bufp->chgIData(oldp+28,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[28]),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[29]),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[30]),32);
        bufp->chgIData(oldp+31,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+32,(vlSelf->clk));
    bufp->chgIData(oldp+33,(vlSelf->inst),32);
    bufp->chgBit(oldp+34,(vlSelf->rst));
    bufp->chgIData(oldp+35,(vlSelf->pc),32);
    bufp->chgIData(oldp+36,(vlSelf->result),32);
    bufp->chgCData(oldp+37,(vlSelf->opcode),7);
    bufp->chgCData(oldp+38,(vlSelf->fun3),3);
    bufp->chgBit(oldp+39,(vlSelf->fun7));
    bufp->chgIData(oldp+40,(vlSelf->unusedata),32);
    bufp->chgCData(oldp+41,(vlSelf->rs2),5);
    bufp->chgCData(oldp+42,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+43,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    bufp->chgIData(oldp+44,((((- (IData)((vlSelf->inst 
                                          >> 0x1fU))) 
                              << 0xcU) | (vlSelf->inst 
                                          >> 0x14U))),32);
    bufp->chgIData(oldp+45,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
                            [(0x1fU & (vlSelf->inst 
                                       >> 0xfU))]),32);
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
}
