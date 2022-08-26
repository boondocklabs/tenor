// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim_VexRiscv.h"
#include "Vsim__Syms.h"

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__17(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__17\n"); );
    // Body
    vlSelf->__PVT__dataCache_1__DOT__when_DataCache_l824 
        = (1U & ((~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself)) 
                 & (~ (IData)(vlSelf->__PVT__dataCache_1__DOT__stageB_mmuRspFreeze))));
    vlSelf->__PVT__writeBack_arbitration_isFiring = 
        (((IData)(vlSelf->__PVT__writeBack_arbitration_isValid) 
          & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself))) 
         & (~ (IData)(vlSelf->__PVT__writeBack_arbitration_removeIt)));
    vlSelf->__PVT__memory_arbitration_isStuck = ((IData)(vlSelf->__PVT__memory_arbitration_haltItself) 
                                                 | (IData)(vlSelf->__PVT__writeBack_arbitration_haltItself));
    vlSelf->__PVT__IBusCachedPlugin_fetchPc_booted 
        = (1U & (~ (IData)(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset)));
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
    if (vlSelf->__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) {
        vlSelf->__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1 
            = vlSelf->__PVT__IBusCachedPlugin_cache__DOT__banks_0
            [(0x3ffU & (vlSelf->__PVT__IBusCachedPlugin_fetchPc_pc 
                        >> 2U))];
    }
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
}

VL_INLINE_OPT void Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__20(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___sequent__TOP__sim__VexRiscv__20\n"); );
    // Body
    vlSelf->__PVT___zz_dBus_cmd_ready_2 = ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                           & (IData)(vlSymsp->TOP__sim.__PVT__main_dbus_ack));
    vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready 
        = ((IData)(vlSelf->__PVT___zz_dBus_cmd_ready_2) 
           & ((IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
              | (IData)(vlSelf->__PVT___zz_dBus_cmd_ready_4)));
    if ((1U & (~ (IData)(vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))) {
        vlSelf->__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready = 1U;
    }
}
