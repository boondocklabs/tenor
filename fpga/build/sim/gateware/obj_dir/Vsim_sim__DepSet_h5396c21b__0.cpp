// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsim.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsim__Syms.h"
#include "Vsim_sim.h"

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__2(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__2\n"); );
    // Body
    vlSelf->__Vdlyvset__storage_1__v0 = 0U;
    vlSelf->__Vdly__main_core_counter = vlSelf->__PVT__main_core_counter;
    vlSelf->__Vdlyvset__storage__v0 = 0U;
    vlSelf->__Vdly__main_uart_rx_fifo_consume = vlSelf->__PVT__main_uart_rx_fifo_consume;
    vlSelf->__Vdly__main_uart_tx_fifo_consume = vlSelf->__PVT__main_uart_tx_fifo_consume;
    vlSelf->__Vdly__main_bus_errors = vlSelf->__PVT__main_bus_errors;
    vlSelf->__Vdly__main_uart_rx_fifo_level0 = vlSelf->__PVT__main_uart_rx_fifo_level0;
    vlSelf->__Vdly__main_uart_tx_fifo_level0 = vlSelf->__PVT__main_uart_tx_fifo_level0;
    vlSelf->__Vdly__main_timer_value = vlSelf->__PVT__main_timer_value;
    vlSelf->__Vdly__main_ram_bus_ram_bus_ack = vlSelf->__PVT__main_ram_bus_ram_bus_ack;
    vlSelf->__Vdly__main_simsoc_ram_bus_ack = vlSelf->__PVT__main_simsoc_ram_bus_ack;
    vlSelf->__Vdlyvset__sram__v0 = 0U;
    vlSelf->__Vdlyvset__sram__v1 = 0U;
    vlSelf->__Vdlyvset__sram__v2 = 0U;
    vlSelf->__Vdlyvset__sram__v3 = 0U;
    vlSelf->__Vdly__builder_grant = vlSelf->__PVT__builder_grant;
    vlSelf->__PVT__storage_1_dat0 = vlSelf->__PVT__storage_1
        [vlSelf->__PVT__main_uart_rx_fifo_wrport_adr];
    vlSelf->__PVT__storage_dat0 = vlSelf->__PVT__storage
        [vlSelf->__PVT__main_uart_tx_fifo_wrport_adr];
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & 
         (0x10U != (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0)))) {
        vlSelf->__Vdlyvval__storage_1__v0 = vlSymsp->TOP.serial_sink_data;
        vlSelf->__Vdlyvset__storage_1__v0 = 1U;
        vlSelf->__Vdlyvdim0__storage_1__v0 = vlSelf->__PVT__main_uart_rx_fifo_wrport_adr;
    }
    vlSelf->__Vdly__main_core_counter = ((IData)(1U) 
                                         + vlSelf->__PVT__main_core_counter);
    if (((IData)(vlSelf->__PVT__main_uart_rxtx_re) 
         & (0x10U != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)))) {
        vlSelf->__Vdlyvval__storage__v0 = (0xffU & vlSelf->__PVT__builder_simsoc_dat_w);
        vlSelf->__Vdlyvset__storage__v0 = 1U;
        vlSelf->__Vdlyvdim0__storage__v0 = vlSelf->__PVT__main_uart_tx_fifo_wrport_adr;
    }
    vlSelf->__PVT__main_uart_txempty_re = vlSelf->__PVT__builder_csr_bankarray_csrbank3_txempty_re;
    vlSelf->__PVT__main_uart_rxempty_re = vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxempty_re;
    vlSelf->__PVT__main_timer_value_re = vlSelf->__PVT__builder_csr_bankarray_csrbank2_value_re;
    vlSelf->__PVT__main_data_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_data_re;
    vlSelf->__PVT__main_tick_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_tick_re;
    vlSelf->__PVT__main_done_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_done_re;
    vlSelf->__PVT__main_uart_rxfull_re = vlSelf->__PVT__builder_csr_bankarray_csrbank3_rxfull_re;
    vlSelf->__PVT__main_status_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_re;
    vlSelf->__PVT__main_timer_status_re = vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_status_re;
    vlSelf->__PVT__main_offset_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_offset_re;
    vlSelf->__PVT__main_uart_status_re = vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_status_re;
    vlSelf->__PVT__main_bus_errors_re = vlSelf->__PVT__builder_csr_bankarray_csrbank1_bus_errors_re;
    vlSelf->__PVT__main_uart_txfull_re = vlSelf->__PVT__builder_csr_bankarray_csrbank3_txfull_re;
    vlSelf->__PVT__main_timer_reload_re = vlSelf->__PVT__builder_csr_bankarray_csrbank2_reload0_re;
    vlSelf->__PVT__main_scratch_re = vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_re;
    vlSelf->__PVT__main_imm_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_imm0_re;
    vlSelf->__PVT__main_src_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_src0_re;
    vlSelf->__PVT__main_instruction_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_instruction0_re;
    vlSelf->__PVT__main_timer_en_re = vlSelf->__PVT__builder_csr_bankarray_csrbank2_en0_re;
    vlSelf->__PVT__main_timer_load_re = vlSelf->__PVT__builder_csr_bankarray_csrbank2_load0_re;
    vlSelf->__PVT__main_enable_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_enable0_re;
    vlSelf->__PVT__main_length_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_length0_re;
    vlSelf->__PVT__main_output_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_output0_re;
    vlSelf->__PVT__main_uart_enable_re = vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re;
    vlSelf->__PVT__main_dst_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_dst0_re;
    vlSelf->__PVT__main_control_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_re;
    vlSelf->__PVT__main_timer_enable_re = vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re;
    vlSelf->__PVT__main_input_re = vlSelf->__PVT__builder_csr_bankarray_csrbank0_input0_re;
    if (vlSelf->__PVT__main_int_rst) {
        vlSelf->__Vdly__main_core_counter = 0U;
        vlSelf->__PVT__main_uart_txempty_re = 0U;
        vlSelf->__PVT__main_uart_rxempty_re = 0U;
        vlSelf->__PVT__main_timer_value_re = 0U;
        vlSelf->__PVT__main_data_re = 0U;
        vlSelf->__PVT__main_tick_re = 0U;
        vlSelf->__PVT__main_done_re = 0U;
        vlSelf->__PVT__main_uart_rxfull_re = 0U;
        vlSelf->__PVT__main_status_re = 0U;
        vlSelf->__PVT__main_timer_status_re = 0U;
        vlSelf->__PVT__main_offset_re = 0U;
        vlSelf->__PVT__main_uart_status_re = 0U;
        vlSelf->__PVT__main_bus_errors_re = 0U;
        vlSelf->__PVT__main_uart_txfull_re = 0U;
        vlSelf->__PVT__main_timer_reload_re = 0U;
        vlSelf->__PVT__main_scratch_re = 0U;
        vlSelf->__PVT__main_imm_re = 0U;
        vlSelf->__PVT__main_src_re = 0U;
        vlSelf->__PVT__main_instruction_re = 0U;
        vlSelf->__PVT__main_timer_en_re = 0U;
        vlSelf->__PVT__main_timer_load_re = 0U;
        vlSelf->__PVT__main_enable_re = 0U;
        vlSelf->__PVT__main_length_re = 0U;
        vlSelf->__PVT__main_output_re = 0U;
        vlSelf->__PVT__main_uart_enable_re = 0U;
        vlSelf->__PVT__main_dst_re = 0U;
        vlSelf->__PVT__main_control_re = 0U;
        vlSelf->__PVT__main_timer_enable_re = 0U;
        vlSelf->__PVT__main_input_re = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__3(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__3\n"); );
    // Body
    if (vlSelf->__PVT__main_dma_reader_source_valid) {
        vlSelf->__PVT__main_core_source_valid = 1U;
        vlSelf->__PVT__main_core_sink_ready = 1U;
        vlSelf->__PVT__main_core_source_payload_data 
            = vlSelf->__PVT__main_core_data;
    }
    if (vlSelf->__PVT__main_uart_rx_fifo_do_read) {
        vlSelf->__Vdly__main_uart_rx_fifo_consume = 
            (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__main_uart_rx_fifo_consume)));
        vlSelf->__PVT__storage_1_dat1 = vlSelf->__PVT__storage_1
            [vlSelf->__PVT__main_uart_rx_fifo_consume];
    }
    if (vlSelf->__PVT__main_uart_tx_fifo_do_read) {
        vlSelf->__Vdly__main_uart_tx_fifo_consume = 
            (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__main_uart_tx_fifo_consume)));
        vlSelf->__PVT__storage_dat1 = vlSelf->__PVT__storage
            [vlSelf->__PVT__main_uart_tx_fifo_consume];
    }
    if ((0xffffffffU != vlSelf->__PVT__main_bus_errors)) {
        if (vlSelf->__PVT__builder_error) {
            vlSelf->__Vdly__main_bus_errors = ((IData)(1U) 
                                               + vlSelf->__PVT__main_bus_errors);
        }
    }
    vlSelf->__PVT__main_timer_pending_re = vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_re;
    if (vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce) {
        vlSelf->__PVT__main_dma_reader_data = vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank2_ev_pending_re) {
        vlSelf->__PVT__main_timer_pending_r = (1U & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    vlSelf->__PVT__main_reset_re = vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re;
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & 
         (0x10U != (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0)))) {
        vlSelf->__PVT__main_uart_rx_fifo_produce = 
            (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__main_uart_rx_fifo_produce)));
    }
    if (((IData)(vlSelf->__PVT__main_uart_rxtx_re) 
         & (0x10U != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)))) {
        vlSelf->__PVT__main_uart_tx_fifo_produce = 
            (0xfU & ((IData)(1U) + (IData)(vlSelf->__PVT__main_uart_tx_fifo_produce)));
    }
    vlSelf->__PVT__main_uart_pending_re = vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_re;
    if (((IData)(vlSymsp->TOP.serial_sink_valid) & (IData)(vlSelf->__PVT__main_uart_rx_fifo_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__main_uart_rx_fifo_do_read)))) {
            vlSelf->__Vdly__main_uart_rx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0)));
        }
    } else if (vlSelf->__PVT__main_uart_rx_fifo_do_read) {
        vlSelf->__Vdly__main_uart_rx_fifo_level0 = 
            (0x1fU & ((IData)(vlSelf->__PVT__main_uart_rx_fifo_level0) 
                      - (IData)(1U)));
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_pending_re) {
        vlSelf->__PVT__main_uart_pending_r = (3U & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    if (((IData)(vlSelf->__PVT__main_uart_rxtx_re) 
         & (IData)(vlSelf->__PVT__main_uart_tx_fifo_syncfifo_writable))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__main_uart_tx_fifo_do_read)))) {
            vlSelf->__Vdly__main_uart_tx_fifo_level0 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)));
        }
    } else if (vlSelf->__PVT__main_uart_tx_fifo_do_read) {
        vlSelf->__Vdly__main_uart_tx_fifo_level0 = 
            (0x1fU & ((IData)(vlSelf->__PVT__main_uart_tx_fifo_level0) 
                      - (IData)(1U)));
    }
    vlSelf->__PVT__builder_simsoc_resetinserter_state 
        = vlSelf->__PVT__builder_simsoc_resetinserter_next_state;
    if ((1U & (~ (IData)(vlSelf->__PVT__main_enable_storage)))) {
        vlSelf->__PVT__builder_simsoc_resetinserter_state = 0U;
    }
    if (vlSelf->__PVT__main_uart_tx_clear) {
        vlSelf->__PVT__main_uart_tx_pending = 0U;
    }
    if (((0x10U != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)) 
         & (~ (IData)(vlSelf->__PVT__main_uart_tx_trigger_d)))) {
        vlSelf->__PVT__main_uart_tx_pending = 1U;
    }
    if (vlSelf->__PVT__main_uart_rx_clear) {
        vlSelf->__PVT__main_uart_rx_pending = 0U;
    }
    if (((IData)(vlSelf->__PVT__main_uart_rx_fifo_readable) 
         & (~ (IData)(vlSelf->__PVT__main_uart_rx_trigger_d)))) {
        vlSelf->__PVT__main_uart_rx_pending = 1U;
    }
    vlSelf->__PVT__mem_adr0 = (0x3fU & (IData)(vlSelf->__PVT__builder_simsoc_adr));
    vlSelf->__PVT__builder_csr_bankarray_sel_r = (2U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->__PVT__builder_simsoc_adr) 
                                                      >> 9U)));
    if (vlSelf->__PVT__main_int_rst) {
        vlSelf->__PVT__main_core_source_valid = 0U;
        vlSelf->__Vdly__main_uart_rx_fifo_consume = 0U;
        vlSelf->__Vdly__main_uart_tx_fifo_consume = 0U;
        vlSelf->__Vdly__main_bus_errors = 0U;
        vlSelf->__PVT__main_timer_pending_re = 0U;
        vlSelf->__PVT__main_dma_reader_data = 0U;
        vlSelf->__PVT__main_core_sink_ready = 0U;
        vlSelf->__PVT__main_timer_pending_r = 0U;
        vlSelf->__PVT__main_reset_re = 0U;
        vlSelf->__PVT__main_uart_rx_fifo_produce = 0U;
        vlSelf->__PVT__main_uart_tx_fifo_produce = 0U;
        vlSelf->__PVT__main_uart_pending_re = 0U;
        vlSelf->__PVT__main_core_source_payload_data = 0U;
        vlSelf->__Vdly__main_uart_rx_fifo_level0 = 0U;
        vlSelf->__PVT__main_uart_pending_r = 0U;
        vlSelf->__Vdly__main_uart_tx_fifo_level0 = 0U;
        vlSelf->__PVT__builder_simsoc_resetinserter_state = 0U;
        vlSelf->__PVT__main_uart_tx_pending = 0U;
        vlSelf->__PVT__main_uart_rx_pending = 0U;
        vlSelf->__PVT__builder_csr_bankarray_sel_r = 0U;
    }
    vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r = 0U;
    if ((1U == (0x1fU & ((IData)(vlSelf->__PVT__builder_simsoc_adr) 
                         >> 9U)))) {
        if ((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                = vlSelf->__PVT__main_reset_storage;
        } else if ((1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                = vlSelf->__PVT__main_scratch_storage;
        } else if ((2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r 
                = vlSelf->__PVT__main_bus_errors;
        }
    }
    vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r = 0U;
    if ((4U == (0x1fU & ((IData)(vlSelf->__PVT__builder_simsoc_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr))))) {
            vlSelf->__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                    ? (IData)(vlSelf->__PVT__main_uart_rx_fifo_fifo_out_payload_data)
                    : ((1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                        ? (0x10U == (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0))
                        : ((2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                            ? (1U & (~ (IData)(vlSelf->__PVT__main_uart_rx_fifo_readable)))
                            : ((3U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                ? (IData)(vlSelf->__PVT__main_uart_status_status)
                                : ((4U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                    ? (IData)(vlSelf->__PVT__main_uart_pending_status)
                                    : ((5U == (0x1ffU 
                                               & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                        ? (IData)(vlSelf->__PVT__main_uart_enable_storage)
                                        : ((6U == (0x1ffU 
                                                   & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                            ? (1U & 
                                               (~ (IData)(vlSelf->__PVT__main_uart_tx_fifo_readable)))
                                            : (0x10U 
                                               == (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0)))))))));
        }
    }
    vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = 0U;
    if ((0U == (0x1fU & ((IData)(vlSelf->__PVT__builder_simsoc_adr) 
                         >> 9U)))) {
        if (((((((((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr))) 
                   | (1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                  | (2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                 | (3U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
                | (4U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
               | (5U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
              | (6U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) 
             | (7U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr))))) {
            vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = ((0U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                    ? 0U : ((1U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                             ? (IData)(vlSelf->__PVT__main_control_storage)
                             : ((2U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                 ? vlSelf->__PVT__main_instruction_storage
                                 : ((3U == (0x1ffU 
                                            & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                     ? vlSelf->__PVT__main_src_storage
                                     : ((4U == (0x1ffU 
                                                & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                         ? vlSelf->__PVT__main_dst_storage
                                         : ((5U == 
                                             (0x1ffU 
                                              & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                             ? vlSelf->__PVT__main_length_storage
                                             : ((6U 
                                                 == 
                                                 (0x1ffU 
                                                  & (IData)(vlSelf->__PVT__builder_simsoc_adr)))
                                                 ? (IData)(vlSelf->__PVT__main_enable_storage)
                                                 : vlSelf->__PVT__main_input_storage)))))));
        } else if ((8U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->__PVT__main_output_storage;
        } else if ((9U == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->__PVT__main_imm_storage;
        } else if ((0xaU == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->__PVT__main_done_status;
        } else if ((0xbU == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->__PVT__main_offset;
        } else if ((0xcU == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                = vlSelf->__PVT__main_core_counter;
        } else if ((0xdU == (0x1ffU & (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
            vlSelf->__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r = 0U;
        }
    }
}

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__5(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__5\n"); );
    // Body
    if (vlSelf->__Vdlyvset__storage_1__v0) {
        vlSelf->__PVT__storage_1[vlSelf->__Vdlyvdim0__storage_1__v0] 
            = vlSelf->__Vdlyvval__storage_1__v0;
    }
    vlSelf->__PVT__main_uart_rx_fifo_consume = vlSelf->__Vdly__main_uart_rx_fifo_consume;
    if (vlSelf->__Vdlyvset__storage__v0) {
        vlSelf->__PVT__storage[vlSelf->__Vdlyvdim0__storage__v0] 
            = vlSelf->__Vdlyvval__storage__v0;
    }
    vlSelf->__PVT__main_uart_tx_fifo_consume = vlSelf->__Vdly__main_uart_tx_fifo_consume;
    vlSelf->__PVT__main_bus_errors = vlSelf->__Vdly__main_bus_errors;
    vlSelf->__PVT__main_uart_rx_fifo_level0 = vlSelf->__Vdly__main_uart_rx_fifo_level0;
    vlSelf->__PVT__main_core_counter = vlSelf->__Vdly__main_core_counter;
    vlSelf->__PVT__main_ram_bus_ram_bus_ack = vlSelf->__Vdly__main_ram_bus_ram_bus_ack;
    vlSelf->__PVT__main_simsoc_ram_bus_ack = vlSelf->__Vdly__main_simsoc_ram_bus_ack;
    if (vlSelf->__Vdlyvset__sram__v0) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v0))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v0]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v0) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v0))));
    }
    if (vlSelf->__Vdlyvset__sram__v1) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v1))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v1]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v1) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v1))));
    }
    if (vlSelf->__Vdlyvset__sram__v2) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v2))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v2]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v2) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v2))));
    }
    if (vlSelf->__Vdlyvset__sram__v3) {
        vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSelf->__Vdlyvlsb__sram__v3))) 
                & vlSelf->__PVT__sram[vlSelf->__Vdlyvdim0__sram__v3]) 
               | (0xffffffffULL & ((IData)(vlSelf->__Vdlyvval__sram__v3) 
                                   << (IData)(vlSelf->__Vdlyvlsb__sram__v3))));
    }
    vlSelf->__PVT__builder_grant = vlSelf->__Vdly__builder_grant;
    vlSelf->__PVT__main_uart_rx_fifo_wrport_adr = vlSelf->__PVT__main_uart_rx_fifo_produce;
    vlSelf->__PVT__main_uart_tx_fifo_wrport_adr = vlSelf->__PVT__main_uart_tx_fifo_produce;
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSelf->__PVT__storage_1_dat1) 
                 >> 9U));
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSelf->__PVT__storage_1_dat1) 
                 >> 8U));
    vlSelf->__PVT__main_uart_rx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSelf->__PVT__storage_1_dat1));
    if (vlSelf->__PVT__main_dma_reader_source_valid) {
        vlSelf->__PVT__main_core_data = vlSelf->__PVT__main_dma_reader_source_payload_data;
    }
    vlSelf->__PVT__main_uart_tx_clear = 0U;
    if (((IData)(vlSelf->__PVT__main_uart_pending_re) 
         & (IData)(vlSelf->__PVT__main_uart_pending_r))) {
        vlSelf->__PVT__main_uart_tx_clear = 1U;
    }
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_last 
        = (1U & ((IData)(vlSelf->__PVT__storage_dat1) 
                 >> 9U));
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_first 
        = (1U & ((IData)(vlSelf->__PVT__storage_dat1) 
                 >> 8U));
    vlSelf->__PVT__main_uart_tx_fifo_fifo_out_payload_data 
        = (0xffU & (IData)(vlSelf->__PVT__storage_dat1));
    vlSelf->__PVT__builder_simsoc_resetinserter_next_state 
        = vlSelf->__PVT__builder_simsoc_resetinserter_state;
    if ((2U != (IData)(vlSelf->__PVT__builder_simsoc_resetinserter_state))) {
        vlSelf->__PVT__builder_simsoc_resetinserter_next_state = 1U;
    }
    vlSelf->__PVT__main_done_status = 0U;
    if ((2U == (IData)(vlSelf->__PVT__builder_simsoc_resetinserter_state))) {
        vlSelf->__PVT__main_done_status = 1U;
    }
    vlSelf->__PVT__main_uart_tx_trigger_d = (0x10U 
                                             != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0));
    vlSelf->__PVT__main_uart_pending_status = (((IData)(vlSelf->__PVT__main_uart_rx_pending) 
                                                << 1U) 
                                               | (IData)(vlSelf->__PVT__main_uart_tx_pending));
    vlSelf->__PVT__main_uart_rx_trigger_d = vlSelf->__PVT__main_uart_rx_fifo_readable;
    vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r = 0U;
    if (vlSelf->__PVT__builder_csr_bankarray_sel_r) {
        vlSelf->__PVT__builder_csr_bankarray_sram_bus_dat_r 
            = ((0x24U >= (IData)(vlSelf->__PVT__mem_adr0))
                ? vlSelf->__PVT__mem[vlSelf->__PVT__mem_adr0]
                : 0U);
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank1_scratch0_re) {
        vlSelf->__PVT__main_scratch_storage = vlSelf->__PVT__builder_simsoc_dat_w;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank1_reset0_re) {
        vlSelf->__PVT__main_reset_storage = (3U & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    vlSelf->__PVT__main_uart_rx_fifo_syncfifo_writable 
        = (0x10U != (IData)(vlSelf->__PVT__main_uart_rx_fifo_level0));
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re) {
        vlSelf->__PVT__main_uart_enable_storage = (3U 
                                                   & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    if (vlSelf->__PVT__main_uart_tx_fifo_syncfifo_re) {
        vlSelf->__PVT__main_uart_tx_fifo_readable = 1U;
    } else if (vlSymsp->TOP.serial_source_ready) {
        vlSelf->__PVT__main_uart_tx_fifo_readable = 0U;
    }
    if (vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_re) {
        vlSelf->__PVT__main_control_storage = (3U & vlSelf->__PVT__builder_simsoc_dat_w);
    }
    if (vlSelf->__PVT__main_int_rst) {
        vlSelf->__PVT__main_core_data = 0U;
        vlSelf->__PVT__main_uart_tx_trigger_d = 0U;
        vlSelf->__PVT__main_uart_rx_trigger_d = 0U;
        vlSelf->__PVT__main_scratch_storage = 0x12345678U;
        vlSelf->__PVT__main_reset_storage = 0U;
        vlSelf->__PVT__main_uart_enable_storage = 0U;
        vlSelf->__PVT__main_uart_tx_fifo_readable = 0U;
        vlSelf->__PVT__main_control_storage = 0U;
    }
}

VL_INLINE_OPT void Vsim_sim___sequent__TOP__sim__8(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___sequent__TOP__sim__8\n"); );
    // Body
    vlSelf->__PVT__main_interrupt = 0U;
    vlSelf->__PVT__main_interrupt = ((0xfffffffcU & vlSelf->__PVT__main_interrupt) 
                                     | ((((IData)(vlSelf->__PVT__main_timer_zero_pending) 
                                          & (IData)(vlSelf->__PVT__main_timer_enable_storage)) 
                                         << 1U) | (1U 
                                                   & (((IData)(vlSelf->__PVT__main_uart_pending_status) 
                                                       & (IData)(vlSelf->__PVT__main_uart_enable_storage)) 
                                                      | (((IData)(vlSelf->__PVT__main_uart_pending_status) 
                                                          & (IData)(vlSelf->__PVT__main_uart_enable_storage)) 
                                                         >> 1U)))));
    if ((0U == (IData)(vlSelf->__PVT__builder_grant))) {
        vlSelf->__PVT__builder_array_muxed1 = 0U;
        vlSelf->__PVT__builder_array_muxed6 = ((7U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                                                ? 7U
                                                : 2U);
        vlSelf->__PVT__builder_array_muxed0 = ((0x3ffffff8U 
                                                & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                                   >> 2U)) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR));
        vlSelf->__PVT__builder_array_muxed2 = 0xfU;
        vlSelf->__PVT__builder_array_muxed4 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB;
        vlSelf->__PVT__builder_array_muxed3 = vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC;
        vlSelf->__PVT__main_ibus_ack = vlSelf->__PVT__builder_shared_ack;
    } else {
        if ((1U == (IData)(vlSelf->__PVT__builder_grant))) {
            vlSelf->__PVT__builder_array_muxed1 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data;
            vlSelf->__PVT__builder_array_muxed6 = (
                                                   (5U 
                                                    == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                                     ? 7U
                                                     : 2U)
                                                    : 0U);
            vlSelf->__PVT__builder_array_muxed0 = (
                                                   ((5U 
                                                     == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                                     ? 
                                                    ((0xffffffe0U 
                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                                     | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                                        << 2U))
                                                     : 
                                                    (0xfffffffcU 
                                                     & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                                                   >> 2U);
            vlSelf->__PVT__builder_array_muxed2 = ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                                                    ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                                                    : 0xfU);
            vlSelf->__PVT__builder_array_muxed4 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
            vlSelf->__PVT__builder_array_muxed3 = vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid;
        } else {
            vlSelf->__PVT__builder_array_muxed1 = 0U;
            vlSelf->__PVT__builder_array_muxed6 = 0U;
            vlSelf->__PVT__builder_array_muxed0 = 0U;
            vlSelf->__PVT__builder_array_muxed2 = 0xfU;
            vlSelf->__PVT__builder_array_muxed4 = vlSelf->__PVT__main_bus_stb;
            vlSelf->__PVT__builder_array_muxed3 = 0U;
        }
        vlSelf->__PVT__main_ibus_ack = 0U;
    }
    vlSelf->__PVT__builder_shared_dat_r = ((((- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__builder_slave_sel_r)))) 
                                             & vlSelf->__PVT__rom_dat0) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                              >> 1U)))) 
                                               & vlSelf->__PVT__sram
                                               [vlSelf->__PVT__sram_adr0])) 
                                           | ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->__PVT__builder_slave_sel_r) 
                                                             >> 2U)))) 
                                              & vlSelf->__PVT__builder_simsoc_wishbone_dat_r));
    if ((0U == vlSelf->__PVT__builder_count)) {
        vlSelf->__PVT__builder_shared_dat_r = 0xffffffffU;
    }
    vlSelf->__PVT__main_dbus_ack = ((IData)(vlSelf->__PVT__builder_shared_ack) 
                                    & (1U == (IData)(vlSelf->__PVT__builder_grant)));
    vlSelf->__PVT__builder_array_muxed5 = ((0U != (IData)(vlSelf->__PVT__builder_grant)) 
                                           & ((1U != (IData)(vlSelf->__PVT__builder_grant)) 
                                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)));
    vlSelf->__PVT__builder_request = (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid) 
                                       << 1U) | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    vlSelf->__Vcellinp__VexRiscv__reset = (((IData)(vlSelf->__PVT__main_int_rst) 
                                            | (IData)(vlSelf->__PVT__main_soc_rst)) 
                                           | ((IData)(vlSelf->__PVT__main_reset_storage) 
                                              >> 1U));
    vlSelf->__PVT__builder_simsoc_dat_w = 0U;
    vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_wishbonedmareader_state)))) {
        if (((IData)(vlSelf->__PVT__main_bus_stb) & (IData)(vlSelf->__PVT__main_bus_ack))) {
            vlSelf->__PVT__main_dma_reader_data_wishbonedmareader_next_value 
                = ((vlSelf->__PVT__builder_shared_dat_r 
                    << 0x18U) | ((0xff0000U & (vlSelf->__PVT__builder_shared_dat_r 
                                               << 8U)) 
                                 | ((0xff00U & (vlSelf->__PVT__builder_shared_dat_r 
                                                >> 8U)) 
                                    | (vlSelf->__PVT__builder_shared_dat_r 
                                       >> 0x18U))));
        }
    }
    vlSelf->__PVT__builder_slave_sel = 0U;
    vlSelf->__PVT__builder_slave_sel = ((4U & (IData)(vlSelf->__PVT__builder_slave_sel)) 
                                        | (((0x8000U 
                                             == (0x7ffffU 
                                                 & (vlSelf->__PVT__builder_array_muxed0 
                                                    >> 0xbU))) 
                                            << 1U) 
                                           | (0U == 
                                              (0x7fffU 
                                               & (vlSelf->__PVT__builder_array_muxed0 
                                                  >> 0xfU)))));
    vlSelf->__PVT__builder_slave_sel = ((3U & (IData)(vlSelf->__PVT__builder_slave_sel)) 
                                        | ((0xf000U 
                                            == (0xffffU 
                                                & (vlSelf->__PVT__builder_array_muxed0 
                                                   >> 0xeU))) 
                                           << 2U));
    vlSelf->__PVT__main_ram_bus_ram_bus_cyc = ((IData)(vlSelf->__PVT__builder_array_muxed3) 
                                               & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                                                  >> 1U));
    vlSelf->__PVT__builder_simsoc_wishbone_cyc = ((IData)(vlSelf->__PVT__builder_array_muxed3) 
                                                  & ((IData)(vlSelf->__PVT__builder_slave_sel) 
                                                     >> 2U));
    vlSelf->__PVT__main_ram_we = 0U;
    vlSelf->__PVT__main_ram_we = ((0xeU & (IData)(vlSelf->__PVT__main_ram_we)) 
                                  | ((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
                                       & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
                                      & (IData)(vlSelf->__PVT__builder_array_muxed5)) 
                                     & (IData)(vlSelf->__PVT__builder_array_muxed2)));
    vlSelf->__PVT__main_ram_we = ((0xdU & (IData)(vlSelf->__PVT__main_ram_we)) 
                                  | (0xfffffffeU & 
                                     (((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
                                         & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
                                        & (IData)(vlSelf->__PVT__builder_array_muxed5)) 
                                       << 1U) & (IData)(vlSelf->__PVT__builder_array_muxed2))));
    vlSelf->__PVT__main_ram_we = ((0xbU & (IData)(vlSelf->__PVT__main_ram_we)) 
                                  | (0xfffffffcU & 
                                     (((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
                                         & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
                                        & (IData)(vlSelf->__PVT__builder_array_muxed5)) 
                                       << 2U) & (IData)(vlSelf->__PVT__builder_array_muxed2))));
    vlSelf->__PVT__main_ram_we = ((7U & (IData)(vlSelf->__PVT__main_ram_we)) 
                                  | (0xfffffff8U & 
                                     (((((IData)(vlSelf->__PVT__main_ram_bus_ram_bus_cyc) 
                                         & (IData)(vlSelf->__PVT__builder_array_muxed4)) 
                                        & (IData)(vlSelf->__PVT__builder_array_muxed5)) 
                                       << 3U) & (IData)(vlSelf->__PVT__builder_array_muxed2))));
    if (vlSelf->__PVT__builder_simsoc_state) {
        vlSelf->__PVT__builder_simsoc_next_state = 1U;
        vlSelf->__PVT__builder_simsoc_next_state = 0U;
    } else {
        vlSelf->__PVT__builder_simsoc_next_state = 0U;
        if (((IData)(vlSelf->__PVT__builder_simsoc_wishbone_cyc) 
             & (IData)(vlSelf->__PVT__builder_array_muxed4))) {
            vlSelf->__PVT__builder_simsoc_next_state = 1U;
        }
    }
    vlSelf->__PVT__builder_simsoc_adr = 0U;
    vlSelf->__PVT__builder_simsoc_we = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_state)))) {
        vlSelf->__PVT__builder_simsoc_dat_w = vlSelf->__PVT__builder_array_muxed1;
        if (((IData)(vlSelf->__PVT__builder_simsoc_wishbone_cyc) 
             & (IData)(vlSelf->__PVT__builder_array_muxed4))) {
            vlSelf->__PVT__builder_simsoc_adr = (0x3fffU 
                                                 & vlSelf->__PVT__builder_array_muxed0);
            vlSelf->__PVT__builder_simsoc_we = ((IData)(vlSelf->__PVT__builder_array_muxed5) 
                                                & (0U 
                                                   != (IData)(vlSelf->__PVT__builder_array_muxed2)));
        }
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_we = 0U;
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_re = 0U;
    if ((IData)((0U == (IData)(vlSelf->__PVT__builder_simsoc_adr)))) {
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_we 
            = (1U & (~ (IData)(vlSelf->__PVT__builder_simsoc_we)));
        vlSelf->__PVT__builder_csr_bankarray_csrbank0_status_re 
            = vlSelf->__PVT__builder_simsoc_we;
    }
    vlSelf->__PVT__builder_csr_bankarray_csrbank0_control0_we = 0U;
}

VL_INLINE_OPT void Vsim_sim___combo__TOP__sim__0(Vsim_sim* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsim_sim___combo__TOP__sim__0\n"); );
    // Body
    vlSelf->__PVT__main_uart_tx_fifo_syncfifo_re = 
        ((0U != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)) 
         & ((~ (IData)(vlSelf->__PVT__main_uart_tx_fifo_readable)) 
            | (IData)(vlSymsp->TOP.serial_source_ready)));
    vlSelf->__PVT__main_uart_tx_fifo_do_read = ((0U 
                                                 != (IData)(vlSelf->__PVT__main_uart_tx_fifo_level0)) 
                                                & (IData)(vlSelf->__PVT__main_uart_tx_fifo_syncfifo_re));
}
