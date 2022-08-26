// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__4(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__4\n"); );
    // Body
    vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r = 0U;
    if ((3U == (0x1fU & ((IData)(vlSelf->__PVT__builder_simsoc_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr))))) {
            vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                    ? vlSelf->__PVT__main_timer_load_storage
                    : ((1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                        ? vlSelf->__PVT__main_timer_reload_storage
                        : ((2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                            ? (IData)(vlSelf->__PVT__main_timer_en_storage)
                            : ((3U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                ? (IData)(vlSelf->__PVT__main_timer_update_value_storage)
                                : ((4U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                    ? vlSelf->__PVT__main_timer_value_status
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                        ? (0U == vlSelf->__PVT__main_timer_value)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                            ? (IData)(vlSelf->__PVT__main_timer_zero_pending)
                                            : (IData)(vlSelf->__PVT__main_timer_enable_storage))))))));
        }
    }
    vlSelf->__Vdly__main_ram_bus_ram_bus_ack = 0U;
    if ((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
          & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
         & (~ (IData)(vlSelf->__PVT__main_ram_bus_ram_bus_ack)))) {
        vlSelf->__Vdly__main_ram_bus_ram_bus_ack = 1U;
    }
    vlSelf->__PVT__builder_simsoc_state = vlSelf->__PVT__builder_simsoc_next_state;
    vlSelf->__PVT__builder_slave_sel_r = vlSelf->__PVT__builder_slave_sel;
    if ((((IData)(vlSelf->__PVT__builder_array_muxed4) 
          & (IData)(vlSelf->__PVT__builder_array_muxed3)) 
         & (~ (IData)(vlSelf->__PVT__builder_shared_ack)))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__builder_done)))) {
            vlSelf->__PVT__builder_count = (0xfffffU 
                                            & (vlSelf->__PVT__builder_count 
                                               - (IData)(1U)));
        }
    } else {
        vlSelf->__PVT__builder_count = 0xf4240U;
    }
    vlSelf->__PVT__sram_adr0 = (0x7ffU & vlSelf->__PVT__builder_array_muxed0);
    vlSelf->__PVT__rom_dat0 = ((0x16ddU >= (0x1fffU 
                                            & vlSelf->__PVT__builder_array_muxed0))
                                ? vlSelf->__PVT__rom
                               [(0x1fffU & vlSelf->__PVT__builder_array_muxed0)]
                                : 0U);
    vlSelf->__Vdly__main_simsoc_ram_bus_ack = 0U;
    if (((((IData)(vlSelf->__PVT__builder_array_muxed3) 
           & (IData)(vlSelf->__PVT__builder_slave_sel)) 
          & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
         & (~ (IData)(vlSelf->__PVT__main_simsoc_ram_bus_ack)))) {
        vlSelf->__Vdly__main_simsoc_ram_bus_ack = 1U;
    }
    if ((1U & (IData)(vlSelf->__PVT__main_ram_we))) {
        vlSelf->__Vdlyvval__sram__v0 = (0xffU & vlSelf->__PVT__builder_array_muxed1);
        vlSelf->__Vdlyvset__sram__v0 = 1U;
        vlSelf->__Vdlyvlsb__sram__v0 = 0U;
        vlSelf->__Vdlyvdim0__sram__v0 = (0x7ffU & vlSelf->__PVT__builder_array_muxed0);
    }
    if ((2U & (IData)(vlSelf->__PVT__main_ram_we))) {
        vlSelf->__Vdlyvval__sram__v1 = (0xffU & (vlSelf->__PVT__builder_array_muxed1 
                                                 >> 8U));
        vlSelf->__Vdlyvset__sram__v1 = 1U;
        vlSelf->__Vdlyvlsb__sram__v1 = 8U;
        vlSelf->__Vdlyvdim0__sram__v1 = (0x7ffU & vlSelf->__PVT__builder_array_muxed0);
    }
    if ((4U & (IData)(vlSelf->__PVT__main_ram_we))) {
        vlSelf->__Vdlyvval__sram__v2 = (0xffU & (vlSelf->__PVT__builder_array_muxed1 
                                                 >> 0x10U));
        vlSelf->__Vdlyvset__sram__v2 = 1U;
        vlSelf->__Vdlyvlsb__sram__v2 = 0x10U;
        vlSelf->__Vdlyvdim0__sram__v2 = (0x7ffU & vlSelf->__PVT__builder_array_muxed0);
    }
    if ((8U & (IData)(vlSelf->__PVT__main_ram_we))) {
        vlSelf->__Vdlyvval__sram__v3 = (vlSelf->__PVT__builder_array_muxed1 
                                        >> 0x18U);
        vlSelf->__Vdlyvset__sram__v3 = 1U;
        vlSelf->__Vdlyvlsb__sram__v3 = 0x18U;
        vlSelf->__Vdlyvdim0__sram__v3 = (0x7ffU & vlSelf->__PVT__builder_array_muxed0);
    }
    if ((0U == (IData)(vlSelf->__PVT__builder_grant))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__builder_request)))) {
            if ((2U & (IData)(vlSelf->__PVT__builder_request))) {
                vlSelf->__Vdly__builder_grant = 1U;
            } else if ((4U & (IData)(vlSelf->__PVT__builder_request))) {
                vlSelf->__Vdly__builder_grant = 2U;
            }
        }
    } else if ((1U == (IData)(vlSelf->__PVT__builder_grant))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__builder_request) 
                      >> 1U)))) {
            if ((4U & (IData)(vlSelf->__PVT__builder_request))) {
                vlSelf->__Vdly__builder_grant = 2U;
            } else if ((1U & (IData)(vlSelf->__PVT__builder_request))) {
                vlSelf->__Vdly__builder_grant = 0U;
            }
        }
    } else if ((2U == (IData)(vlSelf->__PVT__builder_grant))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__builder_request) 
                      >> 2U)))) {
            if ((1U & (IData)(vlSelf->__PVT__builder_request))) {
                vlSelf->__Vdly__builder_grant = 0U;
            } else if ((2U & (IData)(vlSelf->__PVT__builder_request))) {
                vlSelf->__Vdly__builder_grant = 1U;
            }
        }
    }
    vlSelf->__PVT__builder_simsoc_wishbonedmareader_state 
        = vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state;
    if (vlSelf->__PVT__main_int_rst) {
        vlSelf->__Vdly__main_ram_bus_ram_bus_ack = 0U;
        vlSelf->__PVT__builder_simsoc_state = 0U;
        vlSelf->__PVT__builder_slave_sel_r = 0U;
        vlSelf->__PVT__builder_count = 0xf4240U;
        vlSelf->__Vdly__main_simsoc_ram_bus_ack = 0U;
        vlSelf->__Vdly__builder_grant = 0U;
        vlSelf->__PVT__builder_simsoc_wishbonedmareader_state = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__6(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__6\n"); );
    // Body
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_re) {
        vlSelf->__PVT__main_instruction_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_re) {
        vlSelf->__PVT__main_src_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_re) {
        vlSelf->__PVT__main_dst_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_re) {
        vlSelf->__PVT__main_length_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_re) {
        vlSelf->__PVT__main_input_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_re) {
        vlSelf->__PVT__main_output_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_re) {
        vlSelf->__PVT__main_imm_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__main_offset_resetinserter_next_value_ce) {
        vlSelf->__PVT__main_offset = vlSelf->__PVT__main_offset_resetinserter_next_value;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__main_enable_storage)))) {
        vlSelf->__PVT__main_offset = 0U;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_re) {
        vlSelf->__PVT__main_timer_update_value_storage 
            = (1U & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re) {
        vlSelf->__PVT__main_timer_enable_storage = 
            (1U & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    if (vlSelf->__PVT__main_timer_zero_clear) {
        vlSelf->__PVT__main_timer_zero_pending = 0U;
    }
    if (((0U == vlSelf->__PVT__main_timer_value) & 
         (~ (IData)(vlSelf->__PVT__main_timer_zero_trigger_d)))) {
        vlSelf->__PVT__main_timer_zero_pending = 1U;
    }
    vlSelf->__Vdly__main_timer_value = ((IData)(vlSelf->__PVT__main_timer_en_storage)
                                         ? ((0U == vlSelf->__PVT__main_timer_value)
                                             ? vlSelf->__PVT__main_timer_reload_storage
                                             : (vlSelf->__PVT__main_timer_value 
                                                - (IData)(1U)))
                                         : vlSelf->__PVT__main_timer_load_storage);
    if (vlSelf->__PVT__main_timer_update_value_re) {
        vlSelf->__PVT__main_timer_value_status = vlSelf->__PVT__main_timer_value;
    }
    vlSelf->__PVT__builder_simsoc_wishbone_ack = 0U;
    vlSelf->__PVT__builder_done = (0U == vlSelf->__PVT__builder_count);
    vlSelf->__PVT__builder_error = 0U;
    vlSelf->__PVT__main_dma_reader_source_last = 0U;
    vlSelf->__PVT__main_dma_reader_sink_ready = 0U;
    vlSelf->__PVT__main_bus_we = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_wishbonedmareader_state)))) {
        vlSelf->__PVT__main_bus_we = 0U;
        vlSelf->__PVT__main_bus_we = 1U;
        vlSelf->__PVT__main_bus_sel = 0U;
        vlSelf->__PVT__main_bus_sel = 0xfU;
        vlSelf->__PVT__main_bus_sel = 0xfU;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_adr = 0U;
        vlSelf->__PVT__main_bus_adr = 0U;
    } else {
        vlSelf->__PVT__main_bus_we = 1U;
        vlSelf->__PVT__main_bus_sel = 0U;
        vlSelf->__PVT__main_bus_sel = 0xfU;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_stb = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_cyc = 0U;
        vlSelf->__PVT__main_bus_adr = 0U;
    }
    vlSelf->__PVT__main_bus_adr = 0U;
    vlSelf->__PVT__main_dma_reader_source_payload_data = 0U;
    vlSelf->__PVT__main_dma_reader_source_valid = 0U;
    if (vlSelf->__PVT__builder_simsoc_wishbonedmareader_state) {
        vlSelf->__PVT__main_dma_reader_source_last = 0U;
        if (vlSelf->__PVT__main_core_sink_ready) {
            vlSelf->__PVT__main_dma_reader_sink_ready = 1U;
        }
        vlSelf->__PVT__main_dma_reader_source_payload_data 
            = vlSelf->__PVT__main_dma_reader_data;
        vlSelf->__PVT__main_dma_reader_source_valid = 1U;
    }
    vlSelf->__PVT__main_uart_tx_fifo_level0 = vlSelf->__Vdly__main_uart_tx_fifo_level0;
    vlSelf->__PVT__builder_simsoc_wishbone_dat_r = 0U;
    if (vlSelf->__PVT__builder_simsoc_state) {
        vlSelf->__PVT__builder_simsoc_wishbone_ack = 1U;
        vlSelf->__PVT__builder_simsoc_wishbone_dat_r 
            = ((((vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                  | vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r) 
                 | vlSelf->__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r) 
                | vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r) 
               | vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r);
    }
    vlSelf->__PVT__main_offset_resetinserter_next_value_ce = 0U;
    vlSelf->__PVT__main_offset_resetinserter_next_value = 0U;
    if ((2U != (IData)(vlSelf->__PVT__builder_simsoc_resetinserter_state))) {
        vlSelf->__PVT__main_offset_resetinserter_next_value_ce = 1U;
        vlSelf->__PVT__main_offset_resetinserter_next_value = 0U;
    }
    vlSelf->__PVT__main_timer_zero_clear = 0U;
    if (((IData)(vlSelf->__PVT__main_timer_pending_re) 
         & (IData)(vlSelf->__PVT__main_timer_pending_r))) {
        vlSelf->__PVT__main_timer_zero_clear = 1U;
    }
    vlSelf->__PVT__builder_shared_ack = (((IData)(vlSelf->__PVT__main_simsoc_ram_bus_ack) 
                                          | (IData)(vlSelf->__PVT__main_ram_bus_ram_bus_ack)) 
                                         | (IData)(vlSelf->__PVT__builder_simsoc_wishbone_ack));
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_error = 1U;
        vlSelf->__PVT__builder_shared_ack = 1U;
    }
    vlSelf->__PVT__main_uart_tx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0));
    if (vlSelf->__PVT__main_uart_rx_fifo_syncfifo_re) {
        vlSelf->__PVT__main_uart_rx_fifo_readable = 1U;
    } else if (vlSelf->__PVT__main_uart_rx_clear) {
        vlSelf->__PVT__main_uart_rx_fifo_readable = 0U;
    }
    vlSelf->__PVT__main_soc_rst = 0U;
    if (vlSelf->__PVT__main_reset_re) {
        vlSelf->__PVT__main_soc_rst = (1U & (IData)(vlSelf->__PVT__main_reset_storage));
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_re) {
        vlSelf->__PVT__main_enable_storage = (1U & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    vlSelf->__PVT__main_timer_zero_trigger_d = (0U 
                                                == vlSelf->__PVT__main_timer_value);
    vlSelf->__PVT__main_timer_update_value_re = vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_re;
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_re) {
        vlSelf->__PVT__main_timer_en_storage = (1U 
                                                & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    if (vlSelf->__PVT__main_int_rst) {
        vlSelf->__PVT__main_instruction_storage = 0U;
        vlSelf->__PVT__main_src_storage = 0U;
        vlSelf->__PVT__main_dst_storage = 0U;
        vlSelf->__PVT__main_length_storage = 0U;
        vlSelf->__PVT__main_input_storage = 0U;
        vlSelf->__PVT__main_output_storage = 0U;
        vlSelf->__PVT__main_imm_storage = 0U;
        vlSelf->__PVT__main_offset = 0U;
        vlSelf->__PVT__main_timer_update_value_storage = 0U;
        vlSelf->__PVT__main_timer_enable_storage = 0U;
        vlSelf->__PVT__main_timer_zero_pending = 0U;
        vlSelf->__PVT__main_timer_value_status = 0U;
        vlSelf->__Vdly__main_timer_value = 0U;
        vlSelf->__PVT__main_uart_rx_fifo_readable = 0U;
        vlSelf->__PVT__main_enable_storage = 0U;
        vlSelf->__PVT__main_timer_zero_trigger_d = 0U;
        vlSelf->__PVT__main_timer_update_value_re = 0U;
        vlSelf->__PVT__main_timer_en_storage = 0U;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_re) {
        vlSelf->__PVT__main_timer_reload_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
}

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__7(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__7\n"); );
    // Body
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_re) {
        vlSelf->__PVT__main_timer_load_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__main_int_rst) {
        vlSelf->__PVT__main_timer_reload_storage = 0U;
        vlSelf->__PVT__main_timer_load_storage = 0U;
    }
    vlSelf->__PVT__main_bus_ack = ((IData)(vlSelf->__PVT__builder_shared_ack) 
                                   & (2U == (IData)(vlSelf->__PVT__builder_grant)));
    vlSelf->__PVT__main_uart_rx_clear = 0U;
    if (((IData)(vlSelf->__PVT__main_uart_pending_re) 
         & ((IData)(vlSelf->__PVT__main_uart_pending_r) 
            >> 1U))) {
        vlSelf->__PVT__main_uart_rx_clear = 1U;
    }
    vlSelf->__PVT__main_timer_value = vlSelf->__Vdly__main_timer_value;
    vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_wishbonedmareader_state)))) {
        if (((IData)(vlSelf->__PVT__main_bus_stb) & (IData)(vlSelf->__PVT__main_bus_ack))) {
            vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce = 1U;
        }
    }
    if (vlSelf->__PVT__builder_simsoc_wishbonedmareader_state) {
        vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 1U;
        if (vlSelf->__PVT__main_core_sink_ready) {
            vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 0U;
        }
    } else {
        vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 0U;
        if (((IData)(vlSelf->__PVT__main_bus_stb) & (IData)(vlSelf->__PVT__main_bus_ack))) {
            vlSelf->__PVT__builder_simsoc_wishbonedmareader_next_state = 1U;
        }
    }
    vlSelf->__PVT__main_uart_status_status = (((IData)(vlSelf->__PVT__main_uart_rx_fifo_readable) 
                                               << 1U) 
                                              | (0x10U 
                                                 != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)));
    vlSelf->__PVT__main_uart_rx_fifo_syncfifo_re = 
        ((0U != (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0)) 
         & ((~ (IData)(vlSelf->__PVT__main_uart_rx_fifo_readable)) 
            | (IData)(vlSelf->__PVT__main_uart_rx_clear)));
    vlSelf->__PVT__main_int_rst = 0U;
    vlSelf->__PVT__main_uart_rx_fifo_do_read = ((0U 
                                                 != (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0)) 
                                                & (IData)(vlSelf->__PVT__main_uart_rx_fifo_syncfifo_re));
}

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__9(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__9\n"); );
    // Body
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_re = 0U;
    if ((IData)((1U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_we = 0U;
    if ((IData)((2U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_re = 0U;
    if ((IData)((3U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_re = 0U;
    if ((IData)((4U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_we = 0U;
    if ((IData)((5U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_re = 0U;
    if ((IData)((6U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_we = 0U;
    if ((IData)((7U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_we = 0U;
    if ((IData)((8U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_re = 0U;
    if ((IData)((9U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_we = 0U;
    if ((IData)((0xaU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_we = 0U;
    if ((IData)((0xbU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_re = 0U;
    if ((IData)((0xcU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_we = 0U;
    if ((IData)((0xdU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
}

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__10(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__10\n"); );
    // Body
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_re = 0U;
    if ((IData)((0xdU == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we = 0U;
    if ((IData)((0x200U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_re = 0U;
    if ((IData)((0x201U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_we = 0U;
    if ((IData)((0x202U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_re = 0U;
    if ((IData)((0x600U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_re = 0U;
    if ((IData)((0x601U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_we = 0U;
    if ((IData)((0x602U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_re = 0U;
    if ((IData)((0x603U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_update_value0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_we = 0U;
    if ((IData)((0x604U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_we = 0U;
    if ((IData)((0x605U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_re = 0U;
    if ((IData)((0x606U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re = 0U;
    if ((IData)((0x607U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__main_uart_rxtx_we = 0U;
    vlSelf->__PVT__main_uart_rxtx_re = 0U;
    if ((IData)((0x800U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__main_uart_rxtx_we = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__main_uart_rxtx_re = vlSelf->__PVT__builder_simsoc_we;
    }
}

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__11(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__11\n"); );
    // Body
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_we = 0U;
    if ((IData)((0x801U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_we = 0U;
    if ((IData)((0x802U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_re = 0U;
    if ((IData)((0x803U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_re = 0U;
    if ((IData)((0x804U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we = 0U;
    if ((IData)((0x805U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re 
            = vlSelf->__PVT__builder_simsoc_we;
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_re = 0U;
    if ((IData)((0x806U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_re = 0U;
    if ((IData)((0x807U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
}
