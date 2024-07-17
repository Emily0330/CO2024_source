// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+103+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+103+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBit(c+60,"hazard_o", false,-1);
    tracep->declBit(c+98,"flush", false,-1);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->declBit(c+61,"w18", false,-1);
    tracep->declBit(c+62,"w20", false,-1);
    tracep->declBit(c+63,"w21", false,-1);
    tracep->declBit(c+64,"w23", false,-1);
    tracep->declBit(c+65,"w24", false,-1);
    tracep->declBit(c+66,"w26", false,-1);
    tracep->declBit(c+67,"w27", false,-1);
    tracep->declBit(c+68,"w29", false,-1);
    tracep->declBus(c+69,"w16", false,-1, 1,0);
    tracep->declBus(c+70,"w17", false,-1, 1,0);
    tracep->declBus(c+71,"w19", false,-1, 1,0);
    tracep->declBus(c+72,"w25", false,-1, 1,0);
    tracep->declBus(c+73,"w22", false,-1, 2,0);
    tracep->declBus(c+74,"w28", false,-1, 2,0);
    tracep->declBus(c+2,"w1", false,-1, 31,0);
    tracep->declBus(c+135,"w2", false,-1, 31,0);
    tracep->declBus(c+136,"w3", false,-1, 31,0);
    tracep->declBus(c+3,"w4", false,-1, 31,0);
    tracep->declBus(c+99,"w5", false,-1, 31,0);
    tracep->declBus(c+100,"w6", false,-1, 31,0);
    tracep->declBus(c+75,"w7", false,-1, 31,0);
    tracep->declBus(c+137,"w8", false,-1, 31,0);
    tracep->declBus(c+76,"w9", false,-1, 31,0);
    tracep->declBus(c+77,"w11", false,-1, 31,0);
    tracep->declBus(c+78,"w12", false,-1, 31,0);
    tracep->declBus(c+79,"w13", false,-1, 31,0);
    tracep->declBus(c+138,"w14", false,-1, 31,0);
    tracep->declBus(c+80,"w15", false,-1, 31,0);
    tracep->declBus(c+4,"IFID_pc", false,-1, 31,0);
    tracep->declBus(c+81,"IFID_inst", false,-1, 31,0);
    tracep->declBus(c+5,"IFID_next_pc", false,-1, 31,0);
    tracep->declBus(c+6,"IDEX_next_pc", false,-1, 31,0);
    tracep->declBus(c+7,"IDEX_rs1", false,-1, 31,0);
    tracep->declBus(c+8,"IDEX_rs2", false,-1, 31,0);
    tracep->declBus(c+9,"IDEX_imm", false,-1, 31,0);
    tracep->declBit(c+82,"IDEX_regWrite", false,-1);
    tracep->declBit(c+83,"IDEX_memRead", false,-1);
    tracep->declBit(c+10,"IDEX_memWrite", false,-1);
    tracep->declBit(c+11,"IDEX_ALUSrc", false,-1);
    tracep->declBus(c+12,"IDEX_ALUOp", false,-1, 2,0);
    tracep->declBus(c+13,"IDEX_funct3", false,-1, 2,0);
    tracep->declBit(c+14,"IDEX_funct7", false,-1);
    tracep->declBus(c+15,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+84,"EXMEM_aluResult", false,-1, 31,0);
    tracep->declBus(c+16,"EXMEM_rs2", false,-1, 31,0);
    tracep->declBus(c+17,"EXMEM_next_pc", false,-1, 31,0);
    tracep->declBit(c+85,"EXMEM_memRead", false,-1);
    tracep->declBit(c+18,"EXMEM_memWrite", false,-1);
    tracep->declBit(c+86,"EXMEM_regWrite", false,-1);
    tracep->declBus(c+19,"MEMWB_memData", false,-1, 31,0);
    tracep->declBus(c+20,"MEMWB_aluResult", false,-1, 31,0);
    tracep->declBus(c+21,"MEMWB_next_pc", false,-1, 31,0);
    tracep->declBit(c+87,"MEMWB_regWrite", false,-1);
    tracep->declBus(c+88,"IDEX_rd", false,-1, 4,0);
    tracep->declBus(c+89,"EXMEM_rd", false,-1, 4,0);
    tracep->declBus(c+90,"MEMWB_rd", false,-1, 4,0);
    tracep->declBus(c+22,"IDEX_rs1_num", false,-1, 4,0);
    tracep->declBus(c+23,"IDEX_rs2_num", false,-1, 4,0);
    tracep->declBus(c+24,"IDEX_memtoReg", false,-1, 1,0);
    tracep->declBus(c+25,"EXMEM_memtoReg", false,-1, 1,0);
    tracep->declBus(c+26,"MEMWB_memtoReg", false,-1, 1,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+15,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+77,"A", false,-1, 31,0);
    tracep->declBus(c+78,"B", false,-1, 31,0);
    tracep->declBus(c+79,"ALUOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+12,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+14,"funct7", false,-1);
    tracep->declBus(c+13,"funct3", false,-1, 2,0);
    tracep->declBus(c+15,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+27,"combined", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+3,"a", false,-1, 31,0);
    tracep->declBus(c+140,"b", false,-1, 31,0);
    tracep->declBus(c+2,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+137,"a", false,-1, 31,0);
    tracep->declBus(c+75,"b", false,-1, 31,0);
    tracep->declBus(c+135,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+99,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+91,"opcode_i", false,-1, 6,0);
    tracep->declBus(c+92,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+98,"flush_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+91,"opcode", false,-1, 6,0);
    tracep->declBit(c+62,"memRead", false,-1);
    tracep->declBus(c+71,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+73,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+63,"memWrite", false,-1);
    tracep->declBit(c+64,"ALUSrc", false,-1);
    tracep->declBit(c+61,"regWrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+18,"memWrite", false,-1);
    tracep->declBit(c+85,"memRead", false,-1);
    tracep->declBus(c+84,"address", false,-1, 31,0);
    tracep->declBus(c+16,"writeData", false,-1, 31,0);
    tracep->declBus(c+138,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_reg ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+82,"regWrite_i", false,-1);
    tracep->declBit(c+83,"memRead_i", false,-1);
    tracep->declBit(c+10,"memWrite_i", false,-1);
    tracep->declBus(c+24,"memtoReg_i", false,-1, 1,0);
    tracep->declBus(c+79,"ALU_result_i", false,-1, 31,0);
    tracep->declBus(c+6,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+76,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+88,"rd_i", false,-1, 4,0);
    tracep->declBit(c+86,"regWrite_o", false,-1);
    tracep->declBit(c+85,"memRead_o", false,-1);
    tracep->declBit(c+18,"memWrite_o", false,-1);
    tracep->declBus(c+25,"memtoReg_o", false,-1, 1,0);
    tracep->declBus(c+84,"ALU_result_o", false,-1, 31,0);
    tracep->declBus(c+17,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+16,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+89,"rd_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ForwardingUnit ");
    tracep->declBit(c+86,"EX_MEM_regWrite_i", false,-1);
    tracep->declBit(c+87,"MEM_WB_regWrite_i", false,-1);
    tracep->declBus(c+89,"EX_MEM_rd_i", false,-1, 4,0);
    tracep->declBus(c+90,"MEM_WB_rd_i", false,-1, 4,0);
    tracep->declBus(c+22,"ID_EX_rs1_num_i", false,-1, 4,0);
    tracep->declBus(c+23,"ID_EX_rs2_num_i", false,-1, 4,0);
    tracep->declBus(c+69,"fwdA_o", false,-1, 1,0);
    tracep->declBus(c+70,"fwdB_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_HazardDetectionUnit ");
    tracep->declBit(c+83,"memRead_i", false,-1);
    tracep->declBit(c+82,"ID_EX_regWrite_i", false,-1);
    tracep->declBit(c+86,"EX_MEM_regWrite_i", false,-1);
    tracep->declBus(c+93,"IF_ID_rs1_i", false,-1, 4,0);
    tracep->declBus(c+94,"IF_ID_rs2_i", false,-1, 4,0);
    tracep->declBus(c+88,"ID_EX_rd_i", false,-1, 4,0);
    tracep->declBus(c+89,"EX_MEM_rd_i", false,-1, 4,0);
    tracep->declBit(c+60,"hazard_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_reg ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+65,"regWrite_i", false,-1);
    tracep->declBit(c+66,"memRead_i", false,-1);
    tracep->declBit(c+67,"memWrite_i", false,-1);
    tracep->declBit(c+68,"ALUSrc_i", false,-1);
    tracep->declBus(c+72,"memtoReg_i", false,-1, 1,0);
    tracep->declBus(c+74,"ALUOp_i", false,-1, 2,0);
    tracep->declBus(c+5,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+75,"imm_i", false,-1, 31,0);
    tracep->declBus(c+99,"rs1_i", false,-1, 31,0);
    tracep->declBus(c+100,"rs2_i", false,-1, 31,0);
    tracep->declBus(c+95,"rd_i", false,-1, 4,0);
    tracep->declBus(c+93,"rs1_num_i", false,-1, 4,0);
    tracep->declBus(c+94,"rs2_num_i", false,-1, 4,0);
    tracep->declBit(c+96,"funct7_i", false,-1);
    tracep->declBus(c+92,"funct3_i", false,-1, 2,0);
    tracep->declBit(c+82,"regWrite_o", false,-1);
    tracep->declBit(c+83,"memRead_o", false,-1);
    tracep->declBit(c+10,"memWrite_o", false,-1);
    tracep->declBit(c+11,"ALUSrc_o", false,-1);
    tracep->declBus(c+24,"memtoReg_o", false,-1, 1,0);
    tracep->declBus(c+12,"ALUOp_o", false,-1, 2,0);
    tracep->declBus(c+6,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+9,"imm_o", false,-1, 31,0);
    tracep->declBus(c+7,"rs1_o", false,-1, 31,0);
    tracep->declBus(c+8,"rs2_o", false,-1, 31,0);
    tracep->declBus(c+88,"rd_o", false,-1, 4,0);
    tracep->declBus(c+22,"rs1_num_o", false,-1, 4,0);
    tracep->declBus(c+23,"rs2_num_o", false,-1, 4,0);
    tracep->declBit(c+14,"funct7_o", false,-1);
    tracep->declBus(c+13,"funct3_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_reg ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+98,"flush", false,-1);
    tracep->declBit(c+60,"hazard", false,-1);
    tracep->declBus(c+1,"inst_i", false,-1, 31,0);
    tracep->declBus(c+3,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+81,"inst_o", false,-1, 31,0);
    tracep->declBus(c+4,"pc_o", false,-1, 31,0);
    tracep->declBus(c+5,"next_pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+81,"inst", false,-1, 31,0);
    tracep->declBus(c+75,"imm", false,-1, 31,0);
    tracep->declBus(c+91,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+3,"readAddr", false,-1, 31,0);
    tracep->declBus(c+1,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_reg ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+86,"regWrite_i", false,-1);
    tracep->declBus(c+25,"memtoReg_i", false,-1, 1,0);
    tracep->declBus(c+138,"MEM_result_i", false,-1, 31,0);
    tracep->declBus(c+17,"next_pc_i", false,-1, 31,0);
    tracep->declBus(c+84,"ALU_result_i", false,-1, 31,0);
    tracep->declBus(c+89,"rd_i", false,-1, 4,0);
    tracep->declBit(c+87,"regWrite_o", false,-1);
    tracep->declBus(c+26,"memtoReg_o", false,-1, 1,0);
    tracep->declBus(c+19,"MEM_result_o", false,-1, 31,0);
    tracep->declBus(c+21,"next_pc_o", false,-1, 31,0);
    tracep->declBus(c+20,"ALU_result_o", false,-1, 31,0);
    tracep->declBus(c+90,"rd_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MuxBranch ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBit(c+97,"sel", false,-1);
    tracep->declBus(c+4,"s0", false,-1, 31,0);
    tracep->declBus(c+99,"s1", false,-1, 31,0);
    tracep->declBus(c+137,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MuxControl ");
    tracep->declBit(c+60,"hazard_i", false,-1);
    tracep->declBit(c+61,"regWrite_i", false,-1);
    tracep->declBit(c+62,"memRead_i", false,-1);
    tracep->declBit(c+63,"memWrite_i", false,-1);
    tracep->declBit(c+64,"ALUSrc_i", false,-1);
    tracep->declBus(c+71,"memtoReg_i", false,-1, 1,0);
    tracep->declBus(c+73,"ALUOp_i", false,-1, 2,0);
    tracep->declBus(c+74,"ALUOp_o", false,-1, 2,0);
    tracep->declBus(c+72,"memtoReg_o", false,-1, 1,0);
    tracep->declBit(c+66,"memRead_o", false,-1);
    tracep->declBit(c+67,"memWrite_o", false,-1);
    tracep->declBit(c+68,"ALUSrc_o", false,-1);
    tracep->declBit(c+65,"regWrite_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALUSrc1 ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBus(c+69,"sel", false,-1, 1,0);
    tracep->declBus(c+7,"s0", false,-1, 31,0);
    tracep->declBus(c+80,"s1", false,-1, 31,0);
    tracep->declBus(c+84,"s2", false,-1, 31,0);
    tracep->declBus(c+77,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALUSrc2 ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBit(c+11,"sel", false,-1);
    tracep->declBus(c+76,"s0", false,-1, 31,0);
    tracep->declBus(c+9,"s1", false,-1, 31,0);
    tracep->declBus(c+78,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALUSubSrc ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBus(c+70,"sel", false,-1, 1,0);
    tracep->declBus(c+8,"s0", false,-1, 31,0);
    tracep->declBus(c+80,"s1", false,-1, 31,0);
    tracep->declBus(c+84,"s2", false,-1, 31,0);
    tracep->declBus(c+76,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBit(c+139,"sel", false,-1);
    tracep->declBus(c+2,"s0", false,-1, 31,0);
    tracep->declBus(c+135,"s1", false,-1, 31,0);
    tracep->declBus(c+136,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBus(c+26,"sel", false,-1, 1,0);
    tracep->declBus(c+20,"s0", false,-1, 31,0);
    tracep->declBus(c+19,"s1", false,-1, 31,0);
    tracep->declBus(c+21,"s2", false,-1, 31,0);
    tracep->declBus(c+80,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+60,"hazard_i", false,-1);
    tracep->declBus(c+136,"pc_i", false,-1, 31,0);
    tracep->declBus(c+3,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+87,"regWrite", false,-1);
    tracep->declBus(c+93,"readReg1", false,-1, 4,0);
    tracep->declBus(c+94,"readReg2", false,-1, 4,0);
    tracep->declBus(c+90,"writeReg", false,-1, 4,0);
    tracep->declBus(c+80,"writeData", false,-1, 31,0);
    tracep->declBus(c+99,"readData1", false,-1, 31,0);
    tracep->declBus(c+100,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+28+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(((0x80U <= vlSelf->PipelineCPU__DOT__w4)
                              ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & vlSelf->PipelineCPU__DOT__w4)] 
                                       << 0x18U) | 
                                      ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__w4))] 
                                        << 0x10U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(2U) 
                                            + vlSelf->PipelineCPU__DOT__w4))] 
                                         << 8U) | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(3U) 
                                                   + vlSelf->PipelineCPU__DOT__w4))]))))),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelf->PipelineCPU__DOT__w4)),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__w4),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__IFID_pc),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__IFID_next_pc),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__IDEX_next_pc),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__IDEX_rs1),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__IDEX_rs2),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__IDEX_imm),32);
    bufp->fullBit(oldp+10,(vlSelf->PipelineCPU__DOT__IDEX_memWrite));
    bufp->fullBit(oldp+11,(vlSelf->PipelineCPU__DOT__IDEX_ALUSrc));
    bufp->fullCData(oldp+12,(vlSelf->PipelineCPU__DOT__IDEX_ALUOp),3);
    bufp->fullCData(oldp+13,(vlSelf->PipelineCPU__DOT__IDEX_funct3),3);
    bufp->fullBit(oldp+14,(vlSelf->PipelineCPU__DOT__IDEX_funct7));
    bufp->fullCData(oldp+15,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__EXMEM_rs2),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__EXMEM_next_pc),32);
    bufp->fullBit(oldp+18,(vlSelf->PipelineCPU__DOT__EXMEM_memWrite));
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__MEMWB_memData),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__MEMWB_aluResult),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__MEMWB_next_pc),32);
    bufp->fullCData(oldp+22,(vlSelf->PipelineCPU__DOT__IDEX_rs1_num),5);
    bufp->fullCData(oldp+23,(vlSelf->PipelineCPU__DOT__IDEX_rs2_num),5);
    bufp->fullCData(oldp+24,(vlSelf->PipelineCPU__DOT__IDEX_memtoReg),2);
    bufp->fullCData(oldp+25,(vlSelf->PipelineCPU__DOT__EXMEM_memtoReg),2);
    bufp->fullCData(oldp+26,(vlSelf->PipelineCPU__DOT__MEMWB_memtoReg),2);
    bufp->fullCData(oldp+27,((((IData)(vlSelf->PipelineCPU__DOT__IDEX_ALUOp) 
                               << 4U) | (((IData)(vlSelf->PipelineCPU__DOT__IDEX_funct7) 
                                          << 3U) | (IData)(vlSelf->PipelineCPU__DOT__IDEX_funct3)))),7);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+37,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullBit(oldp+60,(vlSelf->PipelineCPU__DOT__hazard_o));
    bufp->fullBit(oldp+61,(vlSelf->PipelineCPU__DOT__w18));
    bufp->fullBit(oldp+62,(vlSelf->PipelineCPU__DOT__w20));
    bufp->fullBit(oldp+63,(vlSelf->PipelineCPU__DOT__w21));
    bufp->fullBit(oldp+64,(vlSelf->PipelineCPU__DOT__w23));
    bufp->fullBit(oldp+65,(vlSelf->PipelineCPU__DOT__w24));
    bufp->fullBit(oldp+66,(vlSelf->PipelineCPU__DOT__w26));
    bufp->fullBit(oldp+67,(vlSelf->PipelineCPU__DOT__w27));
    bufp->fullBit(oldp+68,(vlSelf->PipelineCPU__DOT__w29));
    bufp->fullCData(oldp+69,(vlSelf->PipelineCPU__DOT__w16),2);
    bufp->fullCData(oldp+70,(vlSelf->PipelineCPU__DOT__w17),2);
    bufp->fullCData(oldp+71,(vlSelf->PipelineCPU__DOT__w19),2);
    bufp->fullCData(oldp+72,(vlSelf->PipelineCPU__DOT__w25),2);
    bufp->fullCData(oldp+73,(vlSelf->PipelineCPU__DOT__w22),3);
    bufp->fullCData(oldp+74,(vlSelf->PipelineCPU__DOT__w28),3);
    bufp->fullIData(oldp+75,(vlSelf->PipelineCPU__DOT__w7),32);
    bufp->fullIData(oldp+76,(vlSelf->PipelineCPU__DOT__w9),32);
    bufp->fullIData(oldp+77,(vlSelf->PipelineCPU__DOT__w11),32);
    bufp->fullIData(oldp+78,(vlSelf->PipelineCPU__DOT__w12),32);
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__w13),32);
    bufp->fullIData(oldp+80,(vlSelf->PipelineCPU__DOT__w15),32);
    bufp->fullIData(oldp+81,(vlSelf->PipelineCPU__DOT__IFID_inst),32);
    bufp->fullBit(oldp+82,(vlSelf->PipelineCPU__DOT__IDEX_regWrite));
    bufp->fullBit(oldp+83,(vlSelf->PipelineCPU__DOT__IDEX_memRead));
    bufp->fullIData(oldp+84,(vlSelf->PipelineCPU__DOT__EXMEM_aluResult),32);
    bufp->fullBit(oldp+85,(vlSelf->PipelineCPU__DOT__EXMEM_memRead));
    bufp->fullBit(oldp+86,(vlSelf->PipelineCPU__DOT__EXMEM_regWrite));
    bufp->fullBit(oldp+87,(vlSelf->PipelineCPU__DOT__MEMWB_regWrite));
    bufp->fullCData(oldp+88,(vlSelf->PipelineCPU__DOT__IDEX_rd),5);
    bufp->fullCData(oldp+89,(vlSelf->PipelineCPU__DOT__EXMEM_rd),5);
    bufp->fullCData(oldp+90,(vlSelf->PipelineCPU__DOT__MEMWB_rd),5);
    bufp->fullCData(oldp+91,((0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst)),7);
    bufp->fullCData(oldp+92,((7U & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+93,((0x1fU & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+94,((0x1fU & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+95,((0x1fU & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                       >> 7U))),5);
    bufp->fullBit(oldp+96,((1U & (vlSelf->PipelineCPU__DOT__IFID_inst 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+97,((0x67U == (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst))));
    bufp->fullBit(oldp+98,(vlSelf->PipelineCPU__DOT__flush));
    bufp->fullIData(oldp+99,(vlSelf->PipelineCPU__DOT__w5),32);
    bufp->fullIData(oldp+100,(vlSelf->PipelineCPU__DOT__w6),32);
    bufp->fullBit(oldp+101,(vlSelf->clk));
    bufp->fullBit(oldp+102,(vlSelf->start));
    bufp->fullIData(oldp+103,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+135,((((0x67U == (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst))
                                 ? vlSelf->PipelineCPU__DOT__w5
                                 : vlSelf->PipelineCPU__DOT__IFID_pc) 
                               + vlSelf->PipelineCPU__DOT__w7)),32);
    bufp->fullIData(oldp+136,((((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                                & (IData)(vlSelf->PipelineCPU__DOT__flush))
                                ? (((0x67U == (0x7fU 
                                               & vlSelf->PipelineCPU__DOT__IFID_inst))
                                     ? vlSelf->PipelineCPU__DOT__w5
                                     : vlSelf->PipelineCPU__DOT__IFID_pc) 
                                   + vlSelf->PipelineCPU__DOT__w7)
                                : ((IData)(4U) + vlSelf->PipelineCPU__DOT__w4))),32);
    bufp->fullIData(oldp+137,(((0x67U == (0x7fU & vlSelf->PipelineCPU__DOT__IFID_inst))
                                ? vlSelf->PipelineCPU__DOT__w5
                                : vlSelf->PipelineCPU__DOT__IFID_pc)),32);
    bufp->fullIData(oldp+138,(vlSelf->PipelineCPU__DOT__w14),32);
    bufp->fullBit(oldp+139,(((~ (IData)(vlSelf->PipelineCPU__DOT__hazard_o)) 
                             & (IData)(vlSelf->PipelineCPU__DOT__flush))));
    bufp->fullIData(oldp+140,(4U),32);
    bufp->fullIData(oldp+141,(0x20U),32);
}
