// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060187_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060187_top___024root.h"

void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(IData/*31:0*/ inst, IData/*31:0*/ gpr10, CData/*0:0*/ &is_ebreak__Vfuncrtn);

VL_INLINE_OPT void Vysyx_23060187_top___024root___act_sequent__TOP__0(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060187_top__DOT__lbu = (IData)((0x4003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__lw = (IData)((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__lh = (IData)((0x1003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__lhu = (IData)((0x5003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__src2 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                   >> 0x14U))];
    vlSelf->ysyx_23060187_top__DOT__sh = (IData)((0x1023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__src1 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                   >> 0xfU))];
    vlSelf->ysyx_23060187_top__DOT__imm = (((3U == 
                                             (0x7fU 
                                              & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                            | ((0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                               | (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction))))
                                            ? (((- (IData)(
                                                           (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  >> 0x14U))
                                            : (((0x17U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                | (0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)))
                                                ? (0xfffff000U 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)
                                                : (
                                                   ((- (IData)(
                                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & vlSelf->ysyx_23060187_top__DOT__instruction) 
                                                      | ((0x800U 
                                                          & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                               >> 0x14U)))))));
    vlSelf->ysyx_23060187_top__DOT__sb = (IData)((0x23U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__sw = (IData)((0x2023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0 
        = ((QData)((IData)(vlSelf->ysyx_23060187_top__DOT__src1)) 
           * (QData)((IData)(vlSelf->ysyx_23060187_top__DOT__src2)));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_23060187_top__DOT__src1), 
                      VL_EXTENDS_QI(64,32, vlSelf->ysyx_23060187_top__DOT__src2));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0 
        = VL_MODDIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2);
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0 
        = (vlSelf->ysyx_23060187_top__DOT__imm + vlSelf->ysyx_23060187_top__DOT__src1);
    vlSelf->ysyx_23060187_top__DOT__mem_wen = ((IData)(vlSelf->ysyx_23060187_top__DOT__sb) 
                                               | (IData)(vlSelf->ysyx_23060187_top__DOT__sw));
    vlSelf->ysyx_23060187_top__DOT__mem_raddr = (((IData)(vlSelf->ysyx_23060187_top__DOT__lbu) 
                                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__lw) 
                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__lh) 
                                                        | (IData)(vlSelf->ysyx_23060187_top__DOT__lhu))))
                                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0
                                                  : 0U);
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h0a761947__0 
        = ((IData)(vlSelf->ysyx_23060187_top__DOT__mem_wen) 
           | (IData)(vlSelf->ysyx_23060187_top__DOT__sh));
    if ((0U != vlSelf->pc)) {
        Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__1__Vfuncout);
        vlSelf->ysyx_23060187_top__DOT__instruction 
            = vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->ysyx_23060187_top__DOT__instruction = 0U;
    }
    if (VL_UNLIKELY((0U != vlSelf->ysyx_23060187_top__DOT__mem_raddr))) {
        Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP(vlSelf->ysyx_23060187_top__DOT__mem_raddr, vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__2__Vfuncout);
        vlSelf->ysyx_23060187_top__DOT__mem_rdata = vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__2__Vfuncout;
        VL_WRITEF("read address : 0x%08x read data : 0x%08x\n\n",
                  32,vlSelf->ysyx_23060187_top__DOT__mem_raddr,
                  32,vlSelf->ysyx_23060187_top__DOT__mem_rdata);
    } else {
        vlSelf->ysyx_23060187_top__DOT__mem_rdata = 0U;
    }
    if (vlSelf->ysyx_23060187_top__DOT__mem_wen) {
        Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h0a761947__0)
                                                                                 ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0
                                                                                 : 0U), 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h0a761947__0)
                                                                                 ? vlSelf->ysyx_23060187_top__DOT__src2
                                                                                 : 0U), 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__sb)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__sw)
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__sh)
                                                                                 ? 3U
                                                                                 : 0U))));
    }
    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(vlSelf->ysyx_23060187_top__DOT__instruction, vlSelf->reg_a0, vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout);
    if (VL_UNLIKELY(vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout)) {
        VL_WRITEF("\n\033[1;34mebreak! pc : 0x%08x $a0 : 0x%08x\n\033[0m\n\n",
                  32,vlSelf->pc,32,vlSelf->reg_a0);
        VL_FINISH_MT("vsrc/ebreak_dpi.v", 8, "");
    }
    vlSelf->ysyx_23060187_top__DOT__jalr = (IData)(
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__sltiu = (IData)(
                                                    (0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__xori = (IData)(
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__sltu = (IData)(
                                                   (0x3033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__slli = (IData)(
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0 
        = (IData)((0x1033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0 
        = (IData)((0x7033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0 
        = (IData)((0x6033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0 
        = (IData)((0x4033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__andi = (IData)(
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__ori = (IData)((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__bne = (IData)((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__beq = (IData)((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__bge = (IData)((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__blt = (IData)((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0 
        = (IData)((0x33U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0 
        = (IData)((0x2000U == (0xfe007000U & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__opnumber1 = (((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                  | ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__jalr)))
                                                  ? vlSelf->pc
                                                  : vlSelf->ysyx_23060187_top__DOT__src1);
    vlSelf->ysyx_23060187_top__DOT__mulh = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sll = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0) 
                                           & (0U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__remu = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__and_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0) 
                                            & (0U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__rem = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__or_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0) 
                                           & (0U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__div = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__xor_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0) 
                                            & (0U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__divu = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sra = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__mul = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sub = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__slti = ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                            & (IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0));
    vlSelf->ysyx_23060187_top__DOT__slt = ((0x33U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                           & (IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0));
    vlSelf->ysyx_23060187_top__DOT__shift_amt = (0x1fU 
                                                 & ((IData)(vlSelf->ysyx_23060187_top__DOT__sra)
                                                     ? vlSelf->ysyx_23060187_top__DOT__src2
                                                     : vlSelf->ysyx_23060187_top__DOT__imm));
    vlSelf->__VdfgTmp_h2c8c28ec__0 = ((IData)(vlSelf->ysyx_23060187_top__DOT__sra) 
                                      | ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                                         & (0x20U == 
                                            (vlSelf->ysyx_23060187_top__DOT__instruction 
                                             >> 0x19U))));
    vlSelf->__VdfgTmp_h431b7873__0 = ((IData)(vlSelf->ysyx_23060187_top__DOT__slt) 
                                      | (IData)(vlSelf->ysyx_23060187_top__DOT__slti));
    vlSelf->ysyx_23060187_top__DOT__opnumber2 = (((IData)(
                                                          (0x13U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_23060187_top__DOT__instruction))) 
                                                  | ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__ori) 
                                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__slti) 
                                                                 | (IData)(vlSelf->ysyx_23060187_top__DOT__xori)))))))
                                                  ? vlSelf->ysyx_23060187_top__DOT__imm
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                        >> 0x19U))) 
                                                   | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltu) 
                                                      | ((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                                                         | ((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                                            | ((IData)(vlSelf->ysyx_23060187_top__DOT__sll) 
                                                               | (((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                       >> 0x19U))) 
                                                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__and_) 
                                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__or_) 
                                                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__xor_) 
                                                                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__blt) 
                                                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__slt) 
                                                                                | (IData)(vlSelf->ysyx_23060187_top__DOT__sub))))))))))))))
                                                   ? vlSelf->ysyx_23060187_top__DOT__src2
                                                   : 
                                                  (((IData)(vlSelf->ysyx_23060187_top__DOT__slli) 
                                                    | ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                           >> 0x19U))))
                                                    ? 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__imm)
                                                    : 4U)));
    vlSelf->ysyx_23060187_top__DOT__ALUctrl = (((IData)(vlSelf->ysyx_23060187_top__DOT__sub) 
                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                                   | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltu) 
                                                      | ((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                                                         | ((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                                            | ((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                                               | ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__blt) 
                                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__ori) 
                                                                        | (IData)(vlSelf->__VdfgTmp_h431b7873__0))))))))))
                                                ? 6U
                                                : (
                                                   ((IData)(vlSelf->ysyx_23060187_top__DOT__and_) 
                                                    | (IData)(vlSelf->ysyx_23060187_top__DOT__andi))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_23060187_top__DOT__or_) 
                                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__ori))
                                                     ? 1U
                                                     : 
                                                    (((IData)(vlSelf->ysyx_23060187_top__DOT__xor_) 
                                                      | (IData)(vlSelf->ysyx_23060187_top__DOT__xori))
                                                      ? 5U
                                                      : 
                                                     (((IData)(vlSelf->ysyx_23060187_top__DOT__sll) 
                                                       | (IData)(vlSelf->ysyx_23060187_top__DOT__slli))
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->__VdfgTmp_h2c8c28ec__0)
                                                        ? 4U
                                                        : 2U))))));
    if ((0U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  & vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else if ((1U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  | vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else if ((2U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = (1U 
                                                & (IData)(
                                                          (1ULL 
                                                           & (((QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber1)) 
                                                               + (QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber2))) 
                                                              >> 0x20U))));
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  + vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else if ((3U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = ((0x1fU 
                                                   >= vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   ? 
                                                  (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                   << vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   : 0U);
    } else if ((4U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = ((0x1fU 
                                                   >= vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   ? 
                                                  (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                   >> vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   : 0U);
    } else if ((5U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  ^ vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else if ((6U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = (1U 
                                                & (IData)(
                                                          (1ULL 
                                                           & (1ULL 
                                                              ^ 
                                                              (((QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber1)) 
                                                                + (QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber2))) 
                                                               >> 0x20U)))));
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  + vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else {
        vlSelf->ysyx_23060187_top__DOT__result = 0U;
    }
    vlSelf->cout_ = vlSelf->ysyx_23060187_top__DOT__cout;
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h9142cc3d__0 
        = ((vlSelf->ysyx_23060187_top__DOT__result 
            >> 0x1fU) | ((vlSelf->ysyx_23060187_top__DOT__opnumber1 
                          >> 0x1fU) > (vlSelf->ysyx_23060187_top__DOT__opnumber2 
                                       >> 0x1fU)));
    vlSelf->ysyx_23060187_top__DOT__isjump = ((((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                                | (IData)(vlSelf->ysyx_23060187_top__DOT__bne)) 
                                               & (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  == vlSelf->ysyx_23060187_top__DOT__opnumber2)) 
                                              | ((((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                                   | (IData)(vlSelf->ysyx_23060187_top__DOT__blt)) 
                                                  & (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h9142cc3d__0)) 
                                                 | ((~ (IData)(vlSelf->ysyx_23060187_top__DOT__cout)) 
                                                    & ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                       | (IData)(vlSelf->ysyx_23060187_top__DOT__ori)))));
}

void Vysyx_23060187_top___024root___eval_act(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_act\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        Vysyx_23060187_top___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vysyx_23060187_top___024root___nba_sequent__TOP__0(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : ((((0x6fU == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                        | ((((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                             | (IData)(vlSelf->ysyx_23060187_top__DOT__bge)) 
                            | (IData)(vlSelf->ysyx_23060187_top__DOT__andi)) 
                           & (~ (IData)(vlSelf->ysyx_23060187_top__DOT__isjump)))) 
                       | ((((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                            | (IData)(vlSelf->ysyx_23060187_top__DOT__blt)) 
                           | (IData)(vlSelf->ysyx_23060187_top__DOT__ori)) 
                          & (IData)(vlSelf->ysyx_23060187_top__DOT__isjump)))
                       ? (vlSelf->pc + vlSelf->ysyx_23060187_top__DOT__imm)
                       : ((IData)(vlSelf->ysyx_23060187_top__DOT__jalr)
                           ? (0xfffffffeU & (vlSelf->ysyx_23060187_top__DOT__src1 
                                             + vlSelf->ysyx_23060187_top__DOT__imm))
                           : ((IData)(4U) + vlSelf->pc))));
}

VL_INLINE_OPT void Vysyx_23060187_top___024root___nba_sequent__TOP__1(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060187_top__DOT__register1__DOT__rf__v0;
    __Vdlyvdim0__ysyx_23060187_top__DOT__register1__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060187_top__DOT__register1__DOT__rf__v0;
    __Vdlyvval__ysyx_23060187_top__DOT__register1__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060187_top__DOT__register1__DOT__rf__v0;
    __Vdlyvset__ysyx_23060187_top__DOT__register1__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__ysyx_23060187_top__DOT__register1__DOT__rf__v0 = 0U;
    if (((~ (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h0a761947__0)) 
         & (0U != (0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                            >> 7U))))) {
        __Vdlyvval__ysyx_23060187_top__DOT__register1__DOT__rf__v0 
            = ((0x37U == (0x7fU & vlSelf->ysyx_23060187_top__DOT__instruction))
                ? vlSelf->ysyx_23060187_top__DOT__imm
                : ((IData)(vlSelf->__VdfgTmp_h431b7873__0)
                    ? ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h9142cc3d__0)
                        ? 1U : 0U) : (((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                       | (IData)(vlSelf->ysyx_23060187_top__DOT__sltu))
                                       ? ((IData)(vlSelf->ysyx_23060187_top__DOT__cout)
                                           ? 1U : 0U)
                                       : ((IData)(vlSelf->__VdfgTmp_h2c8c28ec__0)
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
                                                        : vlSelf->ysyx_23060187_top__DOT__result)))))))))));
        __Vdlyvset__ysyx_23060187_top__DOT__register1__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_23060187_top__DOT__register1__DOT__rf__v0 
            = (0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                        >> 7U));
    }
    if (__Vdlyvset__ysyx_23060187_top__DOT__register1__DOT__rf__v0) {
        vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[__Vdlyvdim0__ysyx_23060187_top__DOT__register1__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060187_top__DOT__register1__DOT__rf__v0;
    }
    vlSelf->reg_a5 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [0xfU];
    vlSelf->reg_a0 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [0xaU];
}

VL_INLINE_OPT void Vysyx_23060187_top___024root___nba_comb__TOP__0(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->ysyx_23060187_top__DOT__src2 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                   >> 0x14U))];
    vlSelf->ysyx_23060187_top__DOT__src1 = vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf
        [(0x1fU & (vlSelf->ysyx_23060187_top__DOT__instruction 
                   >> 0xfU))];
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h96d74d7a__0 
        = ((QData)((IData)(vlSelf->ysyx_23060187_top__DOT__src1)) 
           * (QData)((IData)(vlSelf->ysyx_23060187_top__DOT__src2)));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h5bd96c3a__0 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->ysyx_23060187_top__DOT__src1), 
                      VL_EXTENDS_QI(64,32, vlSelf->ysyx_23060187_top__DOT__src2));
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h6f5860e0__0 
        = VL_MODDIV_III(32, vlSelf->ysyx_23060187_top__DOT__src1, vlSelf->ysyx_23060187_top__DOT__src2);
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0 
        = (vlSelf->ysyx_23060187_top__DOT__imm + vlSelf->ysyx_23060187_top__DOT__src1);
    vlSelf->ysyx_23060187_top__DOT__mem_raddr = (((IData)(vlSelf->ysyx_23060187_top__DOT__lbu) 
                                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__lw) 
                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__lh) 
                                                        | (IData)(vlSelf->ysyx_23060187_top__DOT__lhu))))
                                                  ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0
                                                  : 0U);
}

