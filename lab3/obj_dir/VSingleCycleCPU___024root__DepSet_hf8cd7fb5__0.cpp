// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h8bf831f2_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_hdf017942_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__EXMEM_out_memWrite) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->SingleCycleCPU__DOT__EXMEM_out_rs2 
                   >> 0x18U);
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__EXMEM_out_rs2 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__EXMEM_out_rs2 
                            >> 8U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->SingleCycleCPU__DOT__EXMEM_out_rs2);
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult);
        }
        vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUOp 
            = vlSelf->SingleCycleCPU__DOT__w7;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_funct3 
            = (7U & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                     >> 0xcU));
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_pc = 
            (vlSelf->SingleCycleCPU__DOT__IDEX_out_pc 
             + (vlSelf->SingleCycleCPU__DOT__IDEX_out_imm 
                << 1U));
        vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1 = 
            vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                       >> 0xfU))];
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_rs2 
            = vlSelf->SingleCycleCPU__DOT__IDEX_out_rs2;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_imm = vlSelf->SingleCycleCPU__DOT__w13;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_pc = vlSelf->SingleCycleCPU__DOT__IFID_out_pc;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_rs2 = 
            vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                       >> 0x14U))];
        vlSelf->SingleCycleCPU__DOT__IFID_out_pc = vlSelf->SingleCycleCPU__DOT__w1;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero 
            = (0U == vlSelf->SingleCycleCPU__DOT__w19);
        vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUSrc 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__w9));
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_branch));
        vlSelf->SingleCycleCPU__DOT__IDEX_out_funct7 
            = (1U & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                     >> 0x1eU));
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_memWrite 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_memWrite));
        vlSelf->SingleCycleCPU__DOT__IDEX_out_branch 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__w4));
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUOp = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_funct3 = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_pc = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1 = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_rs2 = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_imm = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_pc = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_rs2 = 0U;
        vlSelf->SingleCycleCPU__DOT__IFID_out_pc = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUSrc = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_funct7 = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_memWrite = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_branch = 0U;
    }
    __Vtableidx2 = (((IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUOp) 
                     << 4U) | (((IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct7) 
                                << 3U) | (IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_funct3)));
    if (VSingleCycleCPU__ConstPool__TABLE_h8bf831f2_0
        [__Vtableidx2]) {
        vlSelf->SingleCycleCPU__DOT__w22 = VSingleCycleCPU__ConstPool__TABLE_hdf017942_0
            [__Vtableidx2];
    }
    vlSelf->SingleCycleCPU__DOT__IDEX_out_memWrite 
        = ((IData)(vlSelf->start) & (IData)(vlSelf->SingleCycleCPU__DOT__w8));
    vlSelf->SingleCycleCPU__DOT__w23 = ((IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_ALUSrc)
                                         ? vlSelf->SingleCycleCPU__DOT__IDEX_out_imm
                                         : vlSelf->SingleCycleCPU__DOT__IDEX_out_rs2);
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__MEMWB_out_regWrite) {
            __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__MEMWB_out_rd))
                    ? 0U : ((IData)(vlSelf->SingleCycleCPU__DOT__MEMWB_out_memtoReg)
                             ? vlSelf->SingleCycleCPU__DOT__MEMWB_out_memData
                             : vlSelf->SingleCycleCPU__DOT__MEMWB_out_aluResult));
            __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->SingleCycleCPU__DOT__MEMWB_out_rd;
        }
    } else {
        __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_aluResult 
            = vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult;
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_memData 
            = vlSelf->SingleCycleCPU__DOT__w20;
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_rd = vlSelf->SingleCycleCPU__DOT__EXMEM_out_rd;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_rd = vlSelf->SingleCycleCPU__DOT__IDEX_out_rd;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_rd = 
            (0x1fU & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                      >> 7U));
        vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
            = ((0x80U <= vlSelf->SingleCycleCPU__DOT__w1)
                ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                         [(0x7fU & vlSelf->SingleCycleCPU__DOT__w1)] 
                         << 0x18U) | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & ((IData)(1U) 
                                                  + vlSelf->SingleCycleCPU__DOT__w1))] 
                                       << 0x10U) | 
                                      ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(2U) 
                                                   + vlSelf->SingleCycleCPU__DOT__w1))] 
                                        << 8U) | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & ((IData)(3U) 
                                                  + vlSelf->SingleCycleCPU__DOT__w1))]))));
        vlSelf->SingleCycleCPU__DOT__w1 = vlSelf->SingleCycleCPU__DOT__w18;
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_regWrite 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_regWrite));
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_memtoReg 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_memtoReg));
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_regWrite 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_regWrite));
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_memtoReg 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_memtoReg));
        vlSelf->SingleCycleCPU__DOT__IDEX_out_regWrite 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__w10));
        vlSelf->SingleCycleCPU__DOT__IDEX_out_memtoReg 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__w6));
    } else {
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_aluResult = 0U;
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_memData = 0U;
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_rd = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_rd = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_rd = 0U;
        vlSelf->SingleCycleCPU__DOT__IFID_out_inst = 0U;
        vlSelf->SingleCycleCPU__DOT__w1 = 0U;
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_regWrite = 0U;
        vlSelf->SingleCycleCPU__DOT__MEMWB_out_memtoReg = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_regWrite = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_memtoReg = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_regWrite = 0U;
        vlSelf->SingleCycleCPU__DOT__IDEX_out_memtoReg = 0U;
    }
    vlSelf->SingleCycleCPU__DOT__w13 = ((0x40U & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                         ? ((0x20U 
                                             & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                             ? ((0x10U 
                                                 & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                     ? 
                                                    ((0x7ffff800U 
                                                      & ((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xbU)) 
                                                     | ((0x400U 
                                                         & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                            << 3U)) 
                                                        | ((0x3f0U 
                                                            & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                               >> 0x15U)) 
                                                           | (0xfU 
                                                              & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                                 >> 8U)))))
                                                     : 0U)
                                                    : 0U))))
                                             : 0U) : 
                                        ((0x20U & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                          ? ((0x10U 
                                              & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                              ? 0U : 
                                             ((8U & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                                          : ((0x10U 
                                              & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                              ? ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__IFID_out_inst)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xbU) 
                                                     | (0x7ffU 
                                                        & (vlSelf->SingleCycleCPU__DOT__IFID_out_inst 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U))))));
    vlSelf->SingleCycleCPU__DOT__w18 = (((IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_branch) 
                                         & (IData)(vlSelf->SingleCycleCPU__DOT__EXMEM_out_zero))
                                         ? vlSelf->SingleCycleCPU__DOT__EXMEM_out_pc
                                         : ((IData)(4U) 
                                            + vlSelf->SingleCycleCPU__DOT__w1));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__EXMEM_out_memRead) {
        vlSelf->SingleCycleCPU__DOT__w20 = ((0xffffffU 
                                             & vlSelf->SingleCycleCPU__DOT__w20) 
                                            | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                               [(0x7fU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult))] 
                                               << 0x18U));
        vlSelf->SingleCycleCPU__DOT__w20 = ((0xff00ffffU 
                                             & vlSelf->SingleCycleCPU__DOT__w20) 
                                            | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                               [(0x7fU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult))] 
                                               << 0x10U));
        vlSelf->SingleCycleCPU__DOT__w20 = ((0xffff00ffU 
                                             & vlSelf->SingleCycleCPU__DOT__w20) 
                                            | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                               [(0x7fU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult))] 
                                               << 8U));
        vlSelf->SingleCycleCPU__DOT__w20 = ((0xffffff00U 
                                             & vlSelf->SingleCycleCPU__DOT__w20) 
                                            | vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                            [(0x7fU 
                                              & vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult)]);
    }
}

