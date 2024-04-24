// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060187_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060187_top___024root.h"

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_static(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_initial(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_final(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_triggers__stl(Vysyx_23060187_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__stl(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_stl(Vysyx_23060187_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_settle(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vysyx_23060187_top___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060187_top___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060187_top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vysyx_23060187_top___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__stl(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060187_top___024root___stl_sequent__TOP__0(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->fun7 = (1U & (vlSelf->inst >> 0x1eU));
    vlSelf->rs2 = (0x1fU & (vlSelf->inst >> 0x14U));
    vlSelf->unusedata = vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf
        [0U];
    vlSelf->ysyx_23060187_top__DOT__src1 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->fun3 = (7U & (vlSelf->inst >> 0xcU));
    vlSelf->opcode = (0x7fU & vlSelf->inst);
    vlSelf->ysyx_23060187_top__DOT__imm = (((3U == (IData)(vlSelf->opcode)) 
                                            | ((0x13U 
                                                == (IData)(vlSelf->opcode)) 
                                               | (0x67U 
                                                  == (IData)(vlSelf->opcode))))
                                            ? (((- (IData)(
                                                           (vlSelf->inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->inst 
                                                  >> 0x14U))
                                            : (((0x17U 
                                                 == (IData)(vlSelf->opcode)) 
                                                | (0x37U 
                                                   == (IData)(vlSelf->opcode)))
                                                ? (0xfffff000U 
                                                   & vlSelf->inst)
                                                : (
                                                   ((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->inst) 
                                                      | ((0x800U 
                                                          & (vlSelf->inst 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->inst 
                                                               >> 0x14U)))))));
    vlSelf->ysyx_23060187_top__DOT__jalr = ((0x67U 
                                             == (IData)(vlSelf->opcode)) 
                                            & (0U == (IData)(vlSelf->fun3)));
    vlSelf->ysyx_23060187_top__DOT__opnumber2 = (((
                                                   (0x13U 
                                                    == (IData)(vlSelf->opcode)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->fun3))) 
                                                  | (0x17U 
                                                     == (IData)(vlSelf->opcode)))
                                                  ? vlSelf->ysyx_23060187_top__DOT__imm
                                                  : 4U);
    vlSelf->ysyx_23060187_top__DOT__opnumber1 = (((0x17U 
                                                   == (IData)(vlSelf->opcode)) 
                                                  | ((0x6fU 
                                                      == (IData)(vlSelf->opcode)) 
                                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__jalr)))
                                                  ? vlSelf->pc
                                                  : vlSelf->ysyx_23060187_top__DOT__src1);
    vlSelf->result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                      + vlSelf->ysyx_23060187_top__DOT__opnumber2);
}

VL_ATTR_COLD void Vysyx_23060187_top___024root___eval_stl(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vysyx_23060187_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__ico(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__act(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__nba(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_23060187_top___024root___ctor_var_reset(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->result = VL_RAND_RESET_I(32);
    vlSelf->opcode = VL_RAND_RESET_I(7);
    vlSelf->fun3 = VL_RAND_RESET_I(3);
    vlSelf->fun7 = VL_RAND_RESET_I(1);
    vlSelf->unusedata = VL_RAND_RESET_I(32);
    vlSelf->rs2 = VL_RAND_RESET_I(5);
    vlSelf->ysyx_23060187_top__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060187_top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__opnumber1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_23060187_top__DOT__opnumber2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