VL_INLINE_OPT void Vysyx_23060187_top___024root___nba_comb__TOP__1(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___nba_comb__TOP__1\n"); );
    // Body
    if ((0U != vlSelf->pc)) {
        Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__1__Vfuncout);
        vlSelf->ysyx_23060187_top__DOT__instruction 
            = vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__1__Vfuncout;
    } else {
        vlSelf->ysyx_23060187_top__DOT__instruction = 0U;
    }
    if (VL_UNLIKELY((0U != vlSelf->ysyx_23060187_top__DOT__mem_raddr))) {
        Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read_TOP(vlSelf->ysyx_23060187_top__DOT__mem_raddr, vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__2__Vfuncout);
        vlSelf->ysyx_23060187_top__DOT__mem_rdata = vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi2__DOT__pmem_read__2__Vfuncout;
        VL_WRITEF("read address : 0x%08x read data : 0x%08x\n\n",
                  32,vlSelf->ysyx_23060187_top__DOT__mem_raddr,
                  32,vlSelf->ysyx_23060187_top__DOT__mem_rdata);
    } else {
        vlSelf->ysyx_23060187_top__DOT__mem_rdata = 0U;
    }
    if (vlSelf->ysyx_23060187_top__DOT__mem_wen) {
        Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi2__DOT__pmem_write_TOP(
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h0a761947__0)
                                                                                 ? vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h623b28b4__0
                                                                                 : 0U), 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h0a761947__0)
                                                                                 ? vlSelf->ysyx_23060187_top__DOT__src2
                                                                                 : 0U), 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__sb)
                                                                                 ? 1U
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__sw)
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((IData)(vlSelf->ysyx_23060187_top__DOT__sh)
                                                                                 ? 3U
                                                                                 : 0U))));
    }
    Vysyx_23060187_top___024root____Vdpiimwrap_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak_TOP(vlSelf->ysyx_23060187_top__DOT__instruction, vlSelf->reg_a0, vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout);
    if (VL_UNLIKELY(vlSelf->__Vfunc_ysyx_23060187_top__DOT__dpi1__DOT__is_ebreak__0__Vfuncout)) {
        VL_WRITEF("\n\033[1;34mebreak! pc : 0x%08x $a0 : 0x%08x\n\033[0m\n\n",
                  32,vlSelf->pc,32,vlSelf->reg_a0);
        VL_FINISH_MT("vsrc/ebreak_dpi.v", 8, "");
    }
    vlSelf->ysyx_23060187_top__DOT__jalr = (IData)(
                                                   (0x67U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__sltiu = (IData)(
                                                    (0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__xori = (IData)(
                                                   (0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__sltu = (IData)(
                                                   (0x3033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__slli = (IData)(
                                                   (0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0 
        = (IData)((0x1033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0 
        = (IData)((0x7033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0 
        = (IData)((0x6033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0 
        = (IData)((0x4033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__andi = (IData)(
                                                   (0x7013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__ori = (IData)((0x6013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__bne = (IData)((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__beq = (IData)((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__bge = (IData)((0x5063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__blt = (IData)((0x4063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0 
        = (IData)((0x33U == (0x707fU & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0 
        = (IData)((0x2000U == (0xfe007000U & vlSelf->ysyx_23060187_top__DOT__instruction)));
    vlSelf->ysyx_23060187_top__DOT__opnumber1 = (((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                  | ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__jalr)))
                                                  ? vlSelf->pc
                                                  : vlSelf->ysyx_23060187_top__DOT__src1);
    vlSelf->ysyx_23060187_top__DOT__mulh = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sll = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h1387158b__0) 
                                           & (0U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__remu = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__and_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h155b4892__0) 
                                            & (0U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__rem = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__or_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h13a52f89__0) 
                                           & (0U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__div = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__xor_ = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5f0e90__0) 
                                            & (0U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__divu = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                            & (1U == 
                                               (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sra = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__mul = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                           & (1U == 
                                              (vlSelf->ysyx_23060187_top__DOT__instruction 
                                               >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__sub = ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                           & (0x20U 
                                              == (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                  >> 0x19U)));
    vlSelf->ysyx_23060187_top__DOT__slti = ((0x13U 
                                             == (0x7fU 
                                                 & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                            & (IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0));
    vlSelf->ysyx_23060187_top__DOT__slt = ((0x33U == 
                                            (0x7fU 
                                             & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                           & (IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h54ac1e59__0));
    vlSelf->ysyx_23060187_top__DOT__shift_amt = (0x1fU 
                                                 & ((IData)(vlSelf->ysyx_23060187_top__DOT__sra)
                                                     ? vlSelf->ysyx_23060187_top__DOT__src2
                                                     : vlSelf->ysyx_23060187_top__DOT__imm));
    vlSelf->__VdfgTmp_h2c8c28ec__0 = ((IData)(vlSelf->ysyx_23060187_top__DOT__sra) 
                                      | ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                                         & (0x20U == 
                                            (vlSelf->ysyx_23060187_top__DOT__instruction 
                                             >> 0x19U))));
    vlSelf->__VdfgTmp_h431b7873__0 = ((IData)(vlSelf->ysyx_23060187_top__DOT__slt) 
                                      | (IData)(vlSelf->ysyx_23060187_top__DOT__slti));
    vlSelf->ysyx_23060187_top__DOT__opnumber2 = (((IData)(
                                                          (0x13U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->ysyx_23060187_top__DOT__instruction))) 
                                                  | ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->ysyx_23060187_top__DOT__instruction)) 
                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__ori) 
                                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__slti) 
                                                                 | (IData)(vlSelf->ysyx_23060187_top__DOT__xori)))))))
                                                  ? vlSelf->ysyx_23060187_top__DOT__imm
                                                  : 
                                                 ((((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_h138b15c4__0) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                        >> 0x19U))) 
                                                   | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltu) 
                                                      | ((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                                                         | ((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                                            | ((IData)(vlSelf->ysyx_23060187_top__DOT__sll) 
                                                               | (((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hea5c4ff0__0) 
                                                                   & (0U 
                                                                      == 
                                                                      (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                                       >> 0x19U))) 
                                                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__and_) 
                                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__or_) 
                                                                        | ((IData)(vlSelf->ysyx_23060187_top__DOT__xor_) 
                                                                           | ((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                                                              | ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__blt) 
                                                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__slt) 
                                                                                | (IData)(vlSelf->ysyx_23060187_top__DOT__sub))))))))))))))
                                                   ? vlSelf->ysyx_23060187_top__DOT__src2
                                                   : 
                                                  (((IData)(vlSelf->ysyx_23060187_top__DOT__slli) 
                                                    | ((IData)(vlSelf->ysyx_23060187_top__DOT__maincontroller__DOT____VdfgTmp_hc47e2df1__0) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->ysyx_23060187_top__DOT__instruction 
                                                           >> 0x19U))))
                                                    ? 
                                                   (0x1fU 
                                                    & vlSelf->ysyx_23060187_top__DOT__imm)
                                                    : 4U)));
    vlSelf->ysyx_23060187_top__DOT__ALUctrl = (((IData)(vlSelf->ysyx_23060187_top__DOT__sub) 
                                                | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltiu) 
                                                   | ((IData)(vlSelf->ysyx_23060187_top__DOT__sltu) 
                                                      | ((IData)(vlSelf->ysyx_23060187_top__DOT__bne) 
                                                         | ((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                                            | ((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                                               | ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                                  | ((IData)(vlSelf->ysyx_23060187_top__DOT__blt) 
                                                                     | ((IData)(vlSelf->ysyx_23060187_top__DOT__ori) 
                                                                        | (IData)(vlSelf->__VdfgTmp_h431b7873__0))))))))))
                                                ? 6U
                                                : (
                                                   ((IData)(vlSelf->ysyx_23060187_top__DOT__and_) 
                                                    | (IData)(vlSelf->ysyx_23060187_top__DOT__andi))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->ysyx_23060187_top__DOT__or_) 
                                                     | (IData)(vlSelf->ysyx_23060187_top__DOT__ori))
                                                     ? 1U
                                                     : 
                                                    (((IData)(vlSelf->ysyx_23060187_top__DOT__xor_) 
                                                      | (IData)(vlSelf->ysyx_23060187_top__DOT__xori))
                                                      ? 5U
                                                      : 
                                                     (((IData)(vlSelf->ysyx_23060187_top__DOT__sll) 
                                                       | (IData)(vlSelf->ysyx_23060187_top__DOT__slli))
                                                       ? 3U
                                                       : 
                                                      ((IData)(vlSelf->__VdfgTmp_h2c8c28ec__0)
                                                        ? 4U
                                                        : 2U))))));
    if ((0U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  & vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else if ((1U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  | vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else if ((2U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = (1U 
                                                & (IData)(
                                                          (1ULL 
                                                           & (((QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber1)) 
                                                               + (QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber2))) 
                                                              >> 0x20U))));
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  + vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else if ((3U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = ((0x1fU 
                                                   >= vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   ? 
                                                  (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                   << vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   : 0U);
    } else if ((4U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = ((0x1fU 
                                                   >= vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   ? 
                                                  (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                   >> vlSelf->ysyx_23060187_top__DOT__opnumber2)
                                                   : 0U);
    } else if ((5U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = 0U;
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  ^ vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else if ((6U == (IData)(vlSelf->ysyx_23060187_top__DOT__ALUctrl))) {
        vlSelf->ysyx_23060187_top__DOT__cout = (1U 
                                                & (IData)(
                                                          (1ULL 
                                                           & (1ULL 
                                                              ^ 
                                                              (((QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber1)) 
                                                                + (QData)((IData)(vlSelf->ysyx_23060187_top__DOT__opnumber2))) 
                                                               >> 0x20U)))));
        vlSelf->ysyx_23060187_top__DOT__result = (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  + vlSelf->ysyx_23060187_top__DOT__opnumber2);
    } else {
        vlSelf->ysyx_23060187_top__DOT__result = 0U;
    }
    vlSelf->cout_ = vlSelf->ysyx_23060187_top__DOT__cout;
    vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h9142cc3d__0 
        = ((vlSelf->ysyx_23060187_top__DOT__result 
            >> 0x1fU) | ((vlSelf->ysyx_23060187_top__DOT__opnumber1 
                          >> 0x1fU) > (vlSelf->ysyx_23060187_top__DOT__opnumber2 
                                       >> 0x1fU)));
    vlSelf->ysyx_23060187_top__DOT__isjump = ((((IData)(vlSelf->ysyx_23060187_top__DOT__beq) 
                                                | (IData)(vlSelf->ysyx_23060187_top__DOT__bne)) 
                                               & (vlSelf->ysyx_23060187_top__DOT__opnumber1 
                                                  == vlSelf->ysyx_23060187_top__DOT__opnumber2)) 
                                              | ((((IData)(vlSelf->ysyx_23060187_top__DOT__bge) 
                                                   | (IData)(vlSelf->ysyx_23060187_top__DOT__blt)) 
                                                  & (IData)(vlSelf->ysyx_23060187_top__DOT____VdfgTmp_h9142cc3d__0)) 
                                                 | ((~ (IData)(vlSelf->ysyx_23060187_top__DOT__cout)) 
                                                    & ((IData)(vlSelf->ysyx_23060187_top__DOT__andi) 
                                                       | (IData)(vlSelf->ysyx_23060187_top__DOT__ori)))));
}

void Vysyx_23060187_top___024root___eval_nba(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vysyx_23060187_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vysyx_23060187_top___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vysyx_23060187_top___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vysyx_23060187_top___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vysyx_23060187_top___024root___eval_triggers__act(Vysyx_23060187_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__act(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_23060187_top___024root___dump_triggers__nba(Vysyx_23060187_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_23060187_top___024root___eval(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vysyx_23060187_top___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vysyx_23060187_top___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/ysyx_23060187_top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vysyx_23060187_top___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vysyx_23060187_top___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/ysyx_23060187_top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vysyx_23060187_top___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vysyx_23060187_top___024root___eval_debug_assertions(Vysyx_23060187_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060187_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060187_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
