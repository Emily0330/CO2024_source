// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPipelineCPU.h for the primary calling header

#include "verilated.h"

#include "VPipelineCPU___024root.h"

VL_ATTR_COLD void VPipelineCPU___024root___eval_static(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial\n"); );
    // Body
    VPipelineCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__start = vlSelf->start;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXMEM_aluResult 
        = vlSelf->PipelineCPU__DOT__EXMEM_aluResult;
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXMEM_memRead 
        = vlSelf->PipelineCPU__DOT__EXMEM_memRead;
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_initial__TOP(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_hd0a1b870__0;
    // Body
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_hd0a1b870__0[0U] = 0x2e747874U;
    __Vtemp_hd0a1b870__0[1U] = 0x494f4e53U;
    __Vtemp_hd0a1b870__0[2U] = 0x52554354U;
    __Vtemp_hd0a1b870__0[3U] = 0x494e5354U;
    __Vtemp_hd0a1b870__0[4U] = 0x4553545fU;
    __Vtemp_hd0a1b870__0[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_hd0a1b870__0)
                 ,  &(vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_final(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_final\n"); );
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_triggers__stl(VPipelineCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf);

VL_ATTR_COLD void VPipelineCPU___024root___eval_settle(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VPipelineCPU___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VPipelineCPU___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("PipelineCPU.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VPipelineCPU___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 128> VPipelineCPU__ConstPool__TABLE_h748f80b3_0;
extern const VlUnpacked<CData/*5:0*/, 128> VPipelineCPU__ConstPool__TABLE_h6befec82_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_he16e6d56_0;
extern const VlUnpacked<CData/*1:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3896431d_0;
extern const VlUnpacked<CData/*2:0*/, 128> VPipelineCPU__ConstPool__TABLE_h26b4c800_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_hbdb291c7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h166e3cc7_0;
extern const VlUnpacked<CData/*0:0*/, 128> VPipelineCPU__ConstPool__TABLE_h3729482a_0;

VL_ATTR_COLD void VPipelineCPU___024root___stl_sequent__TOP__0(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->PipelineCPU__DOT__w7 = ((0x40U & vlSelf->PipelineCPU__DOT__IFID_inst)
                                     ? ((0x20U & vlSelf->PipelineCPU__DOT__IFID_inst)
                                         ? ((0x10U 
                                             & vlSelf->PipelineCPU__DOT__IFID_inst)
                                             ? 0U : 
                                            ((8U & vlSelf->PipelineCPU__DOT__IFID_inst)
                                              ? ((4U 
                                                  & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | ((0xff000U 
                                                        & vlSelf->PipelineCPU__DOT__IFID_inst) 
                                                       | ((0x800U 
                                                           & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                >> 0x14U)))))
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                              : ((4U 
                                                  & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xbU) 
                                                    | (0x7ffU 
                                                       & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                          >> 0x14U)))
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                >> 7U)))))
                                                    : 0U)
                                                   : 0U))))
                                         : 0U) : ((0x20U 
                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                   ? 
                                                  ((0x10U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                 >> 7U))))
                                                        : 0U)
                                                       : 0U))))
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | (0x7ffU 
                                                           & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                              >> 0x14U)))
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->PipelineCPU__DOT__IFID_inst)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                                     >> 0x1fU))) 
                                                         << 0xbU) 
                                                        | (0x7ffU 
                                                           & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                              >> 0x14U)))
                                                        : 0U)
                                                       : 0U))))));
    __Vtableidx2 = (((IData)(vlSelf->PipelineCPU__DOT__IDEX_ALUOp) 
                     << 4U) | (((IData)(vlSelf->PipelineCPU__DOT__IDEX_funct7) 
                                << 3U) | (IData)(vlSelf->PipelineCPU__DOT__IDEX_funct3)));
    vlSelf->PipelineCPU__DOT__ALUCtl = VPipelineCPU__ConstPool__TABLE_h748f80b3_0
        [__Vtableidx2];
    vlSelf->PipelineCPU__DOT__w16 = ((((IData)(vlSelf->PipelineCPU__DOT__EXMEM_regWrite) 
                                       & (0U != (IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd))) 
                                      & ((IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd) 
                                         == (IData)(vlSelf->PipelineCPU__DOT__IDEX_rs1_num)))
                                      ? 2U : ((((IData)(vlSelf->PipelineCPU__DOT__MEMWB_regWrite) 
                                                & (0U 
                                                   != (IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd))) 
                                               & ((IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd) 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__IDEX_rs1_num)))
                                               ? 1U
                                               : 0U));
    vlSelf->PipelineCPU__DOT__w6 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__IFID_inst 
                   >> 0x14U))];
    vlSelf->PipelineCPU__DOT__w17 = ((((IData)(vlSelf->PipelineCPU__DOT__EXMEM_regWrite) 
                                       & (0U != (IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd))) 
                                      & ((IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd) 
                                         == (IData)(vlSelf->PipelineCPU__DOT__IDEX_rs2_num)))
                                      ? 2U : ((((IData)(vlSelf->PipelineCPU__DOT__MEMWB_regWrite) 
                                                & (0U 
                                                   != (IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd))) 
                                               & ((IData)(vlSelf->PipelineCPU__DOT__MEMWB_rd) 
                                                  == (IData)(vlSelf->PipelineCPU__DOT__IDEX_rs2_num)))
                                               ? 1U
                                               : 0U));
    vlSelf->PipelineCPU__DOT__w5 = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [(0x1fU & (vlSelf->PipelineCPU__DOT__IFID_inst 
                   >> 0xfU))];
    vlSelf->PipelineCPU__DOT__w15 = ((0U == (IData)(vlSelf->PipelineCPU__DOT__MEMWB_memtoReg))
                                      ? vlSelf->PipelineCPU__DOT__MEMWB_aluResult
                                      : ((1U == (IData)(vlSelf->PipelineCPU__DOT__MEMWB_memtoReg))
                                          ? vlSelf->PipelineCPU__DOT__MEMWB_memData
                                          : vlSelf->PipelineCPU__DOT__MEMWB_next_pc));
    vlSelf->r[0U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
        [0x1fU];
    vlSelf->PipelineCPU__DOT__hazard_o = ((((IData)(vlSelf->PipelineCPU__DOT__IDEX_memRead) 
                                            | (IData)(vlSelf->PipelineCPU__DOT__IDEX_regWrite)) 
                                           & (((IData)(vlSelf->PipelineCPU__DOT__IDEX_rd) 
                                               == (0x1fU 
                                                   & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                      >> 0xfU))) 
                                              | ((IData)(vlSelf->PipelineCPU__DOT__IDEX_rd) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                     >> 0x14U))))) 
                                          | ((IData)(vlSelf->PipelineCPU__DOT__EXMEM_regWrite) 
                                             & (((IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                     >> 0xfU))) 
                                                | ((IData)(vlSelf->PipelineCPU__DOT__EXMEM_rd) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                                       >> 0x14U))))));
    __Vtableidx1 = (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst);
    if ((1U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w20 = VPipelineCPU__ConstPool__TABLE_he16e6d56_0
            [__Vtableidx1];
    }
    if ((2U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w19 = VPipelineCPU__ConstPool__TABLE_h3896431d_0
            [__Vtableidx1];
    }
    if ((4U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w22 = VPipelineCPU__ConstPool__TABLE_h26b4c800_0
            [__Vtableidx1];
    }
    if ((8U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w21 = VPipelineCPU__ConstPool__TABLE_hbdb291c7_0
            [__Vtableidx1];
    }
    if ((0x10U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w23 = VPipelineCPU__ConstPool__TABLE_h166e3cc7_0
            [__Vtableidx1];
    }
    if ((0x20U & VPipelineCPU__ConstPool__TABLE_h6befec82_0
         [__Vtableidx1])) {
        vlSelf->PipelineCPU__DOT__w18 = VPipelineCPU__ConstPool__TABLE_h3729482a_0
            [__Vtableidx1];
    }
    vlSelf->PipelineCPU__DOT__flush = ((0x6fU == (0x7fU 
                                                  & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                       | ((0x67U == 
                                           (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                          | ((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                             & ((IData)(
                                                        ((0U 
                                                          == 
                                                          (0x7000U 
                                                           & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                                         & (vlSelf->PipelineCPU__DOT__w5 
                                                            == vlSelf->PipelineCPU__DOT__w6))) 
                                                | ((IData)(
                                                           ((0x1000U 
                                                             == 
                                                             (0x7000U 
                                                              & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                                            & (vlSelf->PipelineCPU__DOT__w5 
                                                               != vlSelf->PipelineCPU__DOT__w6))) 
                                                   | ((IData)(
                                                              ((0x4000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                                               & (vlSelf->PipelineCPU__DOT__w5 
                                                                  < vlSelf->PipelineCPU__DOT__w6))) 
                                                      | (IData)(
                                                                ((0x5000U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->PipelineCPU__DOT__IFID_inst)) 
                                                                 & (vlSelf->PipelineCPU__DOT__w5 
                                                                    >= vlSelf->PipelineCPU__DOT__w6)))))))));
    vlSelf->PipelineCPU__DOT__w11 = ((0U == (IData)(vlSelf->PipelineCPU__DOT__w16))
                                      ? vlSelf->PipelineCPU__DOT__IDEX_rs1
                                      : ((1U == (IData)(vlSelf->PipelineCPU__DOT__w16))
                                          ? vlSelf->PipelineCPU__DOT__w15
                                          : vlSelf->PipelineCPU__DOT__EXMEM_aluResult));
    vlSelf->PipelineCPU__DOT__w9 = ((0U == (IData)(vlSelf->PipelineCPU__DOT__w17))
                                     ? vlSelf->PipelineCPU__DOT__IDEX_rs2
                                     : ((1U == (IData)(vlSelf->PipelineCPU__DOT__w17))
                                         ? vlSelf->PipelineCPU__DOT__w15
                                         : vlSelf->PipelineCPU__DOT__EXMEM_aluResult));
    vlSelf->PipelineCPU__DOT__w26 = ((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__w20));
    if (vlSelf->PipelineCPU__DOT__hazard_o) {
        vlSelf->PipelineCPU__DOT__w25 = 0U;
        vlSelf->PipelineCPU__DOT__w28 = 0U;
    } else {
        vlSelf->PipelineCPU__DOT__w25 = vlSelf->PipelineCPU__DOT__w19;
        vlSelf->PipelineCPU__DOT__w28 = vlSelf->PipelineCPU__DOT__w22;
    }
    vlSelf->PipelineCPU__DOT__w27 = ((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__w21));
    vlSelf->PipelineCPU__DOT__w29 = ((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__w23));
    vlSelf->PipelineCPU__DOT__w24 = ((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__w18));
    vlSelf->PipelineCPU__DOT__w3 = (((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                     & (IData)(vlSelf->PipelineCPU__DOT__flush))
                                     ? (((0x67U == 
                                          (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst))
                                          ? vlSelf->PipelineCPU__DOT__w5
                                          : vlSelf->PipelineCPU__DOT__IFID_pc) 
                                        + vlSelf->PipelineCPU__DOT__w7)
                                     : ((IData)(4U) 
                                        + vlSelf->PipelineCPU__DOT__w4));
    vlSelf->PipelineCPU__DOT__w12 = ((IData)(vlSelf->PipelineCPU__DOT__IDEX_ALUSrc)
                                      ? vlSelf->PipelineCPU__DOT__IDEX_imm
                                      : vlSelf->PipelineCPU__DOT__w9);
    if ((1U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (vlSelf->PipelineCPU__DOT__w11 
                                         + vlSelf->PipelineCPU__DOT__w12);
    } else if ((4U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (vlSelf->PipelineCPU__DOT__w11 
                                         - vlSelf->PipelineCPU__DOT__w12);
    } else if ((6U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (VL_LTS_III(32, vlSelf->PipelineCPU__DOT__w11, vlSelf->PipelineCPU__DOT__w12)
                                          ? 1U : 0U);
    } else if ((7U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (vlSelf->PipelineCPU__DOT__w11 
                                         & vlSelf->PipelineCPU__DOT__w12);
    } else if ((8U == (IData)(vlSelf->PipelineCPU__DOT__ALUCtl))) {
        vlSelf->PipelineCPU__DOT__w13 = (vlSelf->PipelineCPU__DOT__w11 
                                         | vlSelf->PipelineCPU__DOT__w12);
    }
}

VL_ATTR_COLD void VPipelineCPU___024root___eval_stl(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        VPipelineCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__act(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] PipelineCPU.EXMEM_aluResult or [changed] PipelineCPU.EXMEM_memRead)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VPipelineCPU___024root___dump_triggers__nba(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] PipelineCPU.EXMEM_aluResult or [changed] PipelineCPU.EXMEM_memRead)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VPipelineCPU___024root___ctor_var_reset(VPipelineCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->PipelineCPU__DOT__hazard_o = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w18 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w20 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w21 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w23 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w24 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w26 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w27 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w29 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__w16 = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__w17 = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__w19 = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__w25 = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__w22 = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__w28 = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__w3 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w4 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w5 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w6 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w7 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w9 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w11 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w12 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w13 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w14 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__w15 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IFID_pc = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IFID_inst = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IFID_next_pc = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IDEX_next_pc = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IDEX_rs1 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IDEX_rs2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IDEX_imm = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__IDEX_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__IDEX_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__IDEX_memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__IDEX_ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__IDEX_ALUOp = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__IDEX_funct3 = VL_RAND_RESET_I(3);
    vlSelf->PipelineCPU__DOT__IDEX_funct7 = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__ALUCtl = VL_RAND_RESET_I(4);
    vlSelf->PipelineCPU__DOT__EXMEM_aluResult = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EXMEM_rs2 = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EXMEM_next_pc = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__EXMEM_memRead = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EXMEM_memWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__EXMEM_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__MEMWB_memData = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MEMWB_aluResult = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MEMWB_next_pc = VL_RAND_RESET_I(32);
    vlSelf->PipelineCPU__DOT__MEMWB_regWrite = VL_RAND_RESET_I(1);
    vlSelf->PipelineCPU__DOT__IDEX_rd = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__EXMEM_rd = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__MEMWB_rd = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__IDEX_rs1_num = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__IDEX_rs2_num = VL_RAND_RESET_I(5);
    vlSelf->PipelineCPU__DOT__IDEX_memtoReg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__EXMEM_memtoReg = VL_RAND_RESET_I(2);
    vlSelf->PipelineCPU__DOT__MEMWB_memtoReg = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->PipelineCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__PipelineCPU__DOT__IFID_inst = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__start = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXMEM_aluResult = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__PipelineCPU__DOT__EXMEM_memRead = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
