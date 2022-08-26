// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim_VexRiscv.h"

VL_ATTR_COLD void Vsim_VexRiscv___initial__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___initial__TOP__sim__VexRiscv__0\n"); );
    // Body
    vlSelf->CsrPlugin_inWfi = 0U;
}

extern const VlUnpacked<VlWide<3>/*71:0*/, 4> Vsim__ConstPool__TABLE_h70ffaf08_0;
extern const VlUnpacked<VlWide<3>/*95:0*/, 4> Vsim__ConstPool__TABLE_h5aae0e3d_0;

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__0(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___settle__TOP__sim__VexRiscv__0\n"); );
    // Init
    CData/*1:0*/ __Vtableidx11;
    CData/*1:0*/ __Vtableidx13;
    CData/*1:0*/ __Vtableidx15;
    CData/*1:0*/ __Vtableidx21;
    CData/*1:0*/ __Vtableidx22;
    CData/*1:0*/ __Vtableidx23;
    // Body
    vlSelf->__PVT__execute_CsrPlugin_illegalInstruction = 0U;
    vlSelf->lastStageIsValid = vlSelf->__PVT__writeBack_arbitration_isValid;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l338 
        = (1U & (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                    >> 7U)));
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = 1U;
    }
    vlSelf->__PVT___zz_when_CsrPlugin_l965 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                                              & (IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE));
    vlSelf->__PVT___zz_when_CsrPlugin_l965_1 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                                                & (IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE));
    vlSelf->__PVT___zz_when_CsrPlugin_l965_2 = ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                                                & (IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE));
    __Vtableidx11 = vlSelf->__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelf->__PVT__memory_SHIFT_CTRL_string[0U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx11][0U];
    vlSelf->__PVT__memory_SHIFT_CTRL_string[1U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx11][1U];
    vlSelf->__PVT__memory_SHIFT_CTRL_string[2U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx11][2U];
    __Vtableidx15 = vlSelf->__PVT__decode_to_execute_SRC1_CTRL;
    vlSelf->__PVT__execute_SRC1_CTRL_string[0U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx15][0U];
    vlSelf->__PVT__execute_SRC1_CTRL_string[1U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx15][1U];
    vlSelf->__PVT__execute_SRC1_CTRL_string[2U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx15][2U];
    __Vtableidx21 = vlSelf->__PVT__decode_to_execute_SRC1_CTRL;
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_h5aae0e3d_0[__Vtableidx21][0U];
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_h5aae0e3d_0[__Vtableidx21][1U];
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_h5aae0e3d_0[__Vtableidx21][2U];
    __Vtableidx23 = vlSelf->__PVT__execute_to_memory_SHIFT_CTRL;
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx23][0U];
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx23][1U];
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx23][2U];
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
        = (((QData)((IData)(vlSelf->__PVT__memory_DivPlugin_accumulator[0U])) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelf->__PVT__memory_DivPlugin_rs1 
                                                    >> 0x1fU))))));
    vlSelf->__PVT___zz_dBus_cmd_ready_4 = ((5U != (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size)) 
                                           | (7U == (IData)(vlSelf->__PVT___zz_dBus_cmd_ready)));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffffff8U 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((4U & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0x1bU)) 
                                          | ((2U & 
                                              (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                               >> 0x1dU)) 
                                             | (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                >> 0x1fU))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xffffffc7U 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x20U & 
                                           (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                            >> 0x15U)) 
                                          | ((0x10U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0x17U)) 
                                             | (8U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 0x19U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffffe3fU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x100U & 
                                           (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                            >> 0xfU)) 
                                          | ((0x80U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0x11U)) 
                                             | (0x40U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 0x13U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffff1ffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x800U & 
                                           (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                            >> 9U)) 
                                          | ((0x400U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 0xbU)) 
                                             | (0x200U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 0xdU)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xffff8fffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x4000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              >> 3U)) 
                                          | ((0x2000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 >> 5U)) 
                                             | (0x1000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 7U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xfffc7fffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x20000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 3U)) 
                                          | ((0x10000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 1U)) 
                                             | (0x8000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   >> 1U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xffe3ffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x100000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 9U)) 
                                          | ((0x80000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 7U)) 
                                             | (0x40000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 5U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xff1fffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x800000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 0xfU)) 
                                          | ((0x400000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0xdU)) 
                                             | (0x200000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0xbU)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xf8ffffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x4000000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 0x15U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0x13U)) 
                                             | (0x1000000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0x11U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0xc7ffffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((0x20000000U 
                                           & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                              << 0x1bU)) 
                                          | ((0x10000000U 
                                              & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                 << 0x19U)) 
                                             | (0x8000000U 
                                                & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                   << 0x17U)))));
    vlSelf->__PVT___zz_decode_RS2_3 = ((0x3fffffffU 
                                        & vlSelf->__PVT___zz_decode_RS2_3) 
                                       | ((vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                           << 0x1fU) 
                                          | (0x40000000U 
                                             & (vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT 
                                                << 0x1dU))));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3264) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x1000U | (0xffffe000U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
            = (0x2000000U | (0xfc0fffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
            = vlSelf->__PVT__CsrPlugin_mtval;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0x7fffffffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mcause_interrupt) 
                  << 0x1fU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 
            = ((0xfffffff0U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | (IData)(vlSelf->__PVT__CsrPlugin_mcause_exceptionCode));
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 
        = (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit 
           & vlSelf->__PVT__externalInterruptArray_regNext);
    vlSelf->__PVT__when_DBusCachedPlugin_l446 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                                 & (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent)));
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate) 
           & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate)));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid 
        = ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit)));
    vlSelf->__PVT__when_CsrPlugin_l1077 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                           & (1U == (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL)));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid 
        = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE));
    vlSelf->lastStagePc = vlSelf->__PVT__memory_to_writeBack_PC;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 0U;
    vlSelf->__PVT__dataCache_1__DOT___zz_loader_waysAllocator 
        = (3U & (- (IData)((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator))));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l850 
        = (1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                    >> 7U)));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1118 
        = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid)));
    vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = 0U;
    if (((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
         | (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))) {
        vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = 1U;
    }
    vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->CsrPlugin_interrupt_code;
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending) 
           & (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
                 | ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                    & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit))))));
    __Vtableidx13 = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelf->__PVT__execute_SHIFT_CTRL_string[0U] = 
        Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx13][0U];
    vlSelf->__PVT__execute_SHIFT_CTRL_string[1U] = 
        Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx13][1U];
    vlSelf->__PVT__execute_SHIFT_CTRL_string[2U] = 
        Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx13][2U];
    __Vtableidx22 = vlSelf->__PVT__decode_to_execute_SHIFT_CTRL;
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[0U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx22][0U];
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[1U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx22][1U];
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string[2U] 
        = Vsim__ConstPool__TABLE_h70ffaf08_0[__Vtableidx22][2U];
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 0U;
    if (vlSelf->__PVT___zz_iBus_rsp_valid) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = 1U;
        if ((7U == (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex))) {
            vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = 1U;
        }
    }
    vlSelf->__PVT__when_HazardSimplePlugin_l45 = ((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
                                                  & (IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    vlSelf->__PVT__CsrPlugin_targetPrivilege = vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege;
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->__PVT__CsrPlugin_trapCause = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code;
        vlSelf->__PVT__CsrPlugin_targetPrivilege = 3U;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
            = vlSelf->__PVT__CsrPlugin_mepc;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 
            = vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit;
    }
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MEIP) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MTIP) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mip_MSIP) 
                  << 3U));
    }
}

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__1(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___settle__TOP__sim__VexRiscv__1\n"); );
    // Body
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 = 0U;
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
           & (IData)(vlSelf->__PVT___zz_dBus_rsp_valid));
    vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_flush_ready = 
        ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone) 
         & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
            >> 7U));
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_done 
        = vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                 << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                            << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    if (vlSelf->CsrPlugin_hadException) {
        vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = 0U;
    }
    vlSelf->lastStageInstruction = vlSelf->__PVT__memory_to_writeBack_INSTRUCTION;
    vlSelf->lastStageRegFileWrite_payload_address = 
        (0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                  >> 7U));
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_payload_address = 0U;
    }
    vlSelf->__PVT__when_HazardSimplePlugin_l45_1 = 
        ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)
            ? vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext
            : vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = 0U;
    vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid 
        = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & ((IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO) 
              & (vlSelf->__PVT__execute_to_memory_BRANCH_CALC 
                 >> 1U)));
    vlSelf->__PVT__when_HazardSimplePlugin_l57_1 = 
        ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    vlSelf->__PVT__BranchPlugin_jumpInterface_valid 
        = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__execute_to_memory_BRANCH_DO));
    vlSelf->__PVT__when_MulDivIterativePlugin_l128 
        = ((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__execute_to_memory_IS_DIV));
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_1 = (((QData)((IData)(
                                                                  ((IData)(vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED) 
                                                                   & (vlSelf->__PVT__decode_to_execute_RS1 
                                                                      >> 0x1fU)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->__PVT__decode_to_execute_RS1)));
    vlSelf->__PVT__execute_CsrPlugin_readInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE));
    vlSelf->__PVT___zz_memory_DivPlugin_div_result 
        = ((0x2000U & vlSelf->__PVT__execute_to_memory_INSTRUCTION)
            ? vlSelf->__PVT__memory_DivPlugin_accumulator[0U]
            : (IData)(vlSelf->__PVT__memory_DivPlugin_rs1));
    vlSelf->__PVT___zz_memory_DivPlugin_rs1 = (((IData)(vlSelf->__PVT__decode_to_execute_IS_DIV) 
                                                & (vlSelf->__PVT__decode_to_execute_RS1 
                                                   >> 0x1fU)) 
                                               & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED));
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction 
        = (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
            & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR)) 
           & (IData)(vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 1U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3264) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_768) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPIE) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MIE) 
                  << 3U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 
            = ((0xffffe7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mstatus_MPP) 
                  << 0xbU));
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_836) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_772) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffff7ffU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MEIE) 
                  << 0xbU));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xffffff7fU & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MTIE) 
                  << 7U));
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 
            = ((0xfffffff7U & vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5) 
               | ((IData)(vlSelf->__PVT__CsrPlugin_mie_MSIE) 
                  << 3U));
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_773) {
        if (vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_833) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_834) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_835) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_3008) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    if (vlSelf->__PVT__execute_CsrPlugin_csr_4032) {
        if (vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE) {
            vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
        }
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__execute_arbitration_isValid)) 
               | (~ (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR))))) {
        vlSelf->__PVT__execute_CsrPlugin_illegalAccess = 0U;
    }
    vlSelf->__PVT__when_HazardSimplePlugin_l45_2 = 
        ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid 
        = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
           & (IData)(vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE));
    vlSelf->__PVT__execute_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
         & (IData)(vlSelf->__PVT__execute_arbitration_isValid))) {
        vlSelf->__PVT__execute_arbitration_haltByOther = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_flush_valid = 
        ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_MEMORY_MANAGMENT));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = 1U;
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = 0U;
    }
    vlSelf->__PVT__when_HazardSimplePlugin_l57_2 = 
        ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    vlSelf->__PVT__when_CsrPlugin_l1157 = ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
                                           & (2U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL)));
    vlSelf->__PVT__execute_MulPlugin_aHigh = ((0x10000U 
                                               & ((((1U 
                                                     == 
                                                     (3U 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0xcU))) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 0xcU)))) 
                                                   << 0x10U) 
                                                  & (vlSelf->__PVT__decode_to_execute_RS1 
                                                     >> 0xfU))) 
                                              | (vlSelf->__PVT__decode_to_execute_RS1 
                                                 >> 0x10U));
    vlSelf->__PVT__execute_MulPlugin_bHigh = (((IData)(
                                                       ((0x1000U 
                                                         == 
                                                         (0x3000U 
                                                          & vlSelf->__PVT__decode_to_execute_INSTRUCTION)) 
                                                        & (vlSelf->__PVT__decode_to_execute_RS2 
                                                           >> 0x1fU))) 
                                               << 0x10U) 
                                              | (vlSelf->__PVT__decode_to_execute_RS2 
                                                 >> 0x10U));
    vlSelf->__PVT___zz_memory_DivPlugin_rs2 = ((vlSelf->__PVT__decode_to_execute_RS2 
                                                >> 0x1fU) 
                                               & (IData)(vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED));
    if ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))) {
        vlSelf->__PVT__execute_BranchPlugin_branch_src2 
            = (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                            >> 0x1fU))) << 0xcU) | 
               (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                >> 0x14U));
    } else {
        vlSelf->__PVT__execute_BranchPlugin_branch_src2 
            = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL))
                ? (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x1fU))) << 0x15U) 
                   | ((0x100000U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                    >> 0xbU)) | ((0xff000U 
                                                  & vlSelf->__PVT__decode_to_execute_INSTRUCTION) 
                                                 | ((0x800U 
                                                     & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                          >> 0x14U))))))
                : (((- (IData)((vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                >> 0x1fU))) << 0xdU) 
                   | ((0x1000U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                  >> 0x13U)) | ((0x800U 
                                                 & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 7U)))))));
        if (vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) {
            vlSelf->__PVT__execute_BranchPlugin_branch_src2 = 4U;
        }
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 0U;
    if ((0U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                      >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 1U;
    } else if ((1U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 3U;
    } else if ((2U == (3U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                             >> 0xcU)))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = 0xfU;
    }
    vlSelf->__PVT___zz_execute_SRC2_5 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                          ? vlSelf->__PVT__decode_to_execute_RS2
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                              ? (((- (IData)(
                                                             (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x14U))
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__decode_to_execute_SRC2_CTRL))
                                                  ? 
                                                 (((- (IData)(
                                                              (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                               >> 0x1fU))) 
                                                   << 0xcU) 
                                                  | ((0xfe0U 
                                                      & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                           >> 7U))))
                                                  : vlSelf->__PVT__decode_to_execute_PC)));
}

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__2(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___settle__TOP__sim__VexRiscv__2\n"); );
    // Body
    vlSelf->__PVT___zz_execute_SRC1 = ((0U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                        ? vlSelf->__PVT__decode_to_execute_RS1
                                        : ((2U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                            ? 4U : 
                                           ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SRC1_CTRL))
                                             ? (0xfffff000U 
                                                & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                                             : (0x1fU 
                                                & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                                   >> 0xfU)))));
    vlSelf->__PVT__when_HazardSimplePlugin_l48_1 = 
        ((0x1fU & (vlSelf->__PVT__execute_to_memory_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0xfU)));
    vlSelf->__PVT__when_HazardSimplePlugin_l51_1 = 
        ((0x1fU & (vlSelf->__PVT__execute_to_memory_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0x14U)));
    vlSelf->__PVT__when_HazardSimplePlugin_l48_2 = 
        ((0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0xfU)));
    vlSelf->__PVT__when_HazardSimplePlugin_l51_2 = 
        ((0x1fU & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                   >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                        >> 0x14U)));
    vlSelf->__PVT___zz_decode_IS_RS2_SIGNED = (((0U 
                                                 == 
                                                 (0x1000U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                << 0x1fU) 
                                               | (((0U 
                                                    == 
                                                    (0x1000U 
                                                     & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                   << 0x1eU) 
                                                  | (((0x2004020U 
                                                       == 
                                                       (0x2004064U 
                                                        & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                      << 0x1dU) 
                                                     | (((0x2000030U 
                                                          == 
                                                          (0x2004074U 
                                                           & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                         << 0x1cU) 
                                                        | (((0x50U 
                                                             == 
                                                             (0x10003050U 
                                                              & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                            << 0x1bU) 
                                                           | (((0x10000050U 
                                                                == 
                                                                (0x10403050U 
                                                                 & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                               << 0x1aU) 
                                                              | ((((0x1050U 
                                                                    == 
                                                                    (0x1050U 
                                                                     & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                   | (0x2050U 
                                                                      == 
                                                                      (0x2050U 
                                                                       & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                  << 0x19U) 
                                                                 | ((((0x48U 
                                                                       == 
                                                                       (0x48U 
                                                                        & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                      | (4U 
                                                                         == 
                                                                         (0x1cU 
                                                                          & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                     << 0x18U) 
                                                                    | (((0x40U 
                                                                         == 
                                                                         (0x58U 
                                                                          & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                        << 0x17U) 
                                                                       | ((((0x5010U 
                                                                             == 
                                                                             (0x7034U 
                                                                              & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                            | (0x5020U 
                                                                               == 
                                                                               (0x2007064U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                           << 0x16U) 
                                                                          | ((((0x40001010U 
                                                                                == 
                                                                                (0x40003054U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                               | ((0x1010U 
                                                                                == 
                                                                                (0x7034U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x1010U 
                                                                                == 
                                                                                (0x2007054U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
                                                                              << 0x15U) 
                                                                             | (((0x24U 
                                                                                == 
                                                                                (0x64U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 0x14U) 
                                                                                | (((0x1000U 
                                                                                == 
                                                                                (0x1000U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 0x13U) 
                                                                                | (((0x2000U 
                                                                                == 
                                                                                (0x3000U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 0x12U) 
                                                                                | ((((0x2000U 
                                                                                == 
                                                                                (0x2010U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x1000U 
                                                                                == 
                                                                                (0x5000U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 0x11U) 
                                                                                | (((0x4008U 
                                                                                == 
                                                                                (0x4048U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 0x10U) 
                                                                                | ((((0x20U 
                                                                                == 
                                                                                (0x34U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x64U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 0xfU) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x40U 
                                                                                == 
                                                                                (0x403040U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
                                                                                << 0xeU) 
                                                                                | (((0x20U 
                                                                                == 
                                                                                (0x20U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 0xdU) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0x40U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x4020U 
                                                                                == 
                                                                                (0x4020U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10U 
                                                                                == 
                                                                                (0x30U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x2000020U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))) 
                                                                                << 0xcU) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2010U 
                                                                                == 
                                                                                (0x2030U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10U 
                                                                                == 
                                                                                (0x1030U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2020U 
                                                                                == 
                                                                                (0x2002060U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x2003020U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))) 
                                                                                << 0xbU) 
                                                                                | ((((0x48U 
                                                                                == 
                                                                                (0x48U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x1010U 
                                                                                == 
                                                                                (0x1010U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2010U 
                                                                                == 
                                                                                (0x2010U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10U 
                                                                                == 
                                                                                (0x50U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((4U 
                                                                                == 
                                                                                (0xcU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x28U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))) 
                                                                                << 0xaU) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x20U 
                                                                                == 
                                                                                (0x70U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 9U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (4U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0U 
                                                                                == 
                                                                                (0x20U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 8U) 
                                                                                | (((0x4010U 
                                                                                == 
                                                                                (0x4014U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 7U) 
                                                                                | (((0x2010U 
                                                                                == 
                                                                                (0x6014U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 6U) 
                                                                                | ((((0U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0U 
                                                                                == 
                                                                                (0x18U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2000U 
                                                                                == 
                                                                                (0x6004U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x1000U 
                                                                                == 
                                                                                (0x5004U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x4000U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))) 
                                                                                << 5U) 
                                                                                | (((0U 
                                                                                == 
                                                                                (0x58U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                << 4U) 
                                                                                | ((((0x40U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x2010U 
                                                                                == 
                                                                                (0x2014U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x40000030U 
                                                                                == 
                                                                                (0x40000034U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))) 
                                                                                << 3U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x14U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 2U) 
                                                                                | ((((4U 
                                                                                == 
                                                                                (0x44U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | (0x4050U 
                                                                                == 
                                                                                (0x4050U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                                                                << 1U) 
                                                                                | (0x1008U 
                                                                                == 
                                                                                (0x5048U 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))))))))))))));
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
        = (0x1ffffffffULL & (vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderShifted 
                             - (QData)((IData)(vlSelf->__PVT__memory_DivPlugin_rs2))));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = 0U;
    if (vlSelf->__PVT__execute_CsrPlugin_csr_4032) {
        vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 
            = vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1;
    }
    vlSelf->__PVT__when_InstructionCache_l239 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                                                 | (0U 
                                                    != (IData)(vlSelf->__PVT___zz_iBusWishbone_ADR)));
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits) 
           | (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr));
    vlSelf->__PVT__when_IBusCachedPlugin_l239 = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                 & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned));
    vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
           & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception) 
              | (((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite)) 
                  & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                 | ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead)) 
                    & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr))))));
}

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__3(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___settle__TOP__sim__VexRiscv__3\n"); );
    // Init
    CData/*1:0*/ __Vtableidx3;
    CData/*1:0*/ __Vtableidx7;
    // Body
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 0U;
    if ((1U & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire) 
               | (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                     >> 7U))))) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = 1U;
    }
    vlSelf->__PVT__CsrPlugin_xtvec_mode = 0U;
    vlSelf->__PVT__CsrPlugin_xtvec_base = 0U;
    if ((3U == (IData)(vlSelf->__PVT__CsrPlugin_targetPrivilege))) {
        vlSelf->__PVT__CsrPlugin_xtvec_mode = vlSelf->__PVT__CsrPlugin_mtvec_mode;
        vlSelf->__PVT__CsrPlugin_xtvec_base = vlSelf->__PVT__CsrPlugin_mtvec_base;
    }
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = 1U;
    }
    vlSelf->CsrPlugin_interruptJump = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
                                       & (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_done));
    vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted 
        = ((0xff000000U & vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data) 
           | ((0xff0000U & vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data) 
              | ((0xff00U & (((2U & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA)
                               ? (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                  >> 0x18U) : (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                               >> 8U)) 
                             << 8U)) | (0xffU & ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                                  ? vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                                   ? 
                                                  (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                                   >> 8U)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA))
                                                    ? 
                                                   (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                                    >> 0x10U)
                                                    : 
                                                   (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data 
                                                    >> 0x18U))))))));
    vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
        = vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT;
    vlSelf->__PVT__memory_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__BranchPlugin_jumpInterface_valid) {
        vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT 
            = vlSelf->__PVT__execute_to_memory_BRANCH_CALC;
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 0U;
    vlSelf->__PVT__memory_arbitration_haltItself = 0U;
    vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA;
    if (vlSelf->__PVT__memory_arbitration_isValid) {
        if ((1U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT___zz_decode_RS2_3;
        } else if (((2U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)) 
                    | (3U == (IData)(vlSelf->__PVT__execute_to_memory_SHIFT_CTRL)))) {
            vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT;
        }
    }
    if (vlSelf->__PVT__when_MulDivIterativePlugin_l128) {
        if ((1U & (~ (IData)(vlSelf->__PVT__memory_DivPlugin_div_done)))) {
            vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = 1U;
            vlSelf->__PVT__memory_arbitration_haltItself = 1U;
        }
        vlSelf->__PVT___zz_decode_RS2_1 = vlSelf->__PVT__memory_DivPlugin_div_result;
    }
    vlSelf->__PVT__execute_arbitration_haltItself = 0U;
    if ((((IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_valid) 
          & (~ (IData)(vlSelf->__PVT__dataCache_1_io_cpu_flush_ready))) 
         | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt))) {
        vlSelf->__PVT__execute_arbitration_haltItself = 1U;
    }
    if (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR))) {
        if (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
             | (IData)(vlSelf->__PVT__memory_arbitration_isValid))) {
            vlSelf->__PVT__execute_arbitration_haltItself = 1U;
        }
    }
    vlSelf->__PVT__CsrPlugin_selfException_payload_code = 0U;
    vlSelf->__PVT__CsrPlugin_selfException_valid = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1157) {
        vlSelf->__PVT__CsrPlugin_selfException_payload_code = 0xbU;
        vlSelf->__PVT__CsrPlugin_selfException_valid = 1U;
    }
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffff8U & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((4U & (vlSelf->__PVT___zz_execute_SRC1 
                     >> 0x1bU)) | ((2U & (vlSelf->__PVT___zz_execute_SRC1 
                                          >> 0x1dU)) 
                                   | (vlSelf->__PVT___zz_execute_SRC1 
                                      >> 0x1fU))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffffffc7U & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20U & (vlSelf->__PVT___zz_execute_SRC1 
                        >> 0x15U)) | ((0x10U & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0x17U)) 
                                      | (8U & (vlSelf->__PVT___zz_execute_SRC1 
                                               >> 0x19U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffffe3fU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x100U & (vlSelf->__PVT___zz_execute_SRC1 
                         >> 0xfU)) | ((0x80U & (vlSelf->__PVT___zz_execute_SRC1 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelf->__PVT___zz_execute_SRC1 
                                                  >> 0x13U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffff1ffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x800U & (vlSelf->__PVT___zz_execute_SRC1 
                         >> 9U)) | ((0x400U & (vlSelf->__PVT___zz_execute_SRC1 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelf->__PVT___zz_execute_SRC1 
                                                 >> 0xdU)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffff8fffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x4000U & (vlSelf->__PVT___zz_execute_SRC1 
                          >> 3U)) | ((0x2000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                   >> 7U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xfffc7fffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20000U & (vlSelf->__PVT___zz_execute_SRC1 
                           << 3U)) | ((0x10000U & (vlSelf->__PVT___zz_execute_SRC1 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelf->__PVT___zz_execute_SRC1 
                                          >> 1U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xffe3ffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x100000U & (vlSelf->__PVT___zz_execute_SRC1 
                            << 9U)) | ((0x80000U & 
                                        (vlSelf->__PVT___zz_execute_SRC1 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelf->__PVT___zz_execute_SRC1 
                                         << 5U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xff1fffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x800000U & (vlSelf->__PVT___zz_execute_SRC1 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelf->__PVT___zz_execute_SRC1 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelf->__PVT___zz_execute_SRC1 
                                               << 0xbU)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xf8ffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x4000000U & (vlSelf->__PVT___zz_execute_SRC1 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelf->__PVT___zz_execute_SRC1 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelf->__PVT___zz_execute_SRC1 
                                                 << 0x11U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0xc7ffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((0x20000000U & (vlSelf->__PVT___zz_execute_SRC1 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelf->__PVT___zz_execute_SRC1 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelf->__PVT___zz_execute_SRC1 
                                                  << 0x17U)))));
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed 
        = ((0x3fffffffU & vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed) 
           | ((vlSelf->__PVT___zz_execute_SRC1 << 0x1fU) 
              | (0x40000000U & (vlSelf->__PVT___zz_execute_SRC1 
                                << 0x1dU))));
    vlSelf->__PVT__execute_BranchPlugin_eq = (vlSelf->__PVT___zz_execute_SRC1 
                                              == vlSelf->__PVT___zz_execute_SRC2_5);
    vlSelf->__PVT__execute_SrcPlugin_addSub = ((vlSelf->__PVT___zz_execute_SRC1 
                                                + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                    ? 
                                                   (~ vlSelf->__PVT___zz_execute_SRC2_5)
                                                    : vlSelf->__PVT___zz_execute_SRC2_5)) 
                                               + ((IData)(vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS)
                                                   ? 1U
                                                   : 0U));
    if (vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO) {
        vlSelf->__PVT__execute_SrcPlugin_addSub = vlSelf->__PVT___zz_execute_SRC1;
    }
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = (1U 
                                                 & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                                    >> 0xaU));
    if ((0U == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                         >> 7U)))) {
        vlSelf->__PVT__decode_REGFILE_WRITE_VALID = 0U;
    }
    __Vtableidx3 = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                          >> 0x15U));
    vlSelf->__PVT__decode_SHIFT_CTRL_string[0U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx3][0U];
    vlSelf->__PVT__decode_SHIFT_CTRL_string[1U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx3][1U];
    vlSelf->__PVT__decode_SHIFT_CTRL_string[2U] = Vsim__ConstPool__TABLE_h70ffaf08_0
        [__Vtableidx3][2U];
    __Vtableidx7 = (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                          >> 1U));
    vlSelf->__PVT__decode_SRC1_CTRL_string[0U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx7][0U];
    vlSelf->__PVT__decode_SRC1_CTRL_string[1U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx7][1U];
    vlSelf->__PVT__decode_SRC1_CTRL_string[2U] = Vsim__ConstPool__TABLE_h5aae0e3d_0
        [__Vtableidx7][2U];
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload 
        = (vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload 
           + ((2U == (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                            >> 0x17U))) ? (((- (IData)(
                                                       (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 0x1fU))) 
                                            << 0x15U) 
                                           | ((0x100000U 
                                               & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                 | ((0x800U 
                                                     & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                          >> 0x14U))))))
               : (((- (IData)((vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                               >> 0x1fU))) << 0xdU) 
                  | ((0x1000U & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                 >> 0x13U)) | ((0x800U 
                                                & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                        >> 7U))))))));
}

extern const VlUnpacked<CData/*0:0*/, 128> Vsim__ConstPool__TABLE_h5df815ea_0;

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__4(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___settle__TOP__sim__VexRiscv__4\n"); );
    // Init
    CData/*6:0*/ __Vtableidx24;
    CData/*6:0*/ __Vtableidx25;
    VlWide<3>/*95:0*/ __Vtemp_h75ebc642__0;
    VlWide<3>/*95:0*/ __Vtemp_h7745e5b2__0;
    VlWide<3>/*95:0*/ __Vtemp_h604d3819__0;
    VlWide<3>/*95:0*/ __Vtemp_ha4e02b11__0;
    // Body
    __Vtableidx24 = ((0x40U & ((~ (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 5U)) << 6U)) 
                     | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l48_2) 
                         << 5U) | ((0x10U & ((~ (IData)(vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                             << 4U)) 
                                   | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l57_2) 
                                       << 3U) | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l48_1) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__PVT__when_HazardSimplePlugin_l57_1)))))));
    vlSelf->__PVT__HazardSimplePlugin_src0Hazard = 
        Vsim__ConstPool__TABLE_h5df815ea_0[__Vtableidx24];
    __Vtableidx25 = ((0x40U & ((~ (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0xfU)) << 6U)) 
                     | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l51_2) 
                         << 5U) | ((0x10U & ((~ (IData)(vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)) 
                                             << 4U)) 
                                   | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l57_2) 
                                       << 3U) | (((IData)(vlSelf->__PVT__when_HazardSimplePlugin_l51_1) 
                                                  << 2U) 
                                                 | ((2U 
                                                     & ((~ (IData)(vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)) 
                                                        << 1U)) 
                                                    | (IData)(vlSelf->__PVT__when_HazardSimplePlugin_l57_1)))))));
    vlSelf->__PVT__HazardSimplePlugin_src1Hazard = 
        Vsim__ConstPool__TABLE_h5df815ea_0[__Vtableidx25];
    vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch 
        = ((2U == (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                         >> 0x17U))) | (IData)(((0x800000U 
                                                 == 
                                                 (0x1800000U 
                                                  & vlSelf->__PVT___zz_decode_IS_RS2_SIGNED)) 
                                                & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                   >> 0x1fU))));
    if ((1U & ((2U == (3U & (vlSelf->__PVT___zz_decode_IS_RS2_SIGNED 
                             >> 0x17U))) ? (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x15U)
                : (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                   >> 8U)))) {
        vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = 0U;
    }
    vlSelf->__PVT___zz_memory_DivPlugin_div_stage_0_outNumerator 
        = (((QData)((IData)(vlSelf->__PVT__memory_DivPlugin_rs1)) 
            << 1U) | (QData)((IData)((1U & (~ (IData)(
                                                      (vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                       >> 0x20U)))))));
    vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit 
        = ((((vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 
              | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3) 
             | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 
                | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5)) 
            | ((vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 
                | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7) 
               | (vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 
                  | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9))) 
           | vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10);
    vlSelf->__PVT__iBusWishbone_STB = 0U;
    vlSelf->__PVT__iBusWishbone_CYC = 0U;
    if (vlSelf->__PVT__when_InstructionCache_l239) {
        vlSelf->__PVT__iBusWishbone_STB = 1U;
        vlSelf->__PVT__iBusWishbone_CYC = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress;
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_request_size;
    vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 0U;
    vlSelf->__PVT__dataCache_1_io_cpu_redo = 0U;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address 
                    = (0xffffffe0U & vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address);
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size = 5U;
            }
            if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004) {
                vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = 1U;
                if (((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                     & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions) 
                        & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits)))) {
                    vlSelf->__PVT__dataCache_1_io_cpu_redo = 1U;
                }
            }
        }
    }
    if (((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling))) {
        vlSelf->__PVT__dataCache_1_io_cpu_redo = 1U;
    }
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid) 
         & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext)))) {
        vlSelf->__PVT__dataCache_1_io_cpu_redo = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr 
        = vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr = 0U;
            }
        }
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l239) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging));
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError 
        = ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)) 
           & (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits) 
               & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error)) 
              | ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault) 
                 & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging)))));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext 
        = (7U & ((IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value) 
                 + (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement)));
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow 
        = ((7U == (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value)) 
           & (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement));
    vlSelf->__PVT__when_CsrPlugin_l1032 = ((IData)(vlSelf->CsrPlugin_hadException) 
                                           | (IData)(vlSelf->CsrPlugin_interruptJump));
    vlSelf->__PVT___zz_decode_RS2_2 = vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA;
    if (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE))) {
        vlSelf->__PVT___zz_decode_RS2_2 = ((0U == (3U 
                                                   & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                      >> 0xcU)))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & ((vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted 
                                                                >> 7U) 
                                                               & (~ 
                                                                  (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                                   >> 0xeU)))))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                    >> 0xcU)))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & ((vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted 
                                                                    >> 0xfU) 
                                                                   & (~ 
                                                                      (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                                       >> 0xeU)))))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted))
                                                : vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted));
    }
    if (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__memory_to_writeBack_IS_MUL))) {
        __Vtemp_h75ebc642__0[0U] = (IData)(vlSelf->__PVT__memory_to_writeBack_MUL_LOW);
        __Vtemp_h75ebc642__0[1U] = (((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                                            >> 0x33U))))) 
                                     << 0x14U) | (IData)(
                                                         (vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                                          >> 0x20U)));
        __Vtemp_h75ebc642__0[2U] = (3U & ((- (IData)(
                                                     (1U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__memory_to_writeBack_MUL_LOW 
                                                                 >> 0x33U))))) 
                                          >> 0xcU));
        VL_EXTEND_WQ(66,34, __Vtemp_h7745e5b2__0, vlSelf->__PVT__memory_to_writeBack_MUL_HH);
        VL_SHIFTL_WWI(66,66,32, __Vtemp_h604d3819__0, __Vtemp_h7745e5b2__0, 0x20U);
        VL_ADD_W(3, __Vtemp_ha4e02b11__0, __Vtemp_h75ebc642__0, __Vtemp_h604d3819__0);
        vlSelf->__PVT___zz_decode_RS2_2 = ((0U == (3U 
                                                   & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                                                      >> 0xcU)))
                                            ? (IData)(vlSelf->__PVT__memory_to_writeBack_MUL_LOW)
                                            : __Vtemp_ha4e02b11__0[1U]);
    }
    vlSelf->__PVT__execute_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__execute_FullBarrelShifterPlugin_reversed 
        = ((1U == (IData)(vlSelf->__PVT__decode_to_execute_SHIFT_CTRL))
            ? vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed
            : vlSelf->__PVT___zz_execute_SRC1);
    vlSelf->__PVT__dataCache_1__DOT__stage0_mask = 
        (0xfU & ((IData)(vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask) 
                 << (3U & vlSelf->__PVT__execute_SrcPlugin_addSub)));
    vlSelf->__PVT__execute_SrcPlugin_less = (1U & (
                                                   ((vlSelf->__PVT___zz_execute_SRC1 
                                                     >> 0x1fU) 
                                                    == 
                                                    (vlSelf->__PVT___zz_execute_SRC2_5 
                                                     >> 0x1fU))
                                                    ? 
                                                   (vlSelf->__PVT__execute_SrcPlugin_addSub 
                                                    >> 0x1fU)
                                                    : 
                                                   ((IData)(vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED)
                                                     ? 
                                                    (vlSelf->__PVT___zz_execute_SRC2_5 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelf->__PVT___zz_execute_SRC1 
                                                     >> 0x1fU))));
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal 
        = ((0x2000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
            ? ((0x1000U & vlSelf->__PVT__decode_to_execute_INSTRUCTION)
                ? (vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit 
                   & (~ vlSelf->__PVT___zz_execute_SRC1))
                : (vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit 
                   | vlSelf->__PVT___zz_execute_SRC1))
            : vlSelf->__PVT___zz_execute_SRC1);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_mask;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = (0x3ffU & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                         >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits;
    } else {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = 0xfU;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address 
            = ((0x3f8U & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                          >> 2U)) | (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_counter_value));
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data 
            = vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext;
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = 0U;
    if (vlSelf->__PVT__when_DBusCachedPlugin_l446) {
        if (vlSelf->__PVT__dataCache_1_io_cpu_redo) {
            vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = 1U;
        }
    }
}

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__5(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___settle__TOP__sim__VexRiscv__5\n"); );
    // Body
    vlSelf->__PVT__when_IBusCachedPlugin_l244 = (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                  & (((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                                                      & (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                                     & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                                        | (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))) 
                                                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1)));
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code = 0U;
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
    if (vlSelf->__PVT__when_DBusCachedPlugin_l446) {
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 7U : 5U);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 0xfU : 0xdU);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code 
                = ((IData)(vlSelf->__PVT__memory_to_writeBack_MEMORY_WR)
                    ? 6U : 4U);
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 1U;
        }
        if (vlSelf->__PVT__dataCache_1_io_cpu_redo) {
            vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = 0U;
        }
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066 
        = ((((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling) 
             | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError)) 
            | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException)) 
           | (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = 0U;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = 1U;
    }
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload = 0U;
    vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 0U;
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
            = (vlSelf->__PVT__CsrPlugin_xtvec_base 
               << 2U);
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
    }
    vlSelf->lastStageRegFileWrite_payload_data = vlSelf->__PVT___zz_decode_RS2_2;
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_payload_data = 0U;
    }
    vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1 
        = ((0U != (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
           & ((2U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
              | ((3U == (IData)(vlSelf->__PVT__decode_to_execute_BRANCH_CTRL)) 
                 | ((0U == (7U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                  >> 0xcU))) ? (IData)(vlSelf->__PVT__execute_BranchPlugin_eq)
                     : ((1U == (7U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                      >> 0xcU))) ? 
                        (~ (IData)(vlSelf->__PVT__execute_BranchPlugin_eq))
                         : ((5U == (5U & (vlSelf->__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))
                             ? (~ (IData)(vlSelf->__PVT__execute_SrcPlugin_less))
                             : (IData)(vlSelf->__PVT__execute_SrcPlugin_less)))))));
    vlSelf->__PVT___zz_decode_RS2 = ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                                      ? ((2U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                          ? (vlSelf->__PVT___zz_execute_SRC1 
                                             & vlSelf->__PVT___zz_execute_SRC2_5)
                                          : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                              ? (vlSelf->__PVT___zz_execute_SRC1 
                                                 | vlSelf->__PVT___zz_execute_SRC2_5)
                                              : (vlSelf->__PVT___zz_execute_SRC1 
                                                 ^ vlSelf->__PVT___zz_execute_SRC2_5)))
                                      : ((1U == (IData)(vlSelf->__PVT__decode_to_execute_ALU_CTRL))
                                          ? (IData)(vlSelf->__PVT__execute_SrcPlugin_less)
                                          : vlSelf->__PVT__execute_SrcPlugin_addSub));
    if (((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
         & (IData)(vlSelf->__PVT__decode_to_execute_IS_CSR))) {
        vlSelf->__PVT___zz_decode_RS2 = vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit;
    }
    vlSelf->__PVT__writeBack_arbitration_flushIt = 0U;
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l244) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 = 1U;
    }
    vlSelf->__PVT__writeBack_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushIt = 1U;
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1077) {
        if ((3U == (3U & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                          >> 0x1cU)))) {
            vlSelf->__PVT__CsrPlugin_jumpInterface_payload 
                = vlSelf->__PVT__CsrPlugin_mepc;
        }
        vlSelf->__PVT__CsrPlugin_jumpInterface_valid = 1U;
        vlSelf->__PVT__writeBack_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter) 
                  >> 7U)))) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error 
            = vlSelf->__PVT__dataCache_1__DOT__loader_error;
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address 
            = (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
               >> 0xcU);
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address 
            = (0x7fU & (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress 
                        >> 5U));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid 
            = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_killReg)));
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way 
            = vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow) {
        vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache) {
        if (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr) 
             & (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits))) {
            vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
        }
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 0U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090) {
        vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = 1U;
    }
    vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = 0U;
    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 0U;
    if (vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) {
        if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004)))) {
                if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid)))) {
                    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 1U;
                }
            }
        }
        vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 1U;
        if (vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_valid 
                = (1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__memCmdSent)));
            if ((1U & ((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)
                        ? (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid))
                        : (IData)(vlSelf->__PVT___zz_dBus_rsp_valid)))) {
                vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
            }
        } else if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004) {
            if (vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr) {
                vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = 1U;
            }
            if ((1U & ((~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr)) 
                       | (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid))))) {
                vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
            }
        } else if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__memCmdSent)))) {
            vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = 1U;
        }
    } else {
        vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 1U;
    }
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = 0U;
        vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = 0U;
        vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = 0U;
    }
    vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_RegFilePlugin_regFile_port1;
    if (vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0x14U)))) {
            vlSelf->__PVT__decode_RS2 = vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0x14U)))) {
            vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l51_1) {
                vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l51_2) {
                vlSelf->__PVT__decode_RS2 = vlSelf->__PVT___zz_decode_RS2;
            }
        }
    }
    vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_RegFilePlugin_regFile_port0;
    if (vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid) {
        if (((IData)(vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
             == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                          >> 0xfU)))) {
            vlSelf->__PVT__decode_RS1 = vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data;
        }
    }
}

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__6(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___settle__TOP__sim__VexRiscv__6\n"); );
    // Body
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45) {
        if (((0x1fU & (vlSelf->__PVT__memory_to_writeBack_INSTRUCTION 
                       >> 7U)) == (0x1fU & (vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                            >> 0xfU)))) {
            vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2_2;
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_1) {
        if (vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l48_1) {
                vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2_1;
            }
        }
    }
    if (vlSelf->__PVT__when_HazardSimplePlugin_l45_2) {
        if (vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE) {
            if (vlSelf->__PVT__when_HazardSimplePlugin_l48_2) {
                vlSelf->__PVT__decode_RS1 = vlSelf->__PVT___zz_decode_RS2;
            }
        }
    }
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack 
        = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack;
    if (vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 1U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 0U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 1U;
    } else {
        vlSelf->__PVT__writeBack_arbitration_removeIt = 0U;
    }
    if (vlSelf->__PVT__writeBack_arbitration_flushIt) {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = 0U;
        vlSelf->__PVT__writeBack_arbitration_removeIt = 1U;
    }
    vlSelf->__PVT__when_IBusCachedPlugin_l250 = (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                  & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid))) 
                                                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2)));
    vlSelf->__PVT__memory_arbitration_isFlushed = ((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                                                   | (0U 
                                                      != 
                                                      ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                                                       << 1U)));
    vlSelf->__PVT__execute_arbitration_isFlushed = 
        ((0U != (((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                  << 1U) | (IData)(vlSelf->__PVT__memory_arbitration_flushNext))) 
         | (0U != ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                   << 2U)));
    vlSelf->__PVT__decode_arbitration_isFlushed = (
                                                   (0U 
                                                    != 
                                                    (((IData)(vlSelf->__PVT__writeBack_arbitration_flushNext) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->__PVT__memory_arbitration_flushNext) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->__PVT__execute_arbitration_flushNext)))) 
                                                   | (0U 
                                                      != 
                                                      ((IData)(vlSelf->__PVT__writeBack_arbitration_flushIt) 
                                                       << 3U)));
    vlSelf->__PVT__dataCache_1__DOT___zz_2 = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_2 = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_1 = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid) 
         & (IData)(vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way))) {
        vlSelf->__PVT__dataCache_1__DOT___zz_1 = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid) 
         | (IData)(vlSelf->__PVT__dataCache_1__DOT__loader_valid))) {
        vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = 1U;
    }
    vlSelf->__PVT__writeBack_arbitration_haltItself = 0U;
    if (((IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid) 
         & (IData)(vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt))) {
        vlSelf->__PVT__writeBack_arbitration_haltItself = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l239) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2;
    vlSelf->__PVT__memory_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory;
    }
    if (vlSelf->__PVT__memory_arbitration_isFlushed) {
        vlSelf->__PVT__memory_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = 0U;
    }
    vlSelf->__PVT__execute_arbitration_removeIt = 0U;
    if (vlSelf->__PVT__CsrPlugin_selfException_valid) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute;
    }
    if (vlSelf->__PVT__execute_arbitration_isFlushed) {
        vlSelf->__PVT__execute_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = 0U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l824 
        = (1U & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
                 & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze))));
    vlSelf->__PVT__writeBack_arbitration_isFiring = 
        (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
          & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself))) 
         & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_removeIt)));
    vlSelf->__PVT__memory_arbitration_isStuck = ((IData)(vlSelf->__PVT__memory_arbitration_haltItself) 
                                                 | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself));
    if (vlSelf->__PVT__when_IBusCachedPlugin_l250) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)));
    if (vlSelf->__PVT__when_IBusCachedPlugin_l250) {
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 = 1U;
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid = 1U;
    }
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch = 1U;
    }
    vlSelf->__PVT__when_IBusCachedPlugin_l256 = (((IData)(vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid) 
                                                  & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                                     | ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                                        & ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                                           | (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute)))))) 
                                                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3)));
    vlSelf->lastStageIsFiring = vlSelf->__PVT__writeBack_arbitration_isFiring;
    vlSelf->lastStageRegFileWrite_valid = ((IData)(vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                                           & (IData)(vlSelf->__PVT__writeBack_arbitration_isFiring));
    if (vlSelf->__PVT___zz_7) {
        vlSelf->lastStageRegFileWrite_valid = 1U;
    }
    vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)))) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l664 
        = ((IData)(vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid) 
           & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)));
    vlSelf->__PVT__execute_arbitration_isStuck = ((IData)(vlSelf->__PVT__execute_arbitration_haltItself) 
                                                  | ((IData)(vlSelf->__PVT__execute_arbitration_haltByOther) 
                                                     | ((IData)(vlSelf->__PVT__memory_arbitration_isStuck) 
                                                        | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself))));
    vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0U;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l244) {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 0xcU;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError;
    } else {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4 
        = vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3;
    if (vlSelf->__PVT__when_IBusCachedPlugin_l256) {
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = 1U;
        vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid 
            = vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError;
        vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4 = 1U;
    }
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSelf->lastStageRegFileWrite_valid) {
        vlSelf->__PVT___zz_1 = 1U;
    }
    vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext 
        = (((0x21U == (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value)) 
            & (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement))
            ? 0U : (0x3fU & ((IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_value) 
                             + (IData)(vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement))));
    if (vlSelf->__PVT__memory_DivPlugin_div_counter_willClear) {
        vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext = 0U;
    }
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = 0U;
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload = 0U;
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = 0U;
    if (vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l664) {
        vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = 1U;
        vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload 
            = (0x7fU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                        >> 5U));
        vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload 
            = (0x3ffU & (vlSelf->__PVT__execute_SrcPlugin_addSub 
                         >> 2U));
        vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = 1U;
    }
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = 
        ((IData)(vlSelf->__PVT__execute_CsrPlugin_writeInstruction) 
         & (~ (IData)(vlSelf->__PVT__execute_arbitration_isStuck)));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = 1U;
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem 
        = ((IData)(vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid) 
           & (~ (IData)(vlSelf->__PVT__memory_arbitration_isStuck)));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid 
        = ((IData)(vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid) 
           & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt)));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_flush 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
           & vlSelf->__PVT___zz_decode_IS_RS2_SIGNED);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active 
        = ((IData)(vlSelf->__PVT__CsrPlugin_interrupt_valid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
    vlSelf->__PVT__decodeExceptionPort_valid = ((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                                                & (~ 
                                                   ((0x17U 
                                                     == 
                                                     (0x5fU 
                                                      & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                    | ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                       | ((3U 
                                                           == 
                                                           (0x106fU 
                                                            & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                          | ((0x1073U 
                                                              == 
                                                              (0x107fU 
                                                               & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                             | ((0x2073U 
                                                                 == 
                                                                 (0x207fU 
                                                                  & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                | ((0x4063U 
                                                                    == 
                                                                    (0x407fU 
                                                                     & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                   | ((0x2013U 
                                                                       == 
                                                                       (0x207fU 
                                                                        & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                      | ((0x23U 
                                                                          == 
                                                                          (0x603fU 
                                                                           & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                         | ((3U 
                                                                             == 
                                                                             (0x207fU 
                                                                              & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                            | ((3U 
                                                                                == 
                                                                                (0x505fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                               | ((0x63U 
                                                                                == 
                                                                                (0x707bU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x607fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xfc00007fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x500fU 
                                                                                == 
                                                                                (0x1f0707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x5013U 
                                                                                == 
                                                                                (0xbc00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x1013U 
                                                                                == 
                                                                                (0xfc00307fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))));
}

VL_ATTR_COLD void Vsim_VexRiscv___settle__TOP__sim__VexRiscv__7(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___settle__TOP__sim__VexRiscv__7\n"); );
    // Init
    CData/*3:0*/ __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload;
    CData/*3:0*/ __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1;
    CData/*1:0*/ __PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code;
    // Body
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt 
        = ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid) 
           | (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending));
    if ((1U & (~ ((IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter) 
                  >> 7U)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342)))) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_flush) {
        vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = 1U;
    }
    vlSelf->__PVT__decode_arbitration_haltByOther = 0U;
    if (((IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
         & ((IData)(vlSelf->__PVT__HazardSimplePlugin_src0Hazard) 
            | (IData)(vlSelf->__PVT__HazardSimplePlugin_src1Hazard)))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if (vlSelf->__PVT__CsrPlugin_pipelineLiberator_active) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    if ((((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
          & (1U == (IData)(vlSelf->__PVT__memory_to_writeBack_ENV_CTRL))) 
         | (((IData)(vlSelf->__PVT__memory_arbitration_isValid) 
             & (1U == (IData)(vlSelf->__PVT__execute_to_memory_ENV_CTRL))) 
            | ((IData)(vlSelf->__PVT__execute_arbitration_isValid) 
               & (1U == (IData)(vlSelf->__PVT__decode_to_execute_ENV_CTRL)))))) {
        vlSelf->__PVT__decode_arbitration_haltByOther = 1U;
    }
    __PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code 
        = (((IData)(vlSelf->__PVT__decodeExceptionPort_valid) 
            << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    vlSelf->__PVT___zz_when = (0U != (((IData)(vlSelf->__PVT__decodeExceptionPort_valid) 
                                       << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid)));
    vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
        = ((IData)(4U) + vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload);
    vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid 
        = (0U != (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                   << 3U) | (((IData)(vlSelf->__PVT__BranchPlugin_jumpInterface_valid) 
                              << 2U) | (((IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid) 
                                         << 1U) | (IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid)))));
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload 
        = (((IData)(vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid) 
            << 3U) | (((IData)(vlSelf->__PVT__BranchPlugin_jumpInterface_valid) 
                       << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_jumpInterface_valid) 
                                  << 1U) | (IData)(vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid))));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt) {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = 1U;
    }
    vlSelf->__PVT__decode_arbitration_isStuckByOthers 
        = ((IData)(vlSelf->__PVT__decode_arbitration_haltByOther) 
           | (((IData)(vlSelf->__PVT__execute_arbitration_isStuck) 
               | (IData)(vlSelf->__PVT__memory_arbitration_isStuck)) 
              | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)));
    vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 
        = ((IData)(__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
           & (~ ((IData)(__PVT___zz_CsrPlugin_exceptionPortCtrl_exceptionContext_code) 
                 - (IData)(1U))));
    vlSelf->__PVT__decode_arbitration_flushNext = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid) {
        vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT 
            = vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload;
        vlSelf->__PVT__decode_arbitration_flushNext = 1U;
    }
    vlSelf->__PVT__decode_arbitration_removeIt = 0U;
    if (vlSelf->__PVT___zz_when) {
        vlSelf->__PVT__decode_arbitration_flushNext = 1U;
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 1U;
    } else {
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode 
            = vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode;
    }
    if (vlSelf->__PVT__decode_arbitration_isFlushed) {
        vlSelf->__PVT__decode_arbitration_removeIt = 1U;
        vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 0U;
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
    }
    __PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1 
        = ((IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
           & (~ ((IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload) 
                 - (IData)(1U))));
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = 
        ((IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)
          ? vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen
          : vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)) 
                 & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt))));
    vlSelf->__PVT__when_CsrPlugin_l998 = (1U & ((~ (IData)(vlSelf->__PVT__CsrPlugin_pipelineLiberator_active)) 
                                                | (IData)(vlSelf->__PVT__decode_arbitration_removeIt)));
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush = 
        (((IData)(vlSelf->__PVT__decode_arbitration_removeIt) 
          | ((IData)(vlSelf->__PVT__decode_arbitration_flushNext) 
             & (~ (IData)(vlSelf->__PVT__decode_arbitration_isStuckByOthers)))) 
         | (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
    vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 0U;
    if ((0U != (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                 << 3U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                            << 2U) | (((IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                       << 1U) | (IData)(vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1032) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    if (vlSelf->__PVT__when_CsrPlugin_l1077) {
        vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = 1U;
    }
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 
        = (((IData)((0U != (0xcU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))) 
            << 1U) | (IData)((0U != (0xaU & (IData)(__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_1)))));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 0U;
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = 1U;
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready 
            = (1U & (~ (IData)(vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)));
    } else {
        vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready = 0U;
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_valid 
        = ((~ (IData)(vlSelf->__PVT__IBusCachedPlugin_fetcherHalt)) 
           & (IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = (vlSelf->IBusCachedPlugin_fetchPc_pcReg 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc) 
                                                   << 2U));
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
            = vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload;
    }
    if (vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid) {
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = 1U;
        vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
            = ((0U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                ? vlSelf->__PVT__memory_to_writeBack_PC
                : ((1U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                    ? vlSelf->__PVT__CsrPlugin_jumpInterface_payload
                    : ((2U == (IData)(vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                        ? vlSelf->__PVT__execute_to_memory_BRANCH_CALC
                        : vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload)));
    }
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = (0xfffffffcU 
                                                  & vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc);
}

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_0(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset_0\n"); );
    // Body
    vlSelf->__PVT__externalResetVector = VL_RAND_RESET_I(32);
    vlSelf->__PVT__timerInterrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__softwareInterrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__externalInterruptArray = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iBusWishbone_CYC = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_STB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_ACK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_WE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_ADR = VL_RAND_RESET_I(30);
    vlSelf->__PVT__iBusWishbone_DAT_MISO = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iBusWishbone_DAT_MOSI = VL_RAND_RESET_I(32);
    vlSelf->__PVT__iBusWishbone_SEL = VL_RAND_RESET_I(4);
    vlSelf->__PVT__iBusWishbone_ERR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_CTI = VL_RAND_RESET_I(3);
    vlSelf->__PVT__iBusWishbone_BTE = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dBusWishbone_CYC = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_STB = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_ACK = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_WE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_ADR = VL_RAND_RESET_I(30);
    vlSelf->__PVT__dBusWishbone_DAT_MISO = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dBusWishbone_DAT_MOSI = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dBusWishbone_SEL = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dBusWishbone_ERR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_CTI = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dBusWishbone_BTE = VL_RAND_RESET_I(2);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fetch_isRemoved = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_execute_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_SW = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_SR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_SO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_SI = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_PW = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_PR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_PO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_PI = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_fence_FM = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1_io_cpu_flush_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_RegFilePlugin_regFile_port1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_execute_haltIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_haltIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_mmuException = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_accessError = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_writeBack_exclusiveOk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_flush_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_cpu_redo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_payload_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz___05Fzz_CsrPlugin_exceptionPortCtrl_exceptionContext_code_1 = VL_RAND_RESET_I(2);
    vlSelf->__PVT___zz_when = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_memory_DivPlugin_div_stage_0_outNumerator = VL_RAND_RESET_Q(33);
    vlSelf->__PVT___zz_decode_RS2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_RS2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_RS1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_decode_RS2_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_INSTRUCTION_ANTICIPATED = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_decode_RS2_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rsp_issueDetected_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_memory_to_writeBack_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_decode_to_execute_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_arbitration_haltByOther = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_isStuckByOthers = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_arbitration_isFlushed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_haltItself = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_haltByOther = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isStuck = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_arbitration_isFlushed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_haltItself = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_isStuck = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_arbitration_isFlushed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_haltItself = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_removeIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_flushIt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_flushNext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_isValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_arbitration_isFiring = VL_RAND_RESET_I(1);
    vlSelf->lastStageInstruction = VL_RAND_RESET_I(32);
    vlSelf->lastStagePc = VL_RAND_RESET_I(32);
    vlSelf->lastStageIsValid = VL_RAND_RESET_I(1);
    vlSelf->lastStageIsFiring = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetcherHalt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_incomingInstruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_predictionJumpInterface_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__IBusCachedPlugin_mmuBus_rsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBus_rsp_payload_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_mmuBus_rsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_redoBranch_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_exceptionBus_payload_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__decodeExceptionPort_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BranchPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__BranchPlugin_branchExceptionPort_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_csrMapping_readDataInit = VL_RAND_RESET_I(32);
    vlSelf->CsrPlugin_inWfi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_jumpInterface_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_jumpInterface_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_selfException_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_selfException_payload_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__IBusCachedPlugin_jump_pcLoad_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_output_valid = VL_RAND_RESET_I(1);
    vlSelf->IBusCachedPlugin_fetchPc_pcReg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_correctionReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_inc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_flushed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_redoFetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_readyForError = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_output_payload_rsp_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_iBusRsp_output_payload_isRvc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_s1_tightlyCoupledHit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_s2_tightlyCoupledHit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_rsp_redoFetch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_IBusCachedPlugin_l239 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_IBusCachedPlugin_l244 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_IBusCachedPlugin_l250 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_IBusCachedPlugin_l256 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_uncached = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_rData_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last = VL_RAND_RESET_I(1);
    vlSelf->__PVT__DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__PVT__when_DBusCachedPlugin_l446 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeBack_DBusCachedPlugin_rspShifted = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_decode_IS_RS2_SIGNED = VL_RAND_RESET_I(32);
    vlSelf->lastStageRegFileWrite_valid = VL_RAND_RESET_I(1);
    vlSelf->lastStageRegFileWrite_payload_address = VL_RAND_RESET_I(5);
    vlSelf->lastStageRegFileWrite_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_7 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_execute_SRC1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_execute_SRC2_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_SrcPlugin_addSub = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_SrcPlugin_less = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_FullBarrelShifterPlugin_reversed = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_decode_RS2_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__HazardSimplePlugin_src0Hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_src1Hazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_address = VL_RAND_RESET_I(5);
    vlSelf->__PVT__HazardSimplePlugin_writeBackBuffer_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__when_HazardSimplePlugin_l45 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l48_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l51_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l45_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l57_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l48_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l51_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l45_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_HazardSimplePlugin_l57_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_BranchPlugin_eq = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_execute_BRANCH_COND_RESULT_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_BranchPlugin_branch_src2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_mtvec_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_mtvec_base = VL_RAND_RESET_I(30);
    vlSelf->__PVT__CsrPlugin_mepc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mstatus_MPIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mstatus_MPP = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_mip_MEIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mip_MTIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mip_MSIP = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MEIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MTIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mie_MSIE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mcause_interrupt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_mcause_exceptionCode = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_mtval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__CsrPlugin_minstret = VL_RAND_RESET_Q(64);
    vlSelf->__PVT___zz_when_CsrPlugin_l965 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_when_CsrPlugin_l965_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_when_CsrPlugin_l965_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__CsrPlugin_interrupt_valid = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_interrupt_code = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_interrupt_targetPrivilege = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_pcValids_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_active = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l998 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_pipelineLiberator_done = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_interruptJump = VL_RAND_RESET_I(1);
    vlSelf->CsrPlugin_hadException = VL_RAND_RESET_I(1);
    vlSelf->__PVT__CsrPlugin_targetPrivilege = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_trapCause = VL_RAND_RESET_I(4);
    vlSelf->__PVT__CsrPlugin_xtvec_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__CsrPlugin_xtvec_base = VL_RAND_RESET_I(30);
    vlSelf->__PVT__when_CsrPlugin_l1032 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l1077 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_wfiWake = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_illegalAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_illegalInstruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__when_CsrPlugin_l1157 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_writeInstruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_readInstruction = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_writeEnable = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_writeDataSignal = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_MulPlugin_aHigh = VL_RAND_RESET_I(17);
    vlSelf->__PVT__execute_MulPlugin_bHigh = VL_RAND_RESET_I(17);
    vlSelf->__PVT__memory_DivPlugin_rs1 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__memory_DivPlugin_rs2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__memory_DivPlugin_accumulator);
    vlSelf->__PVT__memory_DivPlugin_div_needRevert = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_counter_willClear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_counter_valueNext = VL_RAND_RESET_I(6);
    vlSelf->__PVT__memory_DivPlugin_div_counter_value = VL_RAND_RESET_I(6);
    vlSelf->__PVT__memory_DivPlugin_div_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__when_MulDivIterativePlugin_l128 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderShifted = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator = VL_RAND_RESET_Q(33);
    vlSelf->__PVT___zz_memory_DivPlugin_div_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_memory_DivPlugin_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_memory_DivPlugin_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_memory_DivPlugin_rs1_1 = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__externalInterruptArray_regNext = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_INSTRUCTION = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_FORMAL_PC_NEXT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_SRC1_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SRC_USE_SUB_LESS = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_ENABLE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ALU_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SRC2_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_VALID = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_MEMORY_WR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_WR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_WR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_MEMORY_MANAGMENT = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_SRC_LESS_UNSIGNED = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ALU_BITWISE_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_SHIFT_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__execute_to_memory_SHIFT_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_BRANCH_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_IS_CSR = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_ENV_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__execute_to_memory_ENV_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__memory_to_writeBack_ENV_CTRL = VL_RAND_RESET_I(2);
    vlSelf->__PVT__decode_to_execute_IS_MUL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_IS_MUL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memory_to_writeBack_IS_MUL = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_IS_DIV = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_IS_DIV = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_IS_RS1_SIGNED = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_IS_RS2_SIGNED = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_RS1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_RS2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode_to_execute_SRC2_FORCE_ZERO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_CSR_WRITE_OPCODE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode_to_execute_CSR_READ_OPCODE = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_MEMORY_STORE_DATA_RF = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memory_to_writeBack_REGFILE_WRITE_DATA = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_SHIFT_RIGHT = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_BRANCH_DO = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_to_memory_BRANCH_CALC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_MUL_LL = VL_RAND_RESET_I(32);
    vlSelf->__PVT__execute_to_memory_MUL_LH = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__execute_to_memory_MUL_HL = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__execute_to_memory_MUL_HH = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__memory_to_writeBack_MUL_HH = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__memory_to_writeBack_MUL_LOW = VL_RAND_RESET_Q(52);
    vlSelf->__PVT__execute_CsrPlugin_csr_3264 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_768 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_836 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_772 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_773 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_833 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_834 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_835 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_3008 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__execute_CsrPlugin_csr_4032 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_5 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_6 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_7 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_8 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_9 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_CsrPlugin_csrMapping_readDataInit_10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_iBusWishbone_ADR = VL_RAND_RESET_I(3);
    vlSelf->__PVT__when_InstructionCache_l239 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_iBus_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__iBusWishbone_DAT_MISO_regNext = VL_RAND_RESET_I(32);
    vlSelf->__PVT___zz_dBus_cmd_ready = VL_RAND_RESET_I(3);
    vlSelf->__PVT___zz_dBus_cmd_ready_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_dBus_cmd_ready_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_dBus_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dBusWishbone_DAT_MISO_regNext = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(72, vlSelf->__PVT__decode_SHIFT_CTRL_string);
    VL_RAND_RESET_W(96, vlSelf->__PVT__decode_SRC1_CTRL_string);
    VL_RAND_RESET_W(72, vlSelf->__PVT__memory_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72, vlSelf->__PVT__execute_SHIFT_CTRL_string);
    VL_RAND_RESET_W(96, vlSelf->__PVT__execute_SRC1_CTRL_string);
    VL_RAND_RESET_W(96, vlSelf->__PVT__decode_to_execute_SRC1_CTRL_string);
    VL_RAND_RESET_W(72, vlSelf->__PVT__decode_to_execute_SHIFT_CTRL_string);
    VL_RAND_RESET_W(72, vlSelf->__PVT__execute_to_memory_SHIFT_CTRL_string);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RegFilePlugin_regFile[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_ways_0_tags_port1 = VL_RAND_RESET_I(22);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_fire = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_hadError = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushPending = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l338 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_when_InstructionCache_l342 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__when_InstructionCache_l351 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_cmdSent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wayToAllocate_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__banks_0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_tags_port0 = VL_RAND_RESET_I(22);
    vlSelf->__PVT__dataCache_1__DOT___zz_loader_waysAllocator = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataCache_1__DOT___zz_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT___zz_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsReadCmd_payload = VL_RAND_RESET_I(7);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_address = VL_RAND_RESET_I(7);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteCmd_payload_data_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_address = VL_RAND_RESET_I(7);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__tagsWriteLastCmd_payload_data_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataReadCmd_payload = VL_RAND_RESET_I(10);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_way = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_address = VL_RAND_RESET_I(10);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__dataWriteCmd_payload_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_dataReadRspMem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l664 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__memCmdSent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT___zz_stage0_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stage0_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_size = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataCache_1__DOT__stageA_request_totalyConsistent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageA_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageA_wayInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stage0_dataColisions_regNextWhen = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_size = VL_RAND_RESET_I(2);
    vlSelf->__PVT__dataCache_1__DOT__stageB_request_totalyConsistent = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l824 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_physicalAddress = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_isPaging = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowRead = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowWrite = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_allowExecute = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_exception = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_refilling = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRsp_bypassTranslation = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_tagsReadRsp_0_address = VL_RAND_RESET_I(20);
    vlSelf->__PVT__dataCache_1__DOT__stageB_dataReadRsp_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dataCache_1__DOT__stageB_wayInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_dataColisions = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_unaligned = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHitsBeforeInvalidate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_waysHits = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_mask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__dataCache_1__DOT__stageB_loaderValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_waitDone = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_counter = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l850 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_flusher_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_cpuWriteToCache = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__stageB_loadStoreFault = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1004 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1066 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_valueNext = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_value = VL_RAND_RESET_I(3);
    vlSelf->__PVT__dataCache_1__DOT__loader_counter_willOverflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_waysAllocator = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_error = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_killReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1090 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l1118 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dataCache_1__DOT__loader_valid_regNext = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<128; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_tags[__Vi0] = VL_RAND_RESET_I(22);
    }
}
