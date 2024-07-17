// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+92+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+92+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+55,"w1", false,-1, 31,0);
    tracep->declBus(c+56,"w2", false,-1, 31,0);
    tracep->declBus(c+57,"w3", false,-1, 31,0);
    tracep->declBus(c+124,"w11", false,-1, 31,0);
    tracep->declBus(c+125,"w12", false,-1, 31,0);
    tracep->declBus(c+58,"w13", false,-1, 31,0);
    tracep->declBus(c+1,"w14", false,-1, 31,0);
    tracep->declBus(c+2,"w15", false,-1, 31,0);
    tracep->declBus(c+126,"w18", false,-1, 31,0);
    tracep->declBus(c+78,"w19", false,-1, 31,0);
    tracep->declBus(c+127,"w20", false,-1, 31,0);
    tracep->declBus(c+59,"w21", false,-1, 31,0);
    tracep->declBus(c+3,"w23", false,-1, 31,0);
    tracep->declBus(c+4,"w22", false,-1, 3,0);
    tracep->declBus(c+79,"w7", false,-1, 1,0);
    tracep->declBit(c+80,"w4", false,-1);
    tracep->declBit(c+81,"w5", false,-1);
    tracep->declBit(c+82,"w6", false,-1);
    tracep->declBit(c+83,"w8", false,-1);
    tracep->declBit(c+84,"w9", false,-1);
    tracep->declBit(c+85,"w10", false,-1);
    tracep->declBit(c+86,"w16", false,-1);
    tracep->declBus(c+5,"IFID_out_pc", false,-1, 31,0);
    tracep->declBus(c+60,"IFID_out_inst", false,-1, 31,0);
    tracep->declBus(c+6,"IDEX_out_pc", false,-1, 31,0);
    tracep->declBus(c+7,"IDEX_out_rs1", false,-1, 31,0);
    tracep->declBus(c+8,"IDEX_out_rs2", false,-1, 31,0);
    tracep->declBus(c+9,"IDEX_out_imm", false,-1, 31,0);
    tracep->declBus(c+10,"IDEX_out_funct3", false,-1, 2,0);
    tracep->declBus(c+11,"IDEX_out_ALUOp", false,-1, 1,0);
    tracep->declBit(c+61,"IDEX_out_regWrite", false,-1);
    tracep->declBit(c+87,"IDEX_out_memRead", false,-1);
    tracep->declBit(c+62,"IDEX_out_memtoReg", false,-1);
    tracep->declBit(c+12,"IDEX_out_memWrite", false,-1);
    tracep->declBit(c+13,"IDEX_out_branch", false,-1);
    tracep->declBit(c+14,"IDEX_out_ALUSrc", false,-1);
    tracep->declBit(c+15,"IDEX_out_funct7", false,-1);
    tracep->declBus(c+88,"EXMEM_out_aluResult", false,-1, 31,0);
    tracep->declBus(c+16,"EXMEM_out_pc", false,-1, 31,0);
    tracep->declBus(c+17,"EXMEM_out_rs2", false,-1, 31,0);
    tracep->declBit(c+89,"EXMEM_out_memRead", false,-1);
    tracep->declBit(c+63,"EXMEM_out_memtoReg", false,-1);
    tracep->declBit(c+18,"EXMEM_out_memWrite", false,-1);
    tracep->declBit(c+64,"EXMEM_out_regWrite", false,-1);
    tracep->declBit(c+19,"EXMEM_out_branch", false,-1);
    tracep->declBit(c+20,"EXMEM_out_zero", false,-1);
    tracep->declBus(c+65,"MEMWB_out_memData", false,-1, 31,0);
    tracep->declBus(c+66,"MEMWB_out_aluResult", false,-1, 31,0);
    tracep->declBit(c+67,"MEMWB_out_memtoReg", false,-1);
    tracep->declBit(c+68,"MEMWB_out_regWrite", false,-1);
    tracep->declBus(c+69,"IDEX_out_rd", false,-1, 4,0);
    tracep->declBus(c+70,"EXMEM_out_rd", false,-1, 4,0);
    tracep->declBus(c+71,"MEMWB_out_rd", false,-1, 4,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+4,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+7,"A", false,-1, 31,0);
    tracep->declBus(c+3,"B", false,-1, 31,0);
    tracep->declBus(c+78,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+86,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+11,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+15,"funct7", false,-1);
    tracep->declBus(c+10,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+21,"combined", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+55,"a", false,-1, 31,0);
    tracep->declBus(c+128,"b", false,-1, 31,0);
    tracep->declBus(c+56,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+6,"a", false,-1, 31,0);
    tracep->declBus(c+1,"b", false,-1, 31,0);
    tracep->declBus(c+2,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+72,"opcode", false,-1, 6,0);
    tracep->declBit(c+80,"branch", false,-1);
    tracep->declBit(c+81,"memRead", false,-1);
    tracep->declBit(c+82,"memtoReg", false,-1);
    tracep->declBus(c+79,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+83,"memWrite", false,-1);
    tracep->declBit(c+84,"ALUSrc", false,-1);
    tracep->declBit(c+85,"regWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+18,"memWrite", false,-1);
    tracep->declBit(c+89,"memRead", false,-1);
    tracep->declBus(c+88,"address", false,-1, 31,0);
    tracep->declBus(c+17,"writeData", false,-1, 31,0);
    tracep->declBus(c+127,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_reg ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+78,"in_aluResult", false,-1, 31,0);
    tracep->declBus(c+2,"in_pc", false,-1, 31,0);
    tracep->declBus(c+8,"in_rs2", false,-1, 31,0);
    tracep->declBus(c+69,"in_rd", false,-1, 4,0);
    tracep->declBit(c+87,"in_memRead", false,-1);
    tracep->declBit(c+62,"in_memtoReg", false,-1);
    tracep->declBit(c+12,"in_memWrite", false,-1);
    tracep->declBit(c+61,"in_regWrite", false,-1);
    tracep->declBit(c+13,"in_branch", false,-1);
    tracep->declBit(c+86,"in_zero", false,-1);
    tracep->declBus(c+88,"out_aluResult", false,-1, 31,0);
    tracep->declBus(c+16,"out_pc", false,-1, 31,0);
    tracep->declBus(c+17,"out_rs2", false,-1, 31,0);
    tracep->declBus(c+70,"out_rd", false,-1, 4,0);
    tracep->declBit(c+89,"out_memRead", false,-1);
    tracep->declBit(c+63,"out_memtoReg", false,-1);
    tracep->declBit(c+18,"out_memWrite", false,-1);
    tracep->declBit(c+64,"out_regWrite", false,-1);
    tracep->declBit(c+19,"out_branch", false,-1);
    tracep->declBit(c+20,"out_zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_reg ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+73,"in_funct3", false,-1, 2,0);
    tracep->declBus(c+79,"in_ALUOp", false,-1, 1,0);
    tracep->declBit(c+85,"in_regWrite", false,-1);
    tracep->declBit(c+81,"in_memRead", false,-1);
    tracep->declBit(c+82,"in_memtoReg", false,-1);
    tracep->declBit(c+83,"in_memWrite", false,-1);
    tracep->declBit(c+80,"in_branch", false,-1);
    tracep->declBit(c+84,"in_ALUSrc", false,-1);
    tracep->declBit(c+74,"in_funct7", false,-1);
    tracep->declBus(c+5,"in_pc", false,-1, 31,0);
    tracep->declBus(c+124,"in_rs1", false,-1, 31,0);
    tracep->declBus(c+125,"in_rs2", false,-1, 31,0);
    tracep->declBus(c+58,"in_imm", false,-1, 31,0);
    tracep->declBus(c+75,"in_rd", false,-1, 4,0);
    tracep->declBus(c+6,"out_pc", false,-1, 31,0);
    tracep->declBus(c+7,"out_rs1", false,-1, 31,0);
    tracep->declBus(c+8,"out_rs2", false,-1, 31,0);
    tracep->declBus(c+9,"out_imm", false,-1, 31,0);
    tracep->declBit(c+61,"out_regWrite", false,-1);
    tracep->declBit(c+87,"out_memRead", false,-1);
    tracep->declBit(c+62,"out_memtoReg", false,-1);
    tracep->declBit(c+12,"out_memWrite", false,-1);
    tracep->declBit(c+13,"out_branch", false,-1);
    tracep->declBit(c+14,"out_ALUSrc", false,-1);
    tracep->declBit(c+15,"out_funct7", false,-1);
    tracep->declBus(c+10,"out_funct3", false,-1, 2,0);
    tracep->declBus(c+11,"out_ALUOp", false,-1, 1,0);
    tracep->declBus(c+69,"out_rd", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_reg ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+57,"inst_in", false,-1, 31,0);
    tracep->declBus(c+55,"pc_in", false,-1, 31,0);
    tracep->declBus(c+60,"inst_out", false,-1, 31,0);
    tracep->declBus(c+5,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+60,"inst", false,-1, 31,0);
    tracep->declBus(c+58,"imm", false,-1, 31,0);
    tracep->declBus(c+72,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+55,"readAddr", false,-1, 31,0);
    tracep->declBus(c+57,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_reg ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+127,"in_memData", false,-1, 31,0);
    tracep->declBus(c+88,"in_aluResult", false,-1, 31,0);
    tracep->declBus(c+70,"in_rd", false,-1, 4,0);
    tracep->declBit(c+63,"in_memtoReg", false,-1);
    tracep->declBit(c+64,"in_regWrite", false,-1);
    tracep->declBus(c+65,"out_memData", false,-1, 31,0);
    tracep->declBus(c+66,"out_aluResult", false,-1, 31,0);
    tracep->declBus(c+71,"out_rd", false,-1, 4,0);
    tracep->declBit(c+67,"out_memtoReg", false,-1);
    tracep->declBit(c+68,"out_regWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+129,"size", false,-1, 31,0);
    tracep->declBit(c+14,"sel", false,-1);
    tracep->declBus(c+8,"s0", false,-1, 31,0);
    tracep->declBus(c+9,"s1", false,-1, 31,0);
    tracep->declBus(c+3,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+129,"size", false,-1, 31,0);
    tracep->declBit(c+22,"sel", false,-1);
    tracep->declBus(c+56,"s0", false,-1, 31,0);
    tracep->declBus(c+16,"s1", false,-1, 31,0);
    tracep->declBus(c+126,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+129,"size", false,-1, 31,0);
    tracep->declBit(c+67,"sel", false,-1);
    tracep->declBus(c+66,"s0", false,-1, 31,0);
    tracep->declBus(c+65,"s1", false,-1, 31,0);
    tracep->declBus(c+59,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBus(c+126,"pc_i", false,-1, 31,0);
    tracep->declBus(c+55,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+90,"clk", false,-1);
    tracep->declBit(c+91,"rst", false,-1);
    tracep->declBit(c+68,"regWrite", false,-1);
    tracep->declBus(c+76,"readReg1", false,-1, 4,0);
    tracep->declBus(c+77,"readReg2", false,-1, 4,0);
    tracep->declBus(c+71,"writeReg", false,-1, 4,0);
    tracep->declBus(c+59,"writeData", false,-1, 31,0);
    tracep->declBus(c+124,"readData1", false,-1, 31,0);
    tracep->declBus(c+125,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+23+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+9,"i", false,-1, 31,0);
    tracep->declBus(c+1,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,((vlSelf->SingleCycleCPU__DOT__IDEX_out_imm 
                             << 1U)),32);
    bufp->fullIData(oldp+2,((vlSelf->SingleCycleCPU__DOT__IDEX_out_pc 
                             + (vlSelf->SingleCycleCPU__DOT__IDEX_out_imm 
                                << 1U))),32);
    bufp->fullIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__w23),32);
    bufp->fullCData(oldp+4,(vlSelf->SingleCycleCPU__DOT__w22),4);
    bufp->fullIData(oldp+5,(vlSelf->SingleCycleCPU__DOT__IFID_out_pc),32);
    bufp->fullIData(oldp+6,(vlSelf->SingleCycleCPU__DOT__IDEX_out_pc),32);
    bufp->fullIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1),32);
    bufp->fullIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__IDEX_out_rs2),32);
    bufp->fullIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__IDEX_out_imm),32);
    bufp->fullCData(oldp+10,(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct3),3);
    bufp->fullCData(oldp+11,(vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUOp),2);
    bufp->fullBit(oldp+12,(vlSelf->SingleCycleCPU__DOT__IDEX_out_memWrite));
    bufp->fullBit(oldp+13,(vlSelf->SingleCycleCPU__DOT__IDEX_out_branch));
    bufp->fullBit(oldp+14,(vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUSrc));
    bufp->fullBit(oldp+15,(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct7));
    bufp->fullIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_pc),32);
    bufp->fullIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_rs2),32);
    bufp->fullBit(oldp+18,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_memWrite));
    bufp->fullBit(oldp+19,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch));
    bufp->fullBit(oldp+20,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero));
    bufp->fullCData(oldp+21,((((IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUOp) 
                               << 4U) | (((IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct7) 
                                          << 3U) | (IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct3)))),6);
    bufp->fullBit(oldp+22,(((IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch) 
                            & (IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero))));
    bufp->fullIData(oldp+23,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__w1),32);
    bufp->fullIData(oldp+56,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__w1)),32);
    bufp->fullIData(oldp+57,(((0x80U <= vlSelf->SingleCycleCPU__DOT__w1)
                               ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->SingleCycleCPU__DOT__w1)] 
                                        << 0x18U) | 
                                       ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->SingleCycleCPU__DOT__w1))] 
                                         << 0x10U) 
                                        | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->SingleCycleCPU__DOT__w1))] 
                                            << 8U) 
                                           | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->SingleCycleCPU__DOT__w1))]))))),32);
    bufp->fullIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__w13),32);
    bufp->fullIData(oldp+59,(((IData)(vlSelf->SingleCycleCPU__DOT__MEMWB_out_memtoReg)
                               ? vlSelf->SingleCycleCPU__DOT__MEMWB_out_memData
                               : vlSelf->SingleCycleCPU__DOT__MEMWB_out_aluResult)),32);
    bufp->fullIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__IFID_out_inst),32);
    bufp->fullBit(oldp+61,(vlSelf->SingleCycleCPU__DOT__IDEX_out_regWrite));
    bufp->fullBit(oldp+62,(vlSelf->SingleCycleCPU__DOT__IDEX_out_memtoReg));
    bufp->fullBit(oldp+63,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_memtoReg));
    bufp->fullBit(oldp+64,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_regWrite));
    bufp->fullIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_memData),32);
    bufp->fullIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_aluResult),32);
    bufp->fullBit(oldp+67,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_memtoReg));
    bufp->fullBit(oldp+68,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_regWrite));
    bufp->fullCData(oldp+69,(vlSelf->SingleCycleCPU__DOT__IDEX_out_rd),5);
    bufp->fullCData(oldp+70,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_rd),5);
    bufp->fullCData(oldp+71,(vlSelf->SingleCycleCPU__DOT__MEMWB_out_rd),5);
    bufp->fullCData(oldp+72,((0x7fU & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)),7);
    bufp->fullCData(oldp+73,((7U & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+74,((1U & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+76,((0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+78,(vlSelf->SingleCycleCPU__DOT__w19),32);
    bufp->fullCData(oldp+79,(vlSelf->SingleCycleCPU__DOT__w7),2);
    bufp->fullBit(oldp+80,(vlSelf->SingleCycleCPU__DOT__w4));
    bufp->fullBit(oldp+81,(vlSelf->SingleCycleCPU__DOT__w5));
    bufp->fullBit(oldp+82,(vlSelf->SingleCycleCPU__DOT__w6));
    bufp->fullBit(oldp+83,(vlSelf->SingleCycleCPU__DOT__w8));
    bufp->fullBit(oldp+84,(vlSelf->SingleCycleCPU__DOT__w9));
    bufp->fullBit(oldp+85,(vlSelf->SingleCycleCPU__DOT__w10));
    bufp->fullBit(oldp+86,((0U == vlSelf->SingleCycleCPU__DOT__w19)));
    bufp->fullBit(oldp+87,(vlSelf->SingleCycleCPU__DOT__IDEX_out_memRead));
    bufp->fullIData(oldp+88,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult),32);
    bufp->fullBit(oldp+89,(vlSelf->SingleCycleCPU__DOT__EXMEM_out_memRead));
    bufp->fullBit(oldp+90,(vlSelf->clk));
    bufp->fullBit(oldp+91,(vlSelf->start));
    bufp->fullIData(oldp+92,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+93,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+94,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+95,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+96,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+97,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+98,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+99,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+100,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+124,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+125,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+126,((((IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch) 
                                & (IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero))
                                ? vlSelf->SingleCycleCPU__DOT__EXMEM_out_pc
                                : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__w1))),32);
    bufp->fullIData(oldp+127,(vlSelf->SingleCycleCPU__DOT__w20),32);
    bufp->fullIData(oldp+128,(4U),32);
    bufp->fullIData(oldp+129,(0x20U),32);
}