extern const VlUnpacked<CData/*6:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hba27a520_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h4789efb2_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*1:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h83c796dd_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_hd5c73f6d_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h7c96d48f_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__4(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult 
            = vlSelf->SingleCycleCPU__DOT__w19;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_memRead 
            = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__IDEX_out_memRead));
    } else {
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_aluResult = 0U;
        vlSelf->SingleCycleCPU__DOT__EXMEM_out_memRead = 0U;
    }
    if ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__w22))) {
        vlSelf->SingleCycleCPU__DOT__w19 = (vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1 
                                            + vlSelf->SingleCycleCPU__DOT__w23);
    } else if ((4U == (IData)(vlSelf->SingleCycleCPU__DOT__w22))) {
        vlSelf->SingleCycleCPU__DOT__w19 = (vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1 
                                            - vlSelf->SingleCycleCPU__DOT__w23);
    } else if ((6U == (IData)(vlSelf->SingleCycleCPU__DOT__w22))) {
        vlSelf->SingleCycleCPU__DOT__w19 = (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1, vlSelf->SingleCycleCPU__DOT__w23)
                                             ? 1U : 0U);
    } else if ((7U == (IData)(vlSelf->SingleCycleCPU__DOT__w22))) {
        vlSelf->SingleCycleCPU__DOT__w19 = (vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1 
                                            & vlSelf->SingleCycleCPU__DOT__w23);
    } else if ((8U == (IData)(vlSelf->SingleCycleCPU__DOT__w22))) {
        vlSelf->SingleCycleCPU__DOT__w19 = (vlSelf->SingleCycleCPU__DOT__IDEX_out_rs1 
                                            | vlSelf->SingleCycleCPU__DOT__w23);
    }
    vlSelf->SingleCycleCPU__DOT__IDEX_out_memRead = 
        ((IData)(vlSelf->start) & (IData)(vlSelf->SingleCycleCPU__DOT__w5));
    __Vtableidx1 = (0x7fU & vlSelf->SingleCycleCPU__DOT__IFID_out_inst);
    if ((1U & VSingleCycleCPU__ConstPool__TABLE_hba27a520_0
         [__Vtableidx1])) {
        vlSelf->SingleCycleCPU__DOT__w4 = VSingleCycleCPU__ConstPool__TABLE_h4789efb2_0
            [__Vtableidx1];
    }
    if ((2U & VSingleCycleCPU__ConstPool__TABLE_hba27a520_0
         [__Vtableidx1])) {
        vlSelf->SingleCycleCPU__DOT__w5 = VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0
            [__Vtableidx1];
    }
    if ((4U & VSingleCycleCPU__ConstPool__TABLE_hba27a520_0
         [__Vtableidx1])) {
        vlSelf->SingleCycleCPU__DOT__w6 = VSingleCycleCPU__ConstPool__TABLE_he16e6d56_0
            [__Vtableidx1];
    }
    if ((8U & VSingleCycleCPU__ConstPool__TABLE_hba27a520_0
         [__Vtableidx1])) {
        vlSelf->SingleCycleCPU__DOT__w7 = VSingleCycleCPU__ConstPool__TABLE_h83c796dd_0
            [__Vtableidx1];
    }
    if ((0x10U & VSingleCycleCPU__ConstPool__TABLE_hba27a520_0
         [__Vtableidx1])) {
        vlSelf->SingleCycleCPU__DOT__w8 = VSingleCycleCPU__ConstPool__TABLE_hbdb291c7_0
            [__Vtableidx1];
    }
    if ((0x20U & VSingleCycleCPU__ConstPool__TABLE_hba27a520_0
         [__Vtableidx1])) {
        vlSelf->SingleCycleCPU__DOT__w9 = VSingleCycleCPU__ConstPool__TABLE_hd5c73f6d_0
            [__Vtableidx1];
    }
    if ((0x40U & VSingleCycleCPU__ConstPool__TABLE_hba27a520_0
         [__Vtableidx1])) {
        vlSelf->SingleCycleCPU__DOT__w10 = VSingleCycleCPU__ConstPool__TABLE_h7c96d48f_0
            [__Vtableidx1];
    }
}

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
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
            VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSingleCycleCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingleCycleCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
