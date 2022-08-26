// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim_VexRiscv.h"

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_1(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset_1\n"); );
    // Body
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->__PVT__dataCache_1__DOT__ways_0_data_symbol3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_1 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_2 = VL_RAND_RESET_I(8);
    vlSelf->__PVT__dataCache_1__DOT___zz_ways_0_datasymbol_read_3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__RegFilePlugin_regFile__v0 = 0;
    vlSelf->__Vdlyvval__RegFilePlugin_regFile__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__RegFilePlugin_regFile__v0 = 0;
    vlSelf->__Vdly__DBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__CsrPlugin_minstret = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__CsrPlugin_mstatus_MIE = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__IBusCachedPlugin_rspCounter = VL_RAND_RESET_I(32);
    vlSelf->__Vdly___zz_iBusWishbone_ADR = VL_RAND_RESET_I(3);
    vlSelf->__Vdly___zz_dBus_cmd_ready = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__banks_0__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__banks_0__v0 = 0;
    vlSelf->__Vdlyvdim0__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvval__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = VL_RAND_RESET_I(22);
    vlSelf->__Vdlyvset__IBusCachedPlugin_cache__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_wordIndex = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__IBusCachedPlugin_cache__DOT__lineLoader_flushCounter = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_tags__v0 = VL_RAND_RESET_I(22);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_tags__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol0__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol0__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol1__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol1__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol2__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol2__v0 = 0;
    vlSelf->__Vdlyvdim0__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
    vlSelf->__Vdlyvval__dataCache_1__DOT__ways_0_data_symbol3__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__dataCache_1__DOT__ways_0_data_symbol3__v0 = 0;
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_waitDone = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_counter = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__dataCache_1__DOT__stageB_flusher_start = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__dataCache_1__DOT__loader_error = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset_0(Vsim_VexRiscv* vlSelf);

VL_ATTR_COLD void Vsim_VexRiscv___ctor_var_reset(Vsim_VexRiscv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsim_VexRiscv___ctor_var_reset\n"); );
    // Body
    Vsim_VexRiscv___ctor_var_reset_0(vlSelf);
    Vsim_VexRiscv___ctor_var_reset_1(vlSelf);
}
