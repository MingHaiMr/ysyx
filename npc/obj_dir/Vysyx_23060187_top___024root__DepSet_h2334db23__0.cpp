// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060187_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060187_top__Syms.h"
#include "Vysyx_23060187_top___024root.h"

extern "C" svBit is_ebreak(int inst, int gpr10);

VL_INLINE_OPT void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(IData/*31:0*/ inst, IData/*31:0*/ gpr10, CData/*0:0*/ &is_ebreak__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP\n"); );
    // Body
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    int gpr10__Vcvt;
    for (size_t gpr10__Vidx = 0; gpr10__Vidx < 1; ++gpr10__Vidx) gpr10__Vcvt = gpr10;
    svBit is_ebreak__Vfuncrtn__Vcvt;
    is_ebreak__Vfuncrtn__Vcvt = is_ebreak(inst__Vcvt, gpr10__Vcvt);
    is_ebreak__Vfuncrtn = (1U & is_ebreak__Vfuncrtn__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__ico(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060187_top___024root___eval_triggers__ico(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060187_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__act(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060187_top___024root___eval_triggers__act(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = (((IData)(vlSelf->clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk))) 
                                      | ((IData)(vlSelf->rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__rst))));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_23060187_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
