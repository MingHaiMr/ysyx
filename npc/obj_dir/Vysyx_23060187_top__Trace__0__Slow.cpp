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
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->declBit(c+39,"rst", false,-1);
    tracep->declBus(c+40,"pc", false,-1, 31,0);
    tracep->declBus(c+41,"result", false,-1, 31,0);
    tracep->declBus(c+42,"opcode", false,-1, 6,0);
    tracep->declBus(c+43,"fun3", false,-1, 2,0);
    tracep->declBit(c+44,"fun7", false,-1);
    tracep->declBus(c+45,"unusedata", false,-1, 31,0);
    tracep->declBus(c+46,"rs2", false,-1, 4,0);
    tracep->pushNamePrefix("ysyx_23060187_top ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->declBit(c+39,"rst", false,-1);
    tracep->declBus(c+40,"pc", false,-1, 31,0);
    tracep->declBus(c+41,"result", false,-1, 31,0);
    tracep->declBus(c+42,"opcode", false,-1, 6,0);
    tracep->declBus(c+43,"fun3", false,-1, 2,0);
    tracep->declBit(c+44,"fun7", false,-1);
    tracep->declBus(c+45,"unusedata", false,-1, 31,0);
    tracep->declBus(c+46,"rs2", false,-1, 4,0);
    tracep->declBus(c+47,"rs1", false,-1, 4,0);
    tracep->declBit(c+48,"auipc", false,-1);
    tracep->declBit(c+49,"jal", false,-1);
    tracep->declBit(c+1,"jalr", false,-1);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+3,"src1", false,-1, 31,0);
    tracep->declBus(c+51,"opnumber1", false,-1, 31,0);
    tracep->declBus(c+4,"opnumber2", false,-1, 31,0);
    tracep->declBus(c+59,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+52,"addi", false,-1);
    tracep->declBit(c+53,"zero", false,-1);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+59,"ALUctrl", false,-1, 3,0);
    tracep->declBus(c+51,"opnum1", false,-1, 31,0);
    tracep->declBus(c+4,"opnum2", false,-1, 31,0);
    tracep->declBus(c+41,"result", false,-1, 31,0);
    tracep->declBit(c+53,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decode ");
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->declBus(c+47,"rs1", false,-1, 4,0);
    tracep->declBus(c+46,"rs2", false,-1, 4,0);
    tracep->declBus(c+50,"rd", false,-1, 4,0);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+42,"opcode", false,-1, 6,0);
    tracep->declBus(c+43,"fun3", false,-1, 2,0);
    tracep->declBit(c+44,"fun7", false,-1);
    tracep->declBit(c+54,"U_type", false,-1);
    tracep->declBit(c+55,"I_type", false,-1);
    tracep->declBit(c+49,"J_type", false,-1);
    tracep->declBus(c+56,"U_imm", false,-1, 31,0);
    tracep->declBus(c+57,"I_imm", false,-1, 31,0);
    tracep->declBus(c+58,"J_imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dpi1 ");
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("maincontroller ");
    tracep->declBus(c+43,"fun3", false,-1, 2,0);
    tracep->declBus(c+42,"opcode", false,-1, 6,0);
    tracep->declBus(c+59,"ALUctrl", false,-1, 3,0);
    tracep->declBit(c+52,"addi", false,-1);
    tracep->declBit(c+48,"auipc", false,-1);
    tracep->declBit(c+49,"jal", false,-1);
    tracep->declBit(c+1,"jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pcRegister ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+39,"rst", false,-1);
    tracep->declBit(c+49,"jal", false,-1);
    tracep->declBit(c+1,"jalr", false,-1);
    tracep->declBus(c+2,"imm", false,-1, 31,0);
    tracep->declBus(c+3,"src1", false,-1, 31,0);
    tracep->declBus(c+40,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register1 ");
    tracep->declBus(c+60,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+62,"wdata", false,-1, 31,0);
    tracep->declBus(c+63,"waddr", false,-1, 4,0);
    tracep->declBit(c+64,"wen", false,-1);
    tracep->declBus(c+47,"raddr", false,-1, 4,0);
    tracep->declBus(c+3,"rdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+65+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("register3 ");
    tracep->declBus(c+60,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+61,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBus(c+41,"wdata", false,-1, 31,0);
    tracep->declBus(c+50,"waddr", false,-1, 4,0);
    tracep->declBit(c+97,"wen", false,-1);
    tracep->declBus(c+63,"raddr", false,-1, 4,0);
    tracep->declBus(c+45,"rdata", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->ysyx_23060187_top__DOT__jalr));
    bufp->fullIData(oldp+2,(vlSelf->ysyx_23060187_top__DOT__imm),32);
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060187_top__DOT__src1),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060187_top__DOT__opnumber2),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060187_top__DOT__register3__DOT__rf[31]),32);
    bufp->fullBit(oldp+37,(vlSelf->clk));
    bufp->fullIData(oldp+38,(vlSelf->inst),32);
    bufp->fullBit(oldp+39,(vlSelf->rst));
    bufp->fullIData(oldp+40,(vlSelf->pc),32);
    bufp->fullIData(oldp+41,(vlSelf->result),32);
    bufp->fullCData(oldp+42,(vlSelf->opcode),7);
    bufp->fullCData(oldp+43,(vlSelf->fun3),3);
    bufp->fullBit(oldp+44,(vlSelf->fun7));
    bufp->fullIData(oldp+45,(vlSelf->unusedata),32);
    bufp->fullCData(oldp+46,(vlSelf->rs2),5);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullBit(oldp+48,((0x17U == (IData)(vlSelf->opcode))));
    bufp->fullBit(oldp+49,((0x6fU == (IData)(vlSelf->opcode))));
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060187_top__DOT__opnumber1),32);
    bufp->fullBit(oldp+52,(((0x13U == (IData)(vlSelf->opcode)) 
                            & (0U == (IData)(vlSelf->fun3)))));
    bufp->fullBit(oldp+53,((0U == vlSelf->result)));
    bufp->fullBit(oldp+54,(((0x17U == (IData)(vlSelf->opcode)) 
                            | (0x37U == (IData)(vlSelf->opcode)))));
    bufp->fullBit(oldp+55,(((3U == (IData)(vlSelf->opcode)) 
                            | ((0x13U == (IData)(vlSelf->opcode)) 
                               | (0x67U == (IData)(vlSelf->opcode))))));
    bufp->fullIData(oldp+56,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+57,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->inst 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+58,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->fullCData(oldp+59,(2U),4);
    bufp->fullIData(oldp+60,(5U),32);
    bufp->fullIData(oldp+61,(0x20U),32);
    bufp->fullIData(oldp+62,(0U),32);
    bufp->fullCData(oldp+63,(0U),5);
    bufp->fullBit(oldp+64,(0U));
    bufp->fullIData(oldp+65,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[3]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[4]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[5]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[6]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[7]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[8]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[9]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[10]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[11]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[12]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[13]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[14]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[15]),32);
    bufp->fullIData(oldp+81,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[16]),32);
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[17]),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[18]),32);
    bufp->fullIData(oldp+84,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[19]),32);
    bufp->fullIData(oldp+85,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[20]),32);
    bufp->fullIData(oldp+86,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[21]),32);
    bufp->fullIData(oldp+87,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[22]),32);
    bufp->fullIData(oldp+88,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[23]),32);
    bufp->fullIData(oldp+89,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[24]),32);
    bufp->fullIData(oldp+90,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[25]),32);
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[26]),32);
    bufp->fullIData(oldp+92,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[27]),32);
    bufp->fullIData(oldp+93,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[28]),32);
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[29]),32);
    bufp->fullIData(oldp+95,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[30]),32);
    bufp->fullIData(oldp+96,(vlSelf->ysyx_23060187_top__DOT__register1__DOT__rf[31]),32);
    bufp->fullBit(oldp+97,(1U));
}
