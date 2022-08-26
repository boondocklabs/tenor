// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsim__Syms.h"


VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__0(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+938,"sim_trace", false,-1);
    tracep->declBit(c+939,"sys_clk", false,-1);
    tracep->declBit(c+940,"serial_source_valid", false,-1);
    tracep->declBit(c+941,"serial_source_ready", false,-1);
    tracep->declBus(c+942,"serial_source_data", false,-1, 7,0);
    tracep->declBit(c+943,"serial_sink_valid", false,-1);
    tracep->declBit(c+944,"serial_sink_ready", false,-1);
    tracep->declBus(c+945,"serial_sink_data", false,-1, 7,0);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__0(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+996,"sim_trace", false,-1);
    tracep->declBit(c+939,"sys_clk", false,-1);
    tracep->declBit(c+3,"serial_source_valid", false,-1);
    tracep->declBit(c+941,"serial_source_ready", false,-1);
    tracep->declBus(c+4,"serial_source_data", false,-1, 7,0);
    tracep->declBit(c+943,"serial_sink_valid", false,-1);
    tracep->declBit(c+5,"serial_sink_ready", false,-1);
    tracep->declBus(c+945,"serial_sink_data", false,-1, 7,0);
    tracep->declBit(c+939,"sys_clk_1", false,-1);
    tracep->declBit(c+6,"sys_rst", false,-1);
    tracep->declBit(c+939,"por_clk", false,-1);
    tracep->declBit(c+6,"main_int_rst", false,-1);
    tracep->declBit(c+7,"main_soc_rst", false,-1);
    tracep->declBit(c+8,"main_cpu_rst", false,-1);
    tracep->declBus(c+9,"main_reset_storage", false,-1, 1,0);
    tracep->declBit(c+10,"main_reset_re", false,-1);
    tracep->declBus(c+11,"main_scratch_storage", false,-1, 31,0);
    tracep->declBit(c+12,"main_scratch_re", false,-1);
    tracep->declBus(c+13,"main_bus_errors_status", false,-1, 31,0);
    tracep->declBit(c+14,"main_bus_errors_we", false,-1);
    tracep->declBit(c+15,"main_bus_errors_re", false,-1);
    tracep->declBit(c+16,"main_bus_error", false,-1);
    tracep->declBus(c+13,"main_bus_errors", false,-1, 31,0);
    tracep->declBit(c+17,"main_reset", false,-1);
    tracep->declBus(c+18,"main_interrupt", false,-1, 31,0);
    tracep->declBus(c+19,"main_ibus_adr", false,-1, 29,0);
    tracep->declBus(c+997,"main_ibus_dat_w", false,-1, 31,0);
    tracep->declBus(c+20,"main_ibus_dat_r", false,-1, 31,0);
    tracep->declBus(c+998,"main_ibus_sel", false,-1, 3,0);
    tracep->declBit(c+21,"main_ibus_cyc", false,-1);
    tracep->declBit(c+22,"main_ibus_stb", false,-1);
    tracep->declBit(c+23,"main_ibus_ack", false,-1);
    tracep->declBit(c+999,"main_ibus_we", false,-1);
    tracep->declBus(c+24,"main_ibus_cti", false,-1, 2,0);
    tracep->declBus(c+1000,"main_ibus_bte", false,-1, 1,0);
    tracep->declBit(c+999,"main_ibus_err", false,-1);
    tracep->declBus(c+25,"main_dbus_adr", false,-1, 29,0);
    tracep->declBus(c+26,"main_dbus_dat_w", false,-1, 31,0);
    tracep->declBus(c+20,"main_dbus_dat_r", false,-1, 31,0);
    tracep->declBus(c+27,"main_dbus_sel", false,-1, 3,0);
    tracep->declBit(c+28,"main_dbus_cyc", false,-1);
    tracep->declBit(c+28,"main_dbus_stb", false,-1);
    tracep->declBit(c+29,"main_dbus_ack", false,-1);
    tracep->declBit(c+30,"main_dbus_we", false,-1);
    tracep->declBus(c+31,"main_dbus_cti", false,-1, 2,0);
    tracep->declBus(c+1000,"main_dbus_bte", false,-1, 1,0);
    tracep->declBit(c+999,"main_dbus_err", false,-1);
    tracep->declBus(c+997,"main_vexriscv", false,-1, 31,0);
    tracep->declBus(c+32,"main_simsoc_ram_bus_adr", false,-1, 29,0);
    tracep->declBus(c+33,"main_simsoc_ram_bus_dat_w", false,-1, 31,0);
    tracep->declBus(c+34,"main_simsoc_ram_bus_dat_r", false,-1, 31,0);
    tracep->declBus(c+35,"main_simsoc_ram_bus_sel", false,-1, 3,0);
    tracep->declBit(c+36,"main_simsoc_ram_bus_cyc", false,-1);
    tracep->declBit(c+37,"main_simsoc_ram_bus_stb", false,-1);
    tracep->declBit(c+38,"main_simsoc_ram_bus_ack", false,-1);
    tracep->declBit(c+39,"main_simsoc_ram_bus_we", false,-1);
    tracep->declBus(c+40,"main_simsoc_ram_bus_cti", false,-1, 2,0);
    tracep->declBus(c+1,"main_simsoc_ram_bus_bte", false,-1, 1,0);
    tracep->declBit(c+999,"main_simsoc_ram_bus_err", false,-1);
    tracep->declBit(c+999,"main_simsoc_adr_burst", false,-1);
    tracep->declBus(c+41,"main_simsoc_adr", false,-1, 14,0);
    tracep->declBus(c+34,"main_simsoc_dat_r", false,-1, 31,0);
    tracep->declBus(c+32,"main_ram_bus_ram_bus_adr", false,-1, 29,0);
    tracep->declBus(c+33,"main_ram_bus_ram_bus_dat_w", false,-1, 31,0);
    tracep->declBus(c+42,"main_ram_bus_ram_bus_dat_r", false,-1, 31,0);
    tracep->declBus(c+35,"main_ram_bus_ram_bus_sel", false,-1, 3,0);
    tracep->declBit(c+43,"main_ram_bus_ram_bus_cyc", false,-1);
    tracep->declBit(c+37,"main_ram_bus_ram_bus_stb", false,-1);
    tracep->declBit(c+44,"main_ram_bus_ram_bus_ack", false,-1);
    tracep->declBit(c+39,"main_ram_bus_ram_bus_we", false,-1);
    tracep->declBus(c+40,"main_ram_bus_ram_bus_cti", false,-1, 2,0);
    tracep->declBus(c+1,"main_ram_bus_ram_bus_bte", false,-1, 1,0);
    tracep->declBit(c+999,"main_ram_bus_ram_bus_err", false,-1);
    tracep->declBit(c+999,"main_ram_adr_burst", false,-1);
    tracep->declBus(c+45,"main_ram_adr", false,-1, 10,0);
    tracep->declBus(c+42,"main_ram_dat_r", false,-1, 31,0);
    tracep->declBus(c+46,"main_ram_we", false,-1, 3,0);
    tracep->declBus(c+33,"main_ram_dat_w", false,-1, 31,0);
    tracep->declBit(c+3,"main_sink_valid", false,-1);
    tracep->declBit(c+941,"main_sink_ready", false,-1);
    tracep->declBit(c+47,"main_sink_first", false,-1);
    tracep->declBit(c+48,"main_sink_last", false,-1);
    tracep->declBus(c+4,"main_sink_payload_data", false,-1, 7,0);
    tracep->declBit(c+943,"main_source_valid", false,-1);
    tracep->declBit(c+5,"main_source_ready", false,-1);
    tracep->declBit(c+999,"main_source_first", false,-1);
    tracep->declBit(c+999,"main_source_last", false,-1);
    tracep->declBus(c+945,"main_source_payload_data", false,-1, 7,0);
    tracep->declBit(c+49,"main_uart_rxtx_re", false,-1);
    tracep->declBus(c+50,"main_uart_rxtx_r", false,-1, 7,0);
    tracep->declBit(c+51,"main_uart_rxtx_we", false,-1);
    tracep->declBus(c+52,"main_uart_rxtx_w", false,-1, 7,0);
    tracep->declBit(c+53,"main_uart_txfull_status", false,-1);
    tracep->declBit(c+54,"main_uart_txfull_we", false,-1);
    tracep->declBit(c+55,"main_uart_txfull_re", false,-1);
    tracep->declBit(c+56,"main_uart_rxempty_status", false,-1);
    tracep->declBit(c+57,"main_uart_rxempty_we", false,-1);
    tracep->declBit(c+58,"main_uart_rxempty_re", false,-1);
    tracep->declBit(c+59,"main_uart_irq", false,-1);
    tracep->declBit(c+60,"main_uart_tx_status", false,-1);
    tracep->declBit(c+61,"main_uart_tx_pending", false,-1);
    tracep->declBit(c+60,"main_uart_tx_trigger", false,-1);
    tracep->declBit(c+62,"main_uart_tx_clear", false,-1);
    tracep->declBit(c+63,"main_uart_tx_trigger_d", false,-1);
    tracep->declBit(c+64,"main_uart_rx_status", false,-1);
    tracep->declBit(c+65,"main_uart_rx_pending", false,-1);
    tracep->declBit(c+64,"main_uart_rx_trigger", false,-1);
    tracep->declBit(c+66,"main_uart_rx_clear", false,-1);
    tracep->declBit(c+67,"main_uart_rx_trigger_d", false,-1);
    tracep->declBit(c+60,"main_uart_tx0", false,-1);
    tracep->declBit(c+64,"main_uart_rx0", false,-1);
    tracep->declBus(c+68,"main_uart_status_status", false,-1, 1,0);
    tracep->declBit(c+69,"main_uart_status_we", false,-1);
    tracep->declBit(c+70,"main_uart_status_re", false,-1);
    tracep->declBit(c+61,"main_uart_tx1", false,-1);
    tracep->declBit(c+65,"main_uart_rx1", false,-1);
    tracep->declBus(c+71,"main_uart_pending_status", false,-1, 1,0);
    tracep->declBit(c+72,"main_uart_pending_we", false,-1);
    tracep->declBit(c+73,"main_uart_pending_re", false,-1);
    tracep->declBus(c+74,"main_uart_pending_r", false,-1, 1,0);
    tracep->declBit(c+75,"main_uart_tx2", false,-1);
    tracep->declBit(c+76,"main_uart_rx2", false,-1);
    tracep->declBus(c+77,"main_uart_enable_storage", false,-1, 1,0);
    tracep->declBit(c+78,"main_uart_enable_re", false,-1);
    tracep->declBit(c+79,"main_uart_txempty_status", false,-1);
    tracep->declBit(c+80,"main_uart_txempty_we", false,-1);
    tracep->declBit(c+81,"main_uart_txempty_re", false,-1);
    tracep->declBit(c+82,"main_uart_rxfull_status", false,-1);
    tracep->declBit(c+83,"main_uart_rxfull_we", false,-1);
    tracep->declBit(c+84,"main_uart_rxfull_re", false,-1);
    tracep->declBit(c+943,"main_uart_uart_sink_valid", false,-1);
    tracep->declBit(c+5,"main_uart_uart_sink_ready", false,-1);
    tracep->declBit(c+999,"main_uart_uart_sink_first", false,-1);
    tracep->declBit(c+999,"main_uart_uart_sink_last", false,-1);
    tracep->declBus(c+945,"main_uart_uart_sink_payload_data", false,-1, 7,0);
    tracep->declBit(c+3,"main_uart_uart_source_valid", false,-1);
    tracep->declBit(c+941,"main_uart_uart_source_ready", false,-1);
    tracep->declBit(c+47,"main_uart_uart_source_first", false,-1);
    tracep->declBit(c+48,"main_uart_uart_source_last", false,-1);
    tracep->declBus(c+4,"main_uart_uart_source_payload_data", false,-1, 7,0);
    tracep->declBit(c+49,"main_uart_tx_fifo_sink_valid", false,-1);
    tracep->declBit(c+60,"main_uart_tx_fifo_sink_ready", false,-1);
    tracep->declBit(c+999,"main_uart_tx_fifo_sink_first", false,-1);
    tracep->declBit(c+999,"main_uart_tx_fifo_sink_last", false,-1);
    tracep->declBus(c+50,"main_uart_tx_fifo_sink_payload_data", false,-1, 7,0);
    tracep->declBit(c+3,"main_uart_tx_fifo_source_valid", false,-1);
    tracep->declBit(c+941,"main_uart_tx_fifo_source_ready", false,-1);
    tracep->declBit(c+47,"main_uart_tx_fifo_source_first", false,-1);
    tracep->declBit(c+48,"main_uart_tx_fifo_source_last", false,-1);
    tracep->declBus(c+4,"main_uart_tx_fifo_source_payload_data", false,-1, 7,0);
    tracep->declBit(c+941,"main_uart_tx_fifo_re", false,-1);
    tracep->declBit(c+3,"main_uart_tx_fifo_readable", false,-1);
    tracep->declBit(c+49,"main_uart_tx_fifo_syncfifo_we", false,-1);
    tracep->declBit(c+60,"main_uart_tx_fifo_syncfifo_writable", false,-1);
    tracep->declBit(c+946,"main_uart_tx_fifo_syncfifo_re", false,-1);
    tracep->declBit(c+85,"main_uart_tx_fifo_syncfifo_readable", false,-1);
    tracep->declBus(c+86,"main_uart_tx_fifo_syncfifo_din", false,-1, 9,0);
    tracep->declBus(c+87,"main_uart_tx_fifo_syncfifo_dout", false,-1, 9,0);
    tracep->declBus(c+88,"main_uart_tx_fifo_level0", false,-1, 4,0);
    tracep->declBit(c+999,"main_uart_tx_fifo_replace", false,-1);
    tracep->declBus(c+89,"main_uart_tx_fifo_produce", false,-1, 3,0);
    tracep->declBus(c+90,"main_uart_tx_fifo_consume", false,-1, 3,0);
    tracep->declBus(c+91,"main_uart_tx_fifo_wrport_adr", false,-1, 3,0);
    tracep->declBus(c+92,"main_uart_tx_fifo_wrport_dat_r", false,-1, 9,0);
    tracep->declBit(c+93,"main_uart_tx_fifo_wrport_we", false,-1);
    tracep->declBus(c+86,"main_uart_tx_fifo_wrport_dat_w", false,-1, 9,0);
    tracep->declBit(c+947,"main_uart_tx_fifo_do_read", false,-1);
    tracep->declBus(c+90,"main_uart_tx_fifo_rdport_adr", false,-1, 3,0);
    tracep->declBus(c+87,"main_uart_tx_fifo_rdport_dat_r", false,-1, 9,0);
    tracep->declBit(c+947,"main_uart_tx_fifo_rdport_re", false,-1);
    tracep->declBus(c+94,"main_uart_tx_fifo_level1", false,-1, 4,0);
    tracep->declBus(c+50,"main_uart_tx_fifo_fifo_in_payload_data", false,-1, 7,0);
    tracep->declBit(c+999,"main_uart_tx_fifo_fifo_in_first", false,-1);
    tracep->declBit(c+999,"main_uart_tx_fifo_fifo_in_last", false,-1);
    tracep->declBus(c+4,"main_uart_tx_fifo_fifo_out_payload_data", false,-1, 7,0);
    tracep->declBit(c+47,"main_uart_tx_fifo_fifo_out_first", false,-1);
    tracep->declBit(c+48,"main_uart_tx_fifo_fifo_out_last", false,-1);
    tracep->declBit(c+943,"main_uart_rx_fifo_sink_valid", false,-1);
    tracep->declBit(c+5,"main_uart_rx_fifo_sink_ready", false,-1);
    tracep->declBit(c+999,"main_uart_rx_fifo_sink_first", false,-1);
    tracep->declBit(c+999,"main_uart_rx_fifo_sink_last", false,-1);
    tracep->declBus(c+945,"main_uart_rx_fifo_sink_payload_data", false,-1, 7,0);
    tracep->declBit(c+64,"main_uart_rx_fifo_source_valid", false,-1);
    tracep->declBit(c+66,"main_uart_rx_fifo_source_ready", false,-1);
    tracep->declBit(c+95,"main_uart_rx_fifo_source_first", false,-1);
    tracep->declBit(c+96,"main_uart_rx_fifo_source_last", false,-1);
    tracep->declBus(c+52,"main_uart_rx_fifo_source_payload_data", false,-1, 7,0);
    tracep->declBit(c+66,"main_uart_rx_fifo_re", false,-1);
    tracep->declBit(c+64,"main_uart_rx_fifo_readable", false,-1);
    tracep->declBit(c+943,"main_uart_rx_fifo_syncfifo_we", false,-1);
    tracep->declBit(c+5,"main_uart_rx_fifo_syncfifo_writable", false,-1);
    tracep->declBit(c+97,"main_uart_rx_fifo_syncfifo_re", false,-1);
    tracep->declBit(c+98,"main_uart_rx_fifo_syncfifo_readable", false,-1);
    tracep->declBus(c+948,"main_uart_rx_fifo_syncfifo_din", false,-1, 9,0);
    tracep->declBus(c+99,"main_uart_rx_fifo_syncfifo_dout", false,-1, 9,0);
    tracep->declBus(c+100,"main_uart_rx_fifo_level0", false,-1, 4,0);
    tracep->declBit(c+999,"main_uart_rx_fifo_replace", false,-1);
    tracep->declBus(c+101,"main_uart_rx_fifo_produce", false,-1, 3,0);
    tracep->declBus(c+102,"main_uart_rx_fifo_consume", false,-1, 3,0);
    tracep->declBus(c+103,"main_uart_rx_fifo_wrport_adr", false,-1, 3,0);
    tracep->declBus(c+104,"main_uart_rx_fifo_wrport_dat_r", false,-1, 9,0);
    tracep->declBit(c+949,"main_uart_rx_fifo_wrport_we", false,-1);
    tracep->declBus(c+948,"main_uart_rx_fifo_wrport_dat_w", false,-1, 9,0);
    tracep->declBit(c+105,"main_uart_rx_fifo_do_read", false,-1);
    tracep->declBus(c+102,"main_uart_rx_fifo_rdport_adr", false,-1, 3,0);
    tracep->declBus(c+99,"main_uart_rx_fifo_rdport_dat_r", false,-1, 9,0);
    tracep->declBit(c+105,"main_uart_rx_fifo_rdport_re", false,-1);
    tracep->declBus(c+106,"main_uart_rx_fifo_level1", false,-1, 4,0);
    tracep->declBus(c+945,"main_uart_rx_fifo_fifo_in_payload_data", false,-1, 7,0);
    tracep->declBit(c+999,"main_uart_rx_fifo_fifo_in_first", false,-1);
    tracep->declBit(c+999,"main_uart_rx_fifo_fifo_in_last", false,-1);
    tracep->declBus(c+52,"main_uart_rx_fifo_fifo_out_payload_data", false,-1, 7,0);
    tracep->declBit(c+95,"main_uart_rx_fifo_fifo_out_first", false,-1);
    tracep->declBit(c+96,"main_uart_rx_fifo_fifo_out_last", false,-1);
    tracep->declBus(c+107,"main_timer_load_storage", false,-1, 31,0);
    tracep->declBit(c+108,"main_timer_load_re", false,-1);
    tracep->declBus(c+109,"main_timer_reload_storage", false,-1, 31,0);
    tracep->declBit(c+110,"main_timer_reload_re", false,-1);
    tracep->declBit(c+111,"main_timer_en_storage", false,-1);
    tracep->declBit(c+112,"main_timer_en_re", false,-1);
    tracep->declBit(c+113,"main_timer_update_value_storage", false,-1);
    tracep->declBit(c+114,"main_timer_update_value_re", false,-1);
    tracep->declBus(c+115,"main_timer_value_status", false,-1, 31,0);
    tracep->declBit(c+116,"main_timer_value_we", false,-1);
    tracep->declBit(c+117,"main_timer_value_re", false,-1);
    tracep->declBit(c+118,"main_timer_irq", false,-1);
    tracep->declBit(c+119,"main_timer_zero_status", false,-1);
    tracep->declBit(c+120,"main_timer_zero_pending", false,-1);
    tracep->declBit(c+119,"main_timer_zero_trigger", false,-1);
    tracep->declBit(c+121,"main_timer_zero_clear", false,-1);
    tracep->declBit(c+122,"main_timer_zero_trigger_d", false,-1);
    tracep->declBit(c+119,"main_timer_zero0", false,-1);
    tracep->declBit(c+119,"main_timer_status_status", false,-1);
    tracep->declBit(c+123,"main_timer_status_we", false,-1);
    tracep->declBit(c+124,"main_timer_status_re", false,-1);
    tracep->declBit(c+120,"main_timer_zero1", false,-1);
    tracep->declBit(c+120,"main_timer_pending_status", false,-1);
    tracep->declBit(c+125,"main_timer_pending_we", false,-1);
    tracep->declBit(c+126,"main_timer_pending_re", false,-1);
    tracep->declBit(c+127,"main_timer_pending_r", false,-1);
    tracep->declBit(c+128,"main_timer_zero2", false,-1);
    tracep->declBit(c+128,"main_timer_enable_storage", false,-1);
    tracep->declBit(c+129,"main_timer_enable_re", false,-1);
    tracep->declBus(c+130,"main_timer_value", false,-1, 31,0);
    tracep->declBus(c+131,"main_bus_adr", false,-1, 31,0);
    tracep->declBus(c+997,"main_bus_dat_w", false,-1, 31,0);
    tracep->declBus(c+20,"main_bus_dat_r", false,-1, 31,0);
    tracep->declBus(c+132,"main_bus_sel", false,-1, 3,0);
    tracep->declBit(c+133,"main_bus_cyc", false,-1);
    tracep->declBit(c+134,"main_bus_stb", false,-1);
    tracep->declBit(c+135,"main_bus_ack", false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__1(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+136,"main_bus_we", false,-1);
    tracep->declBus(c+1001,"main_bus_cti", false,-1, 2,0);
    tracep->declBus(c+1000,"main_bus_bte", false,-1, 1,0);
    tracep->declBit(c+999,"main_bus_err", false,-1);
    tracep->declBit(c+137,"main_core_sink_valid", false,-1);
    tracep->declBit(c+138,"main_core_sink_ready", false,-1);
    tracep->declBit(c+999,"main_core_sink_first", false,-1);
    tracep->declBit(c+139,"main_core_sink_last", false,-1);
    tracep->declBus(c+140,"main_core_sink_payload_data", false,-1, 31,0);
    tracep->declBit(c+141,"main_core_source_valid", false,-1);
    tracep->declBus(c+142,"main_core_source_payload_data", false,-1, 31,0);
    tracep->declBus(c+143,"main_core_data", false,-1, 31,0);
    tracep->declBus(c+144,"main_core_counter", false,-1, 31,0);
    tracep->declBit(c+999,"main_dma_reader_sink_valid", false,-1);
    tracep->declBit(c+145,"main_dma_reader_sink_ready", false,-1);
    tracep->declBit(c+999,"main_dma_reader_sink_last", false,-1);
    tracep->declBus(c+997,"main_dma_reader_sink_payload_address", false,-1, 31,0);
    tracep->declBit(c+137,"main_dma_reader_source_valid", false,-1);
    tracep->declBit(c+138,"main_dma_reader_source_ready", false,-1);
    tracep->declBit(c+999,"main_dma_reader_source_first", false,-1);
    tracep->declBit(c+139,"main_dma_reader_source_last", false,-1);
    tracep->declBus(c+140,"main_dma_reader_source_payload_data", false,-1, 31,0);
    tracep->declBus(c+146,"main_dma_reader_data", false,-1, 31,0);
    tracep->declBit(c+999,"main_dma_writer_sink_valid", false,-1);
    tracep->declBit(c+135,"main_dma_writer_sink_ready", false,-1);
    tracep->declBus(c+997,"main_dma_writer_sink_payload_address", false,-1, 31,0);
    tracep->declBus(c+997,"main_dma_writer_sink_payload_data", false,-1, 31,0);
    tracep->declBit(c+999,"main_csrfield_busy", false,-1);
    tracep->declBit(c+999,"main_status_status", false,-1);
    tracep->declBit(c+147,"main_status_we", false,-1);
    tracep->declBit(c+148,"main_status_re", false,-1);
    tracep->declBit(c+149,"main_csrfield_enable", false,-1);
    tracep->declBit(c+150,"main_csrfield_reset", false,-1);
    tracep->declBus(c+151,"main_control_storage", false,-1, 1,0);
    tracep->declBit(c+152,"main_control_re", false,-1);
    tracep->declBus(c+153,"main_instruction_storage", false,-1, 31,0);
    tracep->declBit(c+154,"main_instruction_re", false,-1);
    tracep->declBus(c+155,"main_src_storage", false,-1, 31,0);
    tracep->declBit(c+156,"main_src_re", false,-1);
    tracep->declBus(c+157,"main_dst_storage", false,-1, 31,0);
    tracep->declBit(c+158,"main_dst_re", false,-1);
    tracep->declBus(c+159,"main_length_storage", false,-1, 31,0);
    tracep->declBit(c+160,"main_length_re", false,-1);
    tracep->declBit(c+161,"main_enable_storage", false,-1);
    tracep->declBit(c+162,"main_enable_re", false,-1);
    tracep->declBus(c+163,"main_input_storage", false,-1, 31,0);
    tracep->declBit(c+164,"main_input_re", false,-1);
    tracep->declBus(c+165,"main_output_storage", false,-1, 31,0);
    tracep->declBit(c+166,"main_output_re", false,-1);
    tracep->declBus(c+167,"main_imm_storage", false,-1, 31,0);
    tracep->declBit(c+168,"main_imm_re", false,-1);
    tracep->declBit(c+169,"main_done_status", false,-1);
    tracep->declBit(c+170,"main_done_we", false,-1);
    tracep->declBit(c+171,"main_done_re", false,-1);
    tracep->declBus(c+172,"main_offset_status", false,-1, 31,0);
    tracep->declBit(c+173,"main_offset_we", false,-1);
    tracep->declBit(c+174,"main_offset_re", false,-1);
    tracep->declBus(c+144,"main_tick_status", false,-1, 31,0);
    tracep->declBit(c+175,"main_tick_we", false,-1);
    tracep->declBit(c+176,"main_tick_re", false,-1);
    tracep->declBus(c+997,"main_data_status", false,-1, 31,0);
    tracep->declBit(c+177,"main_data_we", false,-1);
    tracep->declBit(c+178,"main_data_re", false,-1);
    tracep->declBit(c+179,"main_fsm_reset", false,-1);
    tracep->declBus(c+180,"main_base", false,-1, 31,0);
    tracep->declBus(c+172,"main_offset", false,-1, 31,0);
    tracep->declBus(c+181,"main_length", false,-1, 31,0);
    tracep->declBus(c+997,"main_data", false,-1, 31,0);
    tracep->declBus(c+182,"builder_simsoc_adr", false,-1, 13,0);
    tracep->declBit(c+183,"builder_simsoc_we", false,-1);
    tracep->declBus(c+184,"builder_simsoc_dat_w", false,-1, 31,0);
    tracep->declBus(c+185,"builder_simsoc_dat_r", false,-1, 31,0);
    tracep->declBus(c+32,"builder_simsoc_wishbone_adr", false,-1, 29,0);
    tracep->declBus(c+33,"builder_simsoc_wishbone_dat_w", false,-1, 31,0);
    tracep->declBus(c+186,"builder_simsoc_wishbone_dat_r", false,-1, 31,0);
    tracep->declBus(c+35,"builder_simsoc_wishbone_sel", false,-1, 3,0);
    tracep->declBit(c+187,"builder_simsoc_wishbone_cyc", false,-1);
    tracep->declBit(c+37,"builder_simsoc_wishbone_stb", false,-1);
    tracep->declBit(c+188,"builder_simsoc_wishbone_ack", false,-1);
    tracep->declBit(c+39,"builder_simsoc_wishbone_we", false,-1);
    tracep->declBus(c+40,"builder_simsoc_wishbone_cti", false,-1, 2,0);
    tracep->declBus(c+1,"builder_simsoc_wishbone_bte", false,-1, 1,0);
    tracep->declBit(c+999,"builder_simsoc_wishbone_err", false,-1);
    tracep->declBus(c+32,"builder_shared_adr", false,-1, 29,0);
    tracep->declBus(c+33,"builder_shared_dat_w", false,-1, 31,0);
    tracep->declBus(c+20,"builder_shared_dat_r", false,-1, 31,0);
    tracep->declBus(c+35,"builder_shared_sel", false,-1, 3,0);
    tracep->declBit(c+189,"builder_shared_cyc", false,-1);
    tracep->declBit(c+37,"builder_shared_stb", false,-1);
    tracep->declBit(c+190,"builder_shared_ack", false,-1);
    tracep->declBit(c+39,"builder_shared_we", false,-1);
    tracep->declBus(c+40,"builder_shared_cti", false,-1, 2,0);
    tracep->declBus(c+1,"builder_shared_bte", false,-1, 1,0);
    tracep->declBit(c+999,"builder_shared_err", false,-1);
    tracep->declBus(c+191,"builder_request", false,-1, 2,0);
    tracep->declBus(c+192,"builder_grant", false,-1, 1,0);
    tracep->declBus(c+193,"builder_slave_sel", false,-1, 2,0);
    tracep->declBus(c+194,"builder_slave_sel_r", false,-1, 2,0);
    tracep->declBit(c+16,"builder_error", false,-1);
    tracep->declBit(c+195,"builder_wait", false,-1);
    tracep->declBit(c+196,"builder_done", false,-1);
    tracep->declBus(c+197,"builder_count", false,-1, 19,0);
    tracep->declBus(c+182,"builder_csr_bankarray_interface0_bank_bus_adr", false,-1, 13,0);
    tracep->declBit(c+183,"builder_csr_bankarray_interface0_bank_bus_we", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_interface0_bank_bus_dat_w", false,-1, 31,0);
    tracep->declBus(c+198,"builder_csr_bankarray_interface0_bank_bus_dat_r", false,-1, 31,0);
    tracep->declBit(c+199,"builder_csr_bankarray_csrbank0_status_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank0_status_r", false,-1);
    tracep->declBit(c+147,"builder_csr_bankarray_csrbank0_status_we", false,-1);
    tracep->declBit(c+999,"builder_csr_bankarray_csrbank0_status_w", false,-1);
    tracep->declBit(c+201,"builder_csr_bankarray_csrbank0_control0_re", false,-1);
    tracep->declBus(c+202,"builder_csr_bankarray_csrbank0_control0_r", false,-1, 1,0);
    tracep->declBit(c+203,"builder_csr_bankarray_csrbank0_control0_we", false,-1);
    tracep->declBus(c+151,"builder_csr_bankarray_csrbank0_control0_w", false,-1, 1,0);
    tracep->declBit(c+204,"builder_csr_bankarray_csrbank0_instruction0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_instruction0_r", false,-1, 31,0);
    tracep->declBit(c+205,"builder_csr_bankarray_csrbank0_instruction0_we", false,-1);
    tracep->declBus(c+153,"builder_csr_bankarray_csrbank0_instruction0_w", false,-1, 31,0);
    tracep->declBit(c+206,"builder_csr_bankarray_csrbank0_src0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_src0_r", false,-1, 31,0);
    tracep->declBit(c+207,"builder_csr_bankarray_csrbank0_src0_we", false,-1);
    tracep->declBus(c+155,"builder_csr_bankarray_csrbank0_src0_w", false,-1, 31,0);
    tracep->declBit(c+208,"builder_csr_bankarray_csrbank0_dst0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_dst0_r", false,-1, 31,0);
    tracep->declBit(c+209,"builder_csr_bankarray_csrbank0_dst0_we", false,-1);
    tracep->declBus(c+157,"builder_csr_bankarray_csrbank0_dst0_w", false,-1, 31,0);
    tracep->declBit(c+210,"builder_csr_bankarray_csrbank0_length0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_length0_r", false,-1, 31,0);
    tracep->declBit(c+211,"builder_csr_bankarray_csrbank0_length0_we", false,-1);
    tracep->declBus(c+159,"builder_csr_bankarray_csrbank0_length0_w", false,-1, 31,0);
    tracep->declBit(c+212,"builder_csr_bankarray_csrbank0_enable0_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank0_enable0_r", false,-1);
    tracep->declBit(c+213,"builder_csr_bankarray_csrbank0_enable0_we", false,-1);
    tracep->declBit(c+161,"builder_csr_bankarray_csrbank0_enable0_w", false,-1);
    tracep->declBit(c+214,"builder_csr_bankarray_csrbank0_input0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_input0_r", false,-1, 31,0);
    tracep->declBit(c+215,"builder_csr_bankarray_csrbank0_input0_we", false,-1);
    tracep->declBus(c+163,"builder_csr_bankarray_csrbank0_input0_w", false,-1, 31,0);
    tracep->declBit(c+216,"builder_csr_bankarray_csrbank0_output0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_output0_r", false,-1, 31,0);
    tracep->declBit(c+217,"builder_csr_bankarray_csrbank0_output0_we", false,-1);
    tracep->declBus(c+165,"builder_csr_bankarray_csrbank0_output0_w", false,-1, 31,0);
    tracep->declBit(c+218,"builder_csr_bankarray_csrbank0_imm0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_imm0_r", false,-1, 31,0);
    tracep->declBit(c+219,"builder_csr_bankarray_csrbank0_imm0_we", false,-1);
    tracep->declBus(c+167,"builder_csr_bankarray_csrbank0_imm0_w", false,-1, 31,0);
    tracep->declBit(c+220,"builder_csr_bankarray_csrbank0_done_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank0_done_r", false,-1);
    tracep->declBit(c+170,"builder_csr_bankarray_csrbank0_done_we", false,-1);
    tracep->declBit(c+169,"builder_csr_bankarray_csrbank0_done_w", false,-1);
    tracep->declBit(c+221,"builder_csr_bankarray_csrbank0_offset_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_offset_r", false,-1, 31,0);
    tracep->declBit(c+173,"builder_csr_bankarray_csrbank0_offset_we", false,-1);
    tracep->declBus(c+172,"builder_csr_bankarray_csrbank0_offset_w", false,-1, 31,0);
    tracep->declBit(c+222,"builder_csr_bankarray_csrbank0_tick_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_tick_r", false,-1, 31,0);
    tracep->declBit(c+175,"builder_csr_bankarray_csrbank0_tick_we", false,-1);
    tracep->declBus(c+144,"builder_csr_bankarray_csrbank0_tick_w", false,-1, 31,0);
    tracep->declBit(c+223,"builder_csr_bankarray_csrbank0_data_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank0_data_r", false,-1, 31,0);
    tracep->declBit(c+177,"builder_csr_bankarray_csrbank0_data_we", false,-1);
    tracep->declBus(c+997,"builder_csr_bankarray_csrbank0_data_w", false,-1, 31,0);
    tracep->declBit(c+224,"builder_csr_bankarray_csrbank0_sel", false,-1);
    tracep->declBus(c+182,"builder_csr_bankarray_interface1_bank_bus_adr", false,-1, 13,0);
    tracep->declBit(c+183,"builder_csr_bankarray_interface1_bank_bus_we", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_interface1_bank_bus_dat_w", false,-1, 31,0);
    tracep->declBus(c+225,"builder_csr_bankarray_interface1_bank_bus_dat_r", false,-1, 31,0);
    tracep->declBit(c+226,"builder_csr_bankarray_csrbank1_reset0_re", false,-1);
    tracep->declBus(c+202,"builder_csr_bankarray_csrbank1_reset0_r", false,-1, 1,0);
    tracep->declBit(c+227,"builder_csr_bankarray_csrbank1_reset0_we", false,-1);
    tracep->declBus(c+9,"builder_csr_bankarray_csrbank1_reset0_w", false,-1, 1,0);
    tracep->declBit(c+228,"builder_csr_bankarray_csrbank1_scratch0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank1_scratch0_r", false,-1, 31,0);
    tracep->declBit(c+229,"builder_csr_bankarray_csrbank1_scratch0_we", false,-1);
    tracep->declBus(c+11,"builder_csr_bankarray_csrbank1_scratch0_w", false,-1, 31,0);
    tracep->declBit(c+230,"builder_csr_bankarray_csrbank1_bus_errors_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank1_bus_errors_r", false,-1, 31,0);
    tracep->declBit(c+14,"builder_csr_bankarray_csrbank1_bus_errors_we", false,-1);
    tracep->declBus(c+13,"builder_csr_bankarray_csrbank1_bus_errors_w", false,-1, 31,0);
    tracep->declBit(c+231,"builder_csr_bankarray_csrbank1_sel", false,-1);
    tracep->declBus(c+182,"builder_csr_bankarray_sram_bus_adr", false,-1, 13,0);
    tracep->declBit(c+183,"builder_csr_bankarray_sram_bus_we", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_sram_bus_dat_w", false,-1, 31,0);
    tracep->declBus(c+232,"builder_csr_bankarray_sram_bus_dat_r", false,-1, 31,0);
    tracep->declBus(c+233,"builder_csr_bankarray_adr", false,-1, 5,0);
    tracep->declBus(c+234,"builder_csr_bankarray_dat_r", false,-1, 7,0);
    tracep->declBit(c+235,"builder_csr_bankarray_sel", false,-1);
    tracep->declBit(c+236,"builder_csr_bankarray_sel_r", false,-1);
    tracep->declBus(c+182,"builder_csr_bankarray_interface2_bank_bus_adr", false,-1, 13,0);
    tracep->declBit(c+183,"builder_csr_bankarray_interface2_bank_bus_we", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_interface2_bank_bus_dat_w", false,-1, 31,0);
    tracep->declBus(c+237,"builder_csr_bankarray_interface2_bank_bus_dat_r", false,-1, 31,0);
    tracep->declBit(c+238,"builder_csr_bankarray_csrbank2_load0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank2_load0_r", false,-1, 31,0);
    tracep->declBit(c+239,"builder_csr_bankarray_csrbank2_load0_we", false,-1);
    tracep->declBus(c+107,"builder_csr_bankarray_csrbank2_load0_w", false,-1, 31,0);
    tracep->declBit(c+240,"builder_csr_bankarray_csrbank2_reload0_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank2_reload0_r", false,-1, 31,0);
    tracep->declBit(c+241,"builder_csr_bankarray_csrbank2_reload0_we", false,-1);
    tracep->declBus(c+109,"builder_csr_bankarray_csrbank2_reload0_w", false,-1, 31,0);
    tracep->declBit(c+242,"builder_csr_bankarray_csrbank2_en0_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank2_en0_r", false,-1);
    tracep->declBit(c+243,"builder_csr_bankarray_csrbank2_en0_we", false,-1);
    tracep->declBit(c+111,"builder_csr_bankarray_csrbank2_en0_w", false,-1);
    tracep->declBit(c+244,"builder_csr_bankarray_csrbank2_update_value0_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank2_update_value0_r", false,-1);
    tracep->declBit(c+245,"builder_csr_bankarray_csrbank2_update_value0_we", false,-1);
    tracep->declBit(c+113,"builder_csr_bankarray_csrbank2_update_value0_w", false,-1);
    tracep->declBit(c+246,"builder_csr_bankarray_csrbank2_value_re", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_csrbank2_value_r", false,-1, 31,0);
    tracep->declBit(c+116,"builder_csr_bankarray_csrbank2_value_we", false,-1);
    tracep->declBus(c+115,"builder_csr_bankarray_csrbank2_value_w", false,-1, 31,0);
    tracep->declBit(c+247,"builder_csr_bankarray_csrbank2_ev_status_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank2_ev_status_r", false,-1);
    tracep->declBit(c+123,"builder_csr_bankarray_csrbank2_ev_status_we", false,-1);
    tracep->declBit(c+119,"builder_csr_bankarray_csrbank2_ev_status_w", false,-1);
    tracep->declBit(c+248,"builder_csr_bankarray_csrbank2_ev_pending_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank2_ev_pending_r", false,-1);
    tracep->declBit(c+125,"builder_csr_bankarray_csrbank2_ev_pending_we", false,-1);
    tracep->declBit(c+120,"builder_csr_bankarray_csrbank2_ev_pending_w", false,-1);
    tracep->declBit(c+249,"builder_csr_bankarray_csrbank2_ev_enable0_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank2_ev_enable0_r", false,-1);
    tracep->declBit(c+250,"builder_csr_bankarray_csrbank2_ev_enable0_we", false,-1);
    tracep->declBit(c+128,"builder_csr_bankarray_csrbank2_ev_enable0_w", false,-1);
    tracep->declBit(c+251,"builder_csr_bankarray_csrbank2_sel", false,-1);
    tracep->declBus(c+182,"builder_csr_bankarray_interface3_bank_bus_adr", false,-1, 13,0);
    tracep->declBit(c+183,"builder_csr_bankarray_interface3_bank_bus_we", false,-1);
    tracep->declBus(c+184,"builder_csr_bankarray_interface3_bank_bus_dat_w", false,-1, 31,0);
    tracep->declBus(c+252,"builder_csr_bankarray_interface3_bank_bus_dat_r", false,-1, 31,0);
    tracep->declBit(c+253,"builder_csr_bankarray_csrbank3_txfull_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank3_txfull_r", false,-1);
    tracep->declBit(c+54,"builder_csr_bankarray_csrbank3_txfull_we", false,-1);
    tracep->declBit(c+53,"builder_csr_bankarray_csrbank3_txfull_w", false,-1);
    tracep->declBit(c+254,"builder_csr_bankarray_csrbank3_rxempty_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank3_rxempty_r", false,-1);
    tracep->declBit(c+57,"builder_csr_bankarray_csrbank3_rxempty_we", false,-1);
    tracep->declBit(c+56,"builder_csr_bankarray_csrbank3_rxempty_w", false,-1);
    tracep->declBit(c+255,"builder_csr_bankarray_csrbank3_ev_status_re", false,-1);
    tracep->declBus(c+202,"builder_csr_bankarray_csrbank3_ev_status_r", false,-1, 1,0);
    tracep->declBit(c+69,"builder_csr_bankarray_csrbank3_ev_status_we", false,-1);
    tracep->declBus(c+68,"builder_csr_bankarray_csrbank3_ev_status_w", false,-1, 1,0);
    tracep->declBit(c+256,"builder_csr_bankarray_csrbank3_ev_pending_re", false,-1);
    tracep->declBus(c+202,"builder_csr_bankarray_csrbank3_ev_pending_r", false,-1, 1,0);
    tracep->declBit(c+72,"builder_csr_bankarray_csrbank3_ev_pending_we", false,-1);
    tracep->declBus(c+71,"builder_csr_bankarray_csrbank3_ev_pending_w", false,-1, 1,0);
    tracep->declBit(c+257,"builder_csr_bankarray_csrbank3_ev_enable0_re", false,-1);
    tracep->declBus(c+202,"builder_csr_bankarray_csrbank3_ev_enable0_r", false,-1, 1,0);
    tracep->declBit(c+258,"builder_csr_bankarray_csrbank3_ev_enable0_we", false,-1);
    tracep->declBus(c+77,"builder_csr_bankarray_csrbank3_ev_enable0_w", false,-1, 1,0);
    tracep->declBit(c+259,"builder_csr_bankarray_csrbank3_txempty_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank3_txempty_r", false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__2(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__2\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+80,"builder_csr_bankarray_csrbank3_txempty_we", false,-1);
    tracep->declBit(c+79,"builder_csr_bankarray_csrbank3_txempty_w", false,-1);
    tracep->declBit(c+260,"builder_csr_bankarray_csrbank3_rxfull_re", false,-1);
    tracep->declBit(c+200,"builder_csr_bankarray_csrbank3_rxfull_r", false,-1);
    tracep->declBit(c+83,"builder_csr_bankarray_csrbank3_rxfull_we", false,-1);
    tracep->declBit(c+82,"builder_csr_bankarray_csrbank3_rxfull_w", false,-1);
    tracep->declBit(c+261,"builder_csr_bankarray_csrbank3_sel", false,-1);
    tracep->declBus(c+182,"builder_csr_interconnect_adr", false,-1, 13,0);
    tracep->declBit(c+183,"builder_csr_interconnect_we", false,-1);
    tracep->declBus(c+184,"builder_csr_interconnect_dat_w", false,-1, 31,0);
    tracep->declBus(c+185,"builder_csr_interconnect_dat_r", false,-1, 31,0);
    tracep->declBit(c+262,"builder_simsoc_wishbonedmareader_state", false,-1);
    tracep->declBit(c+263,"builder_simsoc_wishbonedmareader_next_state", false,-1);
    tracep->declBus(c+264,"main_dma_reader_data_wishbonedmareader_next_value", false,-1, 31,0);
    tracep->declBit(c+265,"main_dma_reader_data_wishbonedmareader_next_value_ce", false,-1);
    tracep->declBus(c+266,"builder_simsoc_resetinserter_state", false,-1, 1,0);
    tracep->declBus(c+267,"builder_simsoc_resetinserter_next_state", false,-1, 1,0);
    tracep->declBus(c+268,"main_offset_resetinserter_next_value", false,-1, 31,0);
    tracep->declBit(c+269,"main_offset_resetinserter_next_value_ce", false,-1);
    tracep->declBit(c+270,"builder_simsoc_state", false,-1);
    tracep->declBit(c+271,"builder_simsoc_next_state", false,-1);
    tracep->declBus(c+272,"builder_array_muxed0", false,-1, 31,0);
    tracep->declBus(c+33,"builder_array_muxed1", false,-1, 31,0);
    tracep->declBus(c+35,"builder_array_muxed2", false,-1, 3,0);
    tracep->declBit(c+189,"builder_array_muxed3", false,-1);
    tracep->declBit(c+37,"builder_array_muxed4", false,-1);
    tracep->declBit(c+39,"builder_array_muxed5", false,-1);
    tracep->declBus(c+40,"builder_array_muxed6", false,-1, 2,0);
    tracep->declBus(c+1,"builder_array_muxed7", false,-1, 1,0);
    tracep->declBus(c+34,"rom_dat0", false,-1, 31,0);
    tracep->declBus(c+273,"sram_adr0", false,-1, 10,0);
    tracep->declBus(c+274,"mem_adr0", false,-1, 5,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+275+i*1,"storage", true,(i+0), 9,0);
    }
    tracep->declBus(c+92,"storage_dat0", false,-1, 9,0);
    tracep->declBus(c+87,"storage_dat1", false,-1, 9,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+291+i*1,"storage_1", true,(i+0), 9,0);
    }
    tracep->declBus(c+104,"storage_1_dat0", false,-1, 9,0);
    tracep->declBus(c+99,"storage_1_dat1", false,-1, 9,0);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__0(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+997,"externalResetVector", false,-1, 31,0);
    tracep->declBit(c+999,"timerInterrupt", false,-1);
    tracep->declBit(c+999,"softwareInterrupt", false,-1);
    tracep->declBus(c+18,"externalInterruptArray", false,-1, 31,0);
    tracep->declBit(c+21,"iBusWishbone_CYC", false,-1);
    tracep->declBit(c+22,"iBusWishbone_STB", false,-1);
    tracep->declBit(c+23,"iBusWishbone_ACK", false,-1);
    tracep->declBit(c+999,"iBusWishbone_WE", false,-1);
    tracep->declBus(c+19,"iBusWishbone_ADR", false,-1, 29,0);
    tracep->declBus(c+20,"iBusWishbone_DAT_MISO", false,-1, 31,0);
    tracep->declBus(c+997,"iBusWishbone_DAT_MOSI", false,-1, 31,0);
    tracep->declBus(c+998,"iBusWishbone_SEL", false,-1, 3,0);
    tracep->declBit(c+999,"iBusWishbone_ERR", false,-1);
    tracep->declBus(c+24,"iBusWishbone_CTI", false,-1, 2,0);
    tracep->declBus(c+1000,"iBusWishbone_BTE", false,-1, 1,0);
    tracep->declBit(c+28,"dBusWishbone_CYC", false,-1);
    tracep->declBit(c+28,"dBusWishbone_STB", false,-1);
    tracep->declBit(c+29,"dBusWishbone_ACK", false,-1);
    tracep->declBit(c+30,"dBusWishbone_WE", false,-1);
    tracep->declBus(c+25,"dBusWishbone_ADR", false,-1, 29,0);
    tracep->declBus(c+20,"dBusWishbone_DAT_MISO", false,-1, 31,0);
    tracep->declBus(c+26,"dBusWishbone_DAT_MOSI", false,-1, 31,0);
    tracep->declBus(c+27,"dBusWishbone_SEL", false,-1, 3,0);
    tracep->declBit(c+999,"dBusWishbone_ERR", false,-1);
    tracep->declBus(c+31,"dBusWishbone_CTI", false,-1, 2,0);
    tracep->declBus(c+1000,"dBusWishbone_BTE", false,-1, 1,0);
    tracep->declBit(c+939,"clk", false,-1);
    tracep->declBit(c+307,"reset", false,-1);
    tracep->declBus(c+1000,"ShiftCtrlEnum_DISABLE_1", false,-1, 1,0);
    tracep->declBus(c+1002,"ShiftCtrlEnum_SLL_1", false,-1, 1,0);
    tracep->declBus(c+1003,"ShiftCtrlEnum_SRL_1", false,-1, 1,0);
    tracep->declBus(c+1004,"ShiftCtrlEnum_SRA_1", false,-1, 1,0);
    tracep->declBus(c+1000,"EnvCtrlEnum_NONE", false,-1, 1,0);
    tracep->declBus(c+1002,"EnvCtrlEnum_XRET", false,-1, 1,0);
    tracep->declBus(c+1003,"EnvCtrlEnum_ECALL", false,-1, 1,0);
    tracep->declBus(c+1000,"BranchCtrlEnum_INC", false,-1, 1,0);
    tracep->declBus(c+1002,"BranchCtrlEnum_B", false,-1, 1,0);
    tracep->declBus(c+1003,"BranchCtrlEnum_JAL", false,-1, 1,0);
    tracep->declBus(c+1004,"BranchCtrlEnum_JALR", false,-1, 1,0);
    tracep->declBus(c+1000,"AluBitwiseCtrlEnum_XOR_1", false,-1, 1,0);
    tracep->declBus(c+1002,"AluBitwiseCtrlEnum_OR_1", false,-1, 1,0);
    tracep->declBus(c+1003,"AluBitwiseCtrlEnum_AND_1", false,-1, 1,0);
    tracep->declBus(c+1000,"Src2CtrlEnum_RS", false,-1, 1,0);
    tracep->declBus(c+1002,"Src2CtrlEnum_IMI", false,-1, 1,0);
    tracep->declBus(c+1003,"Src2CtrlEnum_IMS", false,-1, 1,0);
    tracep->declBus(c+1004,"Src2CtrlEnum_PC", false,-1, 1,0);
    tracep->declBus(c+1000,"AluCtrlEnum_ADD_SUB", false,-1, 1,0);
    tracep->declBus(c+1002,"AluCtrlEnum_SLT_SLTU", false,-1, 1,0);
    tracep->declBus(c+1003,"AluCtrlEnum_BITWISE", false,-1, 1,0);
    tracep->declBus(c+1000,"Src1CtrlEnum_RS", false,-1, 1,0);
    tracep->declBus(c+1002,"Src1CtrlEnum_IMU", false,-1, 1,0);
    tracep->declBus(c+1003,"Src1CtrlEnum_PC_INCREMENT", false,-1, 1,0);
    tracep->declBus(c+1004,"Src1CtrlEnum_URS1", false,-1, 1,0);
    tracep->declBit(c+308,"IBusCachedPlugin_cache_io_flush", false,-1);
    tracep->declBit(c+309,"IBusCachedPlugin_cache_io_cpu_prefetch_isValid", false,-1);
    tracep->declBit(c+310,"IBusCachedPlugin_cache_io_cpu_fetch_isValid", false,-1);
    tracep->declBit(c+311,"IBusCachedPlugin_cache_io_cpu_fetch_isStuck", false,-1);
    tracep->declBit(c+1005,"IBusCachedPlugin_cache_io_cpu_fetch_isRemoved", false,-1);
    tracep->declBit(c+312,"IBusCachedPlugin_cache_io_cpu_decode_isValid", false,-1);
    tracep->declBit(c+311,"IBusCachedPlugin_cache_io_cpu_decode_isStuck", false,-1);
    tracep->declBit(c+999,"IBusCachedPlugin_cache_io_cpu_decode_isUser", false,-1);
    tracep->declBit(c+313,"IBusCachedPlugin_cache_io_cpu_fill_valid", false,-1);
    tracep->declBit(c+314,"dataCache_1_io_cpu_execute_isValid", false,-1);
    tracep->declBus(c+315,"dataCache_1_io_cpu_execute_address", false,-1, 31,0);
    tracep->declBit(c+316,"dataCache_1_io_cpu_memory_isValid", false,-1);
    tracep->declBus(c+317,"dataCache_1_io_cpu_memory_address", false,-1, 31,0);
    tracep->declBit(c+318,"dataCache_1_io_cpu_memory_mmuRsp_isIoAccess", false,-1);
    tracep->declBit(c+319,"dataCache_1_io_cpu_writeBack_isValid", false,-1);
    tracep->declBit(c+999,"dataCache_1_io_cpu_writeBack_isUser", false,-1);
    tracep->declBus(c+320,"dataCache_1_io_cpu_writeBack_storeData", false,-1, 31,0);
    tracep->declBus(c+321,"dataCache_1_io_cpu_writeBack_address", false,-1, 31,0);
    tracep->declBit(c+1006,"dataCache_1_io_cpu_writeBack_fence_SW", false,-1);
    tracep->declBit(c+1007,"dataCache_1_io_cpu_writeBack_fence_SR", false,-1);
    tracep->declBit(c+1008,"dataCache_1_io_cpu_writeBack_fence_SO", false,-1);
    tracep->declBit(c+1009,"dataCache_1_io_cpu_writeBack_fence_SI", false,-1);
    tracep->declBit(c+1010,"dataCache_1_io_cpu_writeBack_fence_PW", false,-1);
    tracep->declBit(c+1011,"dataCache_1_io_cpu_writeBack_fence_PR", false,-1);
    tracep->declBit(c+1012,"dataCache_1_io_cpu_writeBack_fence_PO", false,-1);
    tracep->declBit(c+1013,"dataCache_1_io_cpu_writeBack_fence_PI", false,-1);
    tracep->declBus(c+1014,"dataCache_1_io_cpu_writeBack_fence_FM", false,-1, 3,0);
    tracep->declBit(c+322,"dataCache_1_io_cpu_flush_valid", false,-1);
    tracep->declBit(c+323,"dataCache_1_io_cpu_flush_payload_singleLine", false,-1);
    tracep->declBus(c+324,"dataCache_1_io_cpu_flush_payload_lineId", false,-1, 6,0);
    tracep->declBit(c+325,"dataCache_1_io_mem_cmd_ready", false,-1);
    tracep->declBit(c+326,"IBusCachedPlugin_cache_io_cpu_prefetch_haltIt", false,-1);
    tracep->declBus(c+327,"IBusCachedPlugin_cache_io_cpu_fetch_data", false,-1, 31,0);
    tracep->declBus(c+950,"IBusCachedPlugin_cache_io_cpu_fetch_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+328,"IBusCachedPlugin_cache_io_cpu_decode_error", false,-1);
    tracep->declBit(c+329,"IBusCachedPlugin_cache_io_cpu_decode_mmuRefilling", false,-1);
    tracep->declBit(c+330,"IBusCachedPlugin_cache_io_cpu_decode_mmuException", false,-1);
    tracep->declBus(c+331,"IBusCachedPlugin_cache_io_cpu_decode_data", false,-1, 31,0);
    tracep->declBit(c+332,"IBusCachedPlugin_cache_io_cpu_decode_cacheMiss", false,-1);
    tracep->declBus(c+333,"IBusCachedPlugin_cache_io_cpu_decode_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+334,"IBusCachedPlugin_cache_io_mem_cmd_valid", false,-1);
    tracep->declBus(c+335,"IBusCachedPlugin_cache_io_mem_cmd_payload_address", false,-1, 31,0);
    tracep->declBus(c+1015,"IBusCachedPlugin_cache_io_mem_cmd_payload_size", false,-1, 2,0);
    tracep->declBit(c+336,"dataCache_1_io_cpu_execute_haltIt", false,-1);
    tracep->declBit(c+337,"dataCache_1_io_cpu_execute_refilling", false,-1);
    tracep->declBit(c+338,"dataCache_1_io_cpu_memory_isWrite", false,-1);
    tracep->declBit(c+339,"dataCache_1_io_cpu_writeBack_haltIt", false,-1);
    tracep->declBus(c+340,"dataCache_1_io_cpu_writeBack_data", false,-1, 31,0);
    tracep->declBit(c+341,"dataCache_1_io_cpu_writeBack_mmuException", false,-1);
    tracep->declBit(c+342,"dataCache_1_io_cpu_writeBack_unalignedAccess", false,-1);
    tracep->declBit(c+343,"dataCache_1_io_cpu_writeBack_accessError", false,-1);
    tracep->declBit(c+344,"dataCache_1_io_cpu_writeBack_isWrite", false,-1);
    tracep->declBit(c+999,"dataCache_1_io_cpu_writeBack_keepMemRspData", false,-1);
    tracep->declBit(c+1016,"dataCache_1_io_cpu_writeBack_exclusiveOk", false,-1);
    tracep->declBit(c+345,"dataCache_1_io_cpu_flush_ready", false,-1);
    tracep->declBit(c+346,"dataCache_1_io_cpu_redo", false,-1);
    tracep->declBit(c+347,"dataCache_1_io_mem_cmd_valid", false,-1);
    tracep->declBit(c+348,"dataCache_1_io_mem_cmd_payload_wr", false,-1);
    tracep->declBit(c+349,"dataCache_1_io_mem_cmd_payload_uncached", false,-1);
    tracep->declBus(c+350,"dataCache_1_io_mem_cmd_payload_address", false,-1, 31,0);
    tracep->declBus(c+320,"dataCache_1_io_mem_cmd_payload_data", false,-1, 31,0);
    tracep->declBus(c+351,"dataCache_1_io_mem_cmd_payload_mask", false,-1, 3,0);
    tracep->declBus(c+352,"dataCache_1_io_mem_cmd_payload_size", false,-1, 2,0);
    tracep->declBit(c+996,"dataCache_1_io_mem_cmd_payload_last", false,-1);
    tracep->declQuad(c+353,"memory_MUL_LOW", false,-1, 51,0);
    tracep->declQuad(c+355,"memory_MUL_HH", false,-1, 33,0);
    tracep->declQuad(c+357,"execute_MUL_HH", false,-1, 33,0);
    tracep->declQuad(c+359,"execute_MUL_HL", false,-1, 33,0);
    tracep->declQuad(c+361,"execute_MUL_LH", false,-1, 33,0);
    tracep->declBus(c+363,"execute_MUL_LL", false,-1, 31,0);
    tracep->declBus(c+364,"execute_BRANCH_CALC", false,-1, 31,0);
    tracep->declBit(c+365,"execute_BRANCH_DO", false,-1);
    tracep->declBus(c+366,"execute_SHIFT_RIGHT", false,-1, 31,0);
    tracep->declBus(c+367,"execute_REGFILE_WRITE_DATA", false,-1, 31,0);
    tracep->declBus(c+368,"memory_MEMORY_STORE_DATA_RF", false,-1, 31,0);
    tracep->declBus(c+369,"execute_MEMORY_STORE_DATA_RF", false,-1, 31,0);
    tracep->declBit(c+370,"decode_CSR_READ_OPCODE", false,-1);
    tracep->declBit(c+371,"decode_CSR_WRITE_OPCODE", false,-1);
    tracep->declBit(c+372,"decode_PREDICTION_HAD_BRANCHED2", false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__1(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+373,"decode_SRC2_FORCE_ZERO", false,-1);
    tracep->declBit(c+374,"decode_IS_RS2_SIGNED", false,-1);
    tracep->declBit(c+375,"decode_IS_RS1_SIGNED", false,-1);
    tracep->declBit(c+376,"decode_IS_DIV", false,-1);
    tracep->declBit(c+377,"memory_IS_MUL", false,-1);
    tracep->declBit(c+378,"execute_IS_MUL", false,-1);
    tracep->declBit(c+379,"decode_IS_MUL", false,-1);
    tracep->declBus(c+380,"decode_ENV_CTRL", false,-1, 1,0);
    tracep->declBit(c+381,"decode_IS_CSR", false,-1);
    tracep->declBus(c+382,"decode_SHIFT_CTRL", false,-1, 1,0);
    tracep->declBus(c+383,"decode_ALU_BITWISE_CTRL", false,-1, 1,0);
    tracep->declBit(c+384,"decode_SRC_LESS_UNSIGNED", false,-1);
    tracep->declBit(c+385,"decode_MEMORY_MANAGMENT", false,-1);
    tracep->declBit(c+386,"memory_MEMORY_WR", false,-1);
    tracep->declBit(c+387,"decode_MEMORY_WR", false,-1);
    tracep->declBit(c+388,"execute_BYPASSABLE_MEMORY_STAGE", false,-1);
    tracep->declBit(c+389,"decode_BYPASSABLE_MEMORY_STAGE", false,-1);
    tracep->declBit(c+390,"decode_BYPASSABLE_EXECUTE_STAGE", false,-1);
    tracep->declBus(c+391,"decode_SRC2_CTRL", false,-1, 1,0);
    tracep->declBus(c+392,"decode_ALU_CTRL", false,-1, 1,0);
    tracep->declBus(c+393,"decode_SRC1_CTRL", false,-1, 1,0);
    tracep->declBit(c+999,"decode_MEMORY_FORCE_CONSTISTENCY", false,-1);
    tracep->declBus(c+394,"writeBack_FORMAL_PC_NEXT", false,-1, 31,0);
    tracep->declBus(c+395,"memory_FORMAL_PC_NEXT", false,-1, 31,0);
    tracep->declBus(c+396,"execute_FORMAL_PC_NEXT", false,-1, 31,0);
    tracep->declBus(c+397,"decode_FORMAL_PC_NEXT", false,-1, 31,0);
    tracep->declBus(c+398,"memory_PC", false,-1, 31,0);
    tracep->declBit(c+399,"execute_IS_RS1_SIGNED", false,-1);
    tracep->declBit(c+400,"execute_IS_DIV", false,-1);
    tracep->declBit(c+401,"execute_IS_RS2_SIGNED", false,-1);
    tracep->declBit(c+402,"memory_IS_DIV", false,-1);
    tracep->declBit(c+403,"writeBack_IS_MUL", false,-1);
    tracep->declQuad(c+404,"writeBack_MUL_HH", false,-1, 33,0);
    tracep->declQuad(c+406,"writeBack_MUL_LOW", false,-1, 51,0);
    tracep->declQuad(c+408,"memory_MUL_HL", false,-1, 33,0);
    tracep->declQuad(c+410,"memory_MUL_LH", false,-1, 33,0);
    tracep->declBus(c+412,"memory_MUL_LL", false,-1, 31,0);
    tracep->declBit(c+413,"execute_CSR_READ_OPCODE", false,-1);
    tracep->declBit(c+414,"execute_CSR_WRITE_OPCODE", false,-1);
    tracep->declBit(c+415,"execute_IS_CSR", false,-1);
    tracep->declBus(c+416,"memory_ENV_CTRL", false,-1, 1,0);
    tracep->declBus(c+417,"execute_ENV_CTRL", false,-1, 1,0);
    tracep->declBus(c+418,"writeBack_ENV_CTRL", false,-1, 1,0);
    tracep->declBus(c+419,"memory_BRANCH_CALC", false,-1, 31,0);
    tracep->declBit(c+420,"memory_BRANCH_DO", false,-1);
    tracep->declBus(c+421,"execute_PC", false,-1, 31,0);
    tracep->declBit(c+422,"execute_PREDICTION_HAD_BRANCHED2", false,-1);
    tracep->declBit(c+423,"execute_BRANCH_COND_RESULT", false,-1);
    tracep->declBus(c+424,"execute_BRANCH_CTRL", false,-1, 1,0);
    tracep->declBit(c+425,"decode_RS2_USE", false,-1);
    tracep->declBit(c+426,"decode_RS1_USE", false,-1);
    tracep->declBit(c+427,"execute_REGFILE_WRITE_VALID", false,-1);
    tracep->declBit(c+428,"execute_BYPASSABLE_EXECUTE_STAGE", false,-1);
    tracep->declBit(c+429,"memory_REGFILE_WRITE_VALID", false,-1);
    tracep->declBus(c+430,"memory_INSTRUCTION", false,-1, 31,0);
    tracep->declBit(c+431,"memory_BYPASSABLE_MEMORY_STAGE", false,-1);
    tracep->declBit(c+432,"writeBack_REGFILE_WRITE_VALID", false,-1);
    tracep->declBus(c+433,"decode_RS2", false,-1, 31,0);
    tracep->declBus(c+434,"decode_RS1", false,-1, 31,0);
    tracep->declBus(c+435,"memory_SHIFT_RIGHT", false,-1, 31,0);
    tracep->declBus(c+436,"memory_SHIFT_CTRL", false,-1, 1,0);
    tracep->declBus(c+437,"execute_SHIFT_CTRL", false,-1, 1,0);
    tracep->declBit(c+438,"execute_SRC_LESS_UNSIGNED", false,-1);
    tracep->declBit(c+439,"execute_SRC2_FORCE_ZERO", false,-1);
    tracep->declBit(c+440,"execute_SRC_USE_SUB_LESS", false,-1);
    tracep->declBus(c+441,"execute_SRC2_CTRL", false,-1, 1,0);
    tracep->declBus(c+442,"execute_SRC1_CTRL", false,-1, 1,0);
    tracep->declBit(c+443,"decode_SRC_USE_SUB_LESS", false,-1);
    tracep->declBit(c+444,"decode_SRC_ADD_ZERO", false,-1);
    tracep->declBus(c+315,"execute_SRC_ADD_SUB", false,-1, 31,0);
    tracep->declBit(c+445,"execute_SRC_LESS", false,-1);
    tracep->declBus(c+446,"execute_ALU_CTRL", false,-1, 1,0);
    tracep->declBus(c+447,"execute_SRC2", false,-1, 31,0);
    tracep->declBus(c+448,"execute_SRC1", false,-1, 31,0);
    tracep->declBus(c+449,"execute_ALU_BITWISE_CTRL", false,-1, 1,0);
    tracep->declBus(c+450,"decode_INSTRUCTION_ANTICIPATED", false,-1, 31,0);
    tracep->declBit(c+451,"decode_REGFILE_WRITE_VALID", false,-1);
    tracep->declBit(c+452,"decode_LEGAL_INSTRUCTION", false,-1);
    tracep->declBit(c+453,"writeBack_MEMORY_WR", false,-1);
    tracep->declBus(c+320,"writeBack_MEMORY_STORE_DATA_RF", false,-1, 31,0);
    tracep->declBus(c+321,"writeBack_REGFILE_WRITE_DATA", false,-1, 31,0);
    tracep->declBit(c+454,"writeBack_MEMORY_ENABLE", false,-1);
    tracep->declBus(c+317,"memory_REGFILE_WRITE_DATA", false,-1, 31,0);
    tracep->declBit(c+455,"memory_MEMORY_ENABLE", false,-1);
    tracep->declBit(c+456,"execute_MEMORY_FORCE_CONSTISTENCY", false,-1);
    tracep->declBus(c+457,"execute_RS1", false,-1, 31,0);
    tracep->declBit(c+458,"execute_MEMORY_MANAGMENT", false,-1);
    tracep->declBus(c+459,"execute_RS2", false,-1, 31,0);
    tracep->declBit(c+460,"execute_MEMORY_WR", false,-1);
    tracep->declBus(c+315,"execute_SRC_ADD", false,-1, 31,0);
    tracep->declBit(c+461,"execute_MEMORY_ENABLE", false,-1);
    tracep->declBus(c+462,"execute_INSTRUCTION", false,-1, 31,0);
    tracep->declBit(c+463,"decode_MEMORY_ENABLE", false,-1);
    tracep->declBit(c+464,"decode_FLUSH_ALL", false,-1);
    tracep->declBit(c+465,"IBusCachedPlugin_rsp_issueDetected_4", false,-1);
    tracep->declBit(c+466,"IBusCachedPlugin_rsp_issueDetected_3", false,-1);
    tracep->declBit(c+467,"IBusCachedPlugin_rsp_issueDetected_2", false,-1);
    tracep->declBit(c+468,"IBusCachedPlugin_rsp_issueDetected_1", false,-1);
    tracep->declBus(c+469,"decode_BRANCH_CTRL", false,-1, 1,0);
    tracep->declBus(c+331,"decode_INSTRUCTION", false,-1, 31,0);
    tracep->declBus(c+470,"decode_PC", false,-1, 31,0);
    tracep->declBus(c+471,"writeBack_PC", false,-1, 31,0);
    tracep->declBus(c+472,"writeBack_INSTRUCTION", false,-1, 31,0);
    tracep->declBit(c+999,"decode_arbitration_haltItself", false,-1);
    tracep->declBit(c+473,"decode_arbitration_haltByOther", false,-1);
    tracep->declBit(c+474,"decode_arbitration_removeIt", false,-1);
    tracep->declBit(c+999,"decode_arbitration_flushIt", false,-1);
    tracep->declBit(c+475,"decode_arbitration_flushNext", false,-1);
    tracep->declBit(c+476,"decode_arbitration_isValid", false,-1);
    tracep->declBit(c+477,"decode_arbitration_isStuck", false,-1);
    tracep->declBit(c+477,"decode_arbitration_isStuckByOthers", false,-1);
    tracep->declBit(c+478,"decode_arbitration_isFlushed", false,-1);
    tracep->declBit(c+479,"decode_arbitration_isMoving", false,-1);
    tracep->declBit(c+480,"decode_arbitration_isFiring", false,-1);
    tracep->declBit(c+481,"execute_arbitration_haltItself", false,-1);
    tracep->declBit(c+482,"execute_arbitration_haltByOther", false,-1);
    tracep->declBit(c+483,"execute_arbitration_removeIt", false,-1);
    tracep->declBit(c+999,"execute_arbitration_flushIt", false,-1);
    tracep->declBit(c+484,"execute_arbitration_flushNext", false,-1);
    tracep->declBit(c+485,"execute_arbitration_isValid", false,-1);
    tracep->declBit(c+486,"execute_arbitration_isStuck", false,-1);
    tracep->declBit(c+487,"execute_arbitration_isStuckByOthers", false,-1);
    tracep->declBit(c+488,"execute_arbitration_isFlushed", false,-1);
    tracep->declBit(c+489,"execute_arbitration_isMoving", false,-1);
    tracep->declBit(c+490,"execute_arbitration_isFiring", false,-1);
    tracep->declBit(c+491,"memory_arbitration_haltItself", false,-1);
    tracep->declBit(c+999,"memory_arbitration_haltByOther", false,-1);
    tracep->declBit(c+492,"memory_arbitration_removeIt", false,-1);
    tracep->declBit(c+999,"memory_arbitration_flushIt", false,-1);
    tracep->declBit(c+493,"memory_arbitration_flushNext", false,-1);
    tracep->declBit(c+494,"memory_arbitration_isValid", false,-1);
    tracep->declBit(c+495,"memory_arbitration_isStuck", false,-1);
    tracep->declBit(c+496,"memory_arbitration_isStuckByOthers", false,-1);
    tracep->declBit(c+497,"memory_arbitration_isFlushed", false,-1);
    tracep->declBit(c+498,"memory_arbitration_isMoving", false,-1);
    tracep->declBit(c+499,"memory_arbitration_isFiring", false,-1);
    tracep->declBit(c+496,"writeBack_arbitration_haltItself", false,-1);
    tracep->declBit(c+999,"writeBack_arbitration_haltByOther", false,-1);
    tracep->declBit(c+500,"writeBack_arbitration_removeIt", false,-1);
    tracep->declBit(c+501,"writeBack_arbitration_flushIt", false,-1);
    tracep->declBit(c+502,"writeBack_arbitration_flushNext", false,-1);
    tracep->declBit(c+503,"writeBack_arbitration_isValid", false,-1);
    tracep->declBit(c+496,"writeBack_arbitration_isStuck", false,-1);
    tracep->declBit(c+999,"writeBack_arbitration_isStuckByOthers", false,-1);
    tracep->declBit(c+501,"writeBack_arbitration_isFlushed", false,-1);
    tracep->declBit(c+504,"writeBack_arbitration_isMoving", false,-1);
    tracep->declBit(c+505,"writeBack_arbitration_isFiring", false,-1);
    tracep->declBus(c+951,"lastStageInstruction", false,-1, 31,0);
    tracep->declBus(c+952,"lastStagePc", false,-1, 31,0);
    tracep->declBit(c+953,"lastStageIsValid", false,-1);
    tracep->declBit(c+954,"lastStageIsFiring", false,-1);
    tracep->declBit(c+506,"IBusCachedPlugin_fetcherHalt", false,-1);
    tracep->declBit(c+999,"IBusCachedPlugin_forceNoDecodeCond", false,-1);
    tracep->declBit(c+507,"IBusCachedPlugin_incomingInstruction", false,-1);
    tracep->declBit(c+508,"IBusCachedPlugin_predictionJumpInterface_valid", false,-1);
    tracep->declBus(c+509,"IBusCachedPlugin_predictionJumpInterface_payload", false,-1, 31,0);
    tracep->declBit(c+372,"IBusCachedPlugin_decodePrediction_cmd_hadBranch", false,-1);
    tracep->declBit(c+510,"IBusCachedPlugin_decodePrediction_rsp_wasWrong", false,-1);
    tracep->declBit(c+511,"IBusCachedPlugin_pcValids_0", false,-1);
    tracep->declBit(c+512,"IBusCachedPlugin_pcValids_1", false,-1);
    tracep->declBit(c+513,"IBusCachedPlugin_pcValids_2", false,-1);
    tracep->declBit(c+514,"IBusCachedPlugin_pcValids_3", false,-1);
    tracep->declBit(c+515,"IBusCachedPlugin_decodeExceptionPort_valid", false,-1);
    tracep->declBus(c+516,"IBusCachedPlugin_decodeExceptionPort_payload_code", false,-1, 3,0);
    tracep->declBus(c+517,"IBusCachedPlugin_decodeExceptionPort_payload_badAddr", false,-1, 31,0);
    tracep->declBit(c+310,"IBusCachedPlugin_mmuBus_cmd_0_isValid", false,-1);
    tracep->declBit(c+311,"IBusCachedPlugin_mmuBus_cmd_0_isStuck", false,-1);
    tracep->declBus(c+950,"IBusCachedPlugin_mmuBus_cmd_0_virtualAddress", false,-1, 31,0);
    tracep->declBit(c+999,"IBusCachedPlugin_mmuBus_cmd_0_bypassTranslation", false,-1);
    tracep->declBus(c+950,"IBusCachedPlugin_mmuBus_rsp_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+955,"IBusCachedPlugin_mmuBus_rsp_isIoAccess", false,-1);
    tracep->declBit(c+999,"IBusCachedPlugin_mmuBus_rsp_isPaging", false,-1);
    tracep->declBit(c+996,"IBusCachedPlugin_mmuBus_rsp_allowRead", false,-1);
    tracep->declBit(c+996,"IBusCachedPlugin_mmuBus_rsp_allowWrite", false,-1);
    tracep->declBit(c+996,"IBusCachedPlugin_mmuBus_rsp_allowExecute", false,-1);
    tracep->declBit(c+999,"IBusCachedPlugin_mmuBus_rsp_exception", false,-1);
    tracep->declBit(c+999,"IBusCachedPlugin_mmuBus_rsp_refilling", false,-1);
    tracep->declBit(c+1017,"IBusCachedPlugin_mmuBus_rsp_bypassTranslation", false,-1);
    tracep->declBit(c+518,"IBusCachedPlugin_mmuBus_end", false,-1);
    tracep->declBit(c+999,"IBusCachedPlugin_mmuBus_busy", false,-1);
    tracep->declBit(c+28,"dBus_cmd_valid", false,-1);
    tracep->declBit(c+519,"dBus_cmd_ready", false,-1);
    tracep->declBit(c+30,"dBus_cmd_payload_wr", false,-1);
    tracep->declBit(c+520,"dBus_cmd_payload_uncached", false,-1);
    tracep->declBus(c+521,"dBus_cmd_payload_address", false,-1, 31,0);
    tracep->declBus(c+26,"dBus_cmd_payload_data", false,-1, 31,0);
    tracep->declBus(c+522,"dBus_cmd_payload_mask", false,-1, 3,0);
    tracep->declBus(c+523,"dBus_cmd_payload_size", false,-1, 2,0);
    tracep->declBit(c+524,"dBus_cmd_payload_last", false,-1);
    tracep->declBit(c+525,"dBus_rsp_valid", false,-1);
    tracep->declBit(c+1018,"dBus_rsp_payload_last", false,-1);
    tracep->declBus(c+526,"dBus_rsp_payload_data", false,-1, 31,0);
    tracep->declBit(c+999,"dBus_rsp_payload_error", false,-1);
    tracep->declBit(c+316,"DBusCachedPlugin_mmuBus_cmd_0_isValid", false,-1);
    tracep->declBit(c+495,"DBusCachedPlugin_mmuBus_cmd_0_isStuck", false,-1);
    tracep->declBus(c+317,"DBusCachedPlugin_mmuBus_cmd_0_virtualAddress", false,-1, 31,0);
    tracep->declBit(c+999,"DBusCachedPlugin_mmuBus_cmd_0_bypassTranslation", false,-1);
    tracep->declBus(c+317,"DBusCachedPlugin_mmuBus_rsp_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+318,"DBusCachedPlugin_mmuBus_rsp_isIoAccess", false,-1);
    tracep->declBit(c+999,"DBusCachedPlugin_mmuBus_rsp_isPaging", false,-1);
    tracep->declBit(c+996,"DBusCachedPlugin_mmuBus_rsp_allowRead", false,-1);
    tracep->declBit(c+996,"DBusCachedPlugin_mmuBus_rsp_allowWrite", false,-1);
    tracep->declBit(c+996,"DBusCachedPlugin_mmuBus_rsp_allowExecute", false,-1);
    tracep->declBit(c+999,"DBusCachedPlugin_mmuBus_rsp_exception", false,-1);
    tracep->declBit(c+999,"DBusCachedPlugin_mmuBus_rsp_refilling", false,-1);
    tracep->declBit(c+1019,"DBusCachedPlugin_mmuBus_rsp_bypassTranslation", false,-1);
    tracep->declBit(c+527,"DBusCachedPlugin_mmuBus_end", false,-1);
    tracep->declBit(c+999,"DBusCachedPlugin_mmuBus_busy", false,-1);
    tracep->declBit(c+528,"DBusCachedPlugin_redoBranch_valid", false,-1);
    tracep->declBus(c+471,"DBusCachedPlugin_redoBranch_payload", false,-1, 31,0);
    tracep->declBit(c+529,"DBusCachedPlugin_exceptionBus_valid", false,-1);
    tracep->declBus(c+530,"DBusCachedPlugin_exceptionBus_payload_code", false,-1, 3,0);
    tracep->declBus(c+321,"DBusCachedPlugin_exceptionBus_payload_badAddr", false,-1, 31,0);
    tracep->declBit(c+531,"decodeExceptionPort_valid", false,-1);
    tracep->declBus(c+1020,"decodeExceptionPort_payload_code", false,-1, 3,0);
    tracep->declBus(c+331,"decodeExceptionPort_payload_badAddr", false,-1, 31,0);
    tracep->declBit(c+510,"BranchPlugin_jumpInterface_valid", false,-1);
    tracep->declBus(c+419,"BranchPlugin_jumpInterface_payload", false,-1, 31,0);
    tracep->declBit(c+532,"BranchPlugin_branchExceptionPort_valid", false,-1);
    tracep->declBus(c+1021,"BranchPlugin_branchExceptionPort_payload_code", false,-1, 3,0);
    tracep->declBus(c+419,"BranchPlugin_branchExceptionPort_payload_badAddr", false,-1, 31,0);
    tracep->declBit(c+999,"BranchPlugin_inDebugNoFetchFlag", false,-1);
    tracep->declBus(c+533,"CsrPlugin_csrMapping_readDataSignal", false,-1, 31,0);
    tracep->declBus(c+533,"CsrPlugin_csrMapping_readDataInit", false,-1, 31,0);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__2(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__2\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+534,"CsrPlugin_csrMapping_writeDataSignal", false,-1, 31,0);
    tracep->declBit(c+999,"CsrPlugin_csrMapping_allowCsrSignal", false,-1);
    tracep->declBit(c+535,"CsrPlugin_csrMapping_hazardFree", false,-1);
    tracep->declBit(c+956,"CsrPlugin_inWfi", false,-1);
    tracep->declBit(c+999,"CsrPlugin_thirdPartyWake", false,-1);
    tracep->declBit(c+536,"CsrPlugin_jumpInterface_valid", false,-1);
    tracep->declBus(c+537,"CsrPlugin_jumpInterface_payload", false,-1, 31,0);
    tracep->declBit(c+538,"CsrPlugin_exceptionPendings_0", false,-1);
    tracep->declBit(c+539,"CsrPlugin_exceptionPendings_1", false,-1);
    tracep->declBit(c+540,"CsrPlugin_exceptionPendings_2", false,-1);
    tracep->declBit(c+541,"CsrPlugin_exceptionPendings_3", false,-1);
    tracep->declBit(c+542,"externalInterrupt", false,-1);
    tracep->declBit(c+536,"contextSwitching", false,-1);
    tracep->declBus(c+1004,"CsrPlugin_privilege", false,-1, 1,0);
    tracep->declBit(c+999,"CsrPlugin_forceMachineWire", false,-1);
    tracep->declBit(c+543,"CsrPlugin_selfException_valid", false,-1);
    tracep->declBus(c+544,"CsrPlugin_selfException_payload_code", false,-1, 3,0);
    tracep->declBus(c+462,"CsrPlugin_selfException_payload_badAddr", false,-1, 31,0);
    tracep->declBit(c+996,"CsrPlugin_allowInterrupts", false,-1);
    tracep->declBit(c+996,"CsrPlugin_allowException", false,-1);
    tracep->declBit(c+996,"CsrPlugin_allowEbreakException", false,-1);
    tracep->declBit(c+545,"IBusCachedPlugin_externalFlush", false,-1);
    tracep->declBit(c+546,"IBusCachedPlugin_jump_pcLoad_valid", false,-1);
    tracep->declBus(c+547,"IBusCachedPlugin_jump_pcLoad_payload", false,-1, 31,0);
    tracep->declBit(c+309,"IBusCachedPlugin_fetchPc_output_valid", false,-1);
    tracep->declBit(c+548,"IBusCachedPlugin_fetchPc_output_ready", false,-1);
    tracep->declBus(c+549,"IBusCachedPlugin_fetchPc_output_payload", false,-1, 31,0);
    tracep->declBus(c+950,"IBusCachedPlugin_fetchPc_pcReg", false,-1, 31,0);
    tracep->declBit(c+550,"IBusCachedPlugin_fetchPc_correction", false,-1);
    tracep->declBit(c+551,"IBusCachedPlugin_fetchPc_correctionReg", false,-1);
    tracep->declBit(c+552,"IBusCachedPlugin_fetchPc_output_fire", false,-1);
    tracep->declBit(c+553,"IBusCachedPlugin_fetchPc_corrected", false,-1);
    tracep->declBit(c+554,"IBusCachedPlugin_fetchPc_pcRegPropagate", false,-1);
    tracep->declBit(c+555,"IBusCachedPlugin_fetchPc_booted", false,-1);
    tracep->declBit(c+556,"IBusCachedPlugin_fetchPc_inc", false,-1);
    tracep->declBit(c+557,"when_Fetcher_l134", false,-1);
    tracep->declBit(c+552,"IBusCachedPlugin_fetchPc_output_fire_1", false,-1);
    tracep->declBit(c+558,"when_Fetcher_l134_1", false,-1);
    tracep->declBus(c+549,"IBusCachedPlugin_fetchPc_pc", false,-1, 31,0);
    tracep->declBit(c+559,"IBusCachedPlugin_fetchPc_redo_valid", false,-1);
    tracep->declBus(c+470,"IBusCachedPlugin_fetchPc_redo_payload", false,-1, 31,0);
    tracep->declBit(c+560,"IBusCachedPlugin_fetchPc_flushed", false,-1);
    tracep->declBit(c+561,"when_Fetcher_l161", false,-1);
    tracep->declBit(c+559,"IBusCachedPlugin_iBusRsp_redoFetch", false,-1);
    tracep->declBit(c+309,"IBusCachedPlugin_iBusRsp_stages_0_input_valid", false,-1);
    tracep->declBit(c+548,"IBusCachedPlugin_iBusRsp_stages_0_input_ready", false,-1);
    tracep->declBus(c+549,"IBusCachedPlugin_iBusRsp_stages_0_input_payload", false,-1, 31,0);
    tracep->declBit(c+562,"IBusCachedPlugin_iBusRsp_stages_0_output_valid", false,-1);
    tracep->declBit(c+563,"IBusCachedPlugin_iBusRsp_stages_0_output_ready", false,-1);
    tracep->declBus(c+549,"IBusCachedPlugin_iBusRsp_stages_0_output_payload", false,-1, 31,0);
    tracep->declBit(c+564,"IBusCachedPlugin_iBusRsp_stages_0_halt", false,-1);
    tracep->declBit(c+565,"IBusCachedPlugin_iBusRsp_stages_1_input_valid", false,-1);
    tracep->declBit(c+563,"IBusCachedPlugin_iBusRsp_stages_1_input_ready", false,-1);
    tracep->declBus(c+950,"IBusCachedPlugin_iBusRsp_stages_1_input_payload", false,-1, 31,0);
    tracep->declBit(c+565,"IBusCachedPlugin_iBusRsp_stages_1_output_valid", false,-1);
    tracep->declBit(c+563,"IBusCachedPlugin_iBusRsp_stages_1_output_ready", false,-1);
    tracep->declBus(c+950,"IBusCachedPlugin_iBusRsp_stages_1_output_payload", false,-1, 31,0);
    tracep->declBit(c+999,"IBusCachedPlugin_iBusRsp_stages_1_halt", false,-1);
    tracep->declBit(c+566,"IBusCachedPlugin_iBusRsp_stages_2_input_valid", false,-1);
    tracep->declBit(c+563,"IBusCachedPlugin_iBusRsp_stages_2_input_ready", false,-1);
    tracep->declBus(c+470,"IBusCachedPlugin_iBusRsp_stages_2_input_payload", false,-1, 31,0);
    tracep->declBit(c+476,"IBusCachedPlugin_iBusRsp_stages_2_output_valid", false,-1);
    tracep->declBit(c+567,"IBusCachedPlugin_iBusRsp_stages_2_output_ready", false,-1);
    tracep->declBus(c+470,"IBusCachedPlugin_iBusRsp_stages_2_output_payload", false,-1, 31,0);
    tracep->declBit(c+568,"IBusCachedPlugin_iBusRsp_stages_2_halt", false,-1);
    tracep->declBit(c+569,"IBusCachedPlugin_iBusRsp_flush", false,-1);
    tracep->declBit(c+566,"IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid", false,-1);
    tracep->declBit(c+563,"IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_ready", false,-1);
    tracep->declBus(c+470,"IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload", false,-1, 31,0);
    tracep->declBit(c+570,"IBusCachedPlugin_iBusRsp_readyForError", false,-1);
    tracep->declBit(c+476,"IBusCachedPlugin_iBusRsp_output_valid", false,-1);
    tracep->declBit(c+567,"IBusCachedPlugin_iBusRsp_output_ready", false,-1);
    tracep->declBus(c+470,"IBusCachedPlugin_iBusRsp_output_payload_pc", false,-1, 31,0);
    tracep->declBit(c+1022,"IBusCachedPlugin_iBusRsp_output_payload_rsp_error", false,-1);
    tracep->declBus(c+331,"IBusCachedPlugin_iBusRsp_output_payload_rsp_inst", false,-1, 31,0);
    tracep->declBit(c+1023,"IBusCachedPlugin_iBusRsp_output_payload_isRvc", false,-1);
    tracep->declBit(c+571,"when_Fetcher_l243", false,-1);
    tracep->declBit(c+572,"when_Fetcher_l323", false,-1);
    tracep->declBit(c+573,"IBusCachedPlugin_injector_nextPcCalc_valids_0", false,-1);
    tracep->declBit(c+563,"when_Fetcher_l332", false,-1);
    tracep->declBit(c+511,"IBusCachedPlugin_injector_nextPcCalc_valids_1", false,-1);
    tracep->declBit(c+563,"when_Fetcher_l332_1", false,-1);
    tracep->declBit(c+512,"IBusCachedPlugin_injector_nextPcCalc_valids_2", false,-1);
    tracep->declBit(c+574,"when_Fetcher_l332_2", false,-1);
    tracep->declBit(c+513,"IBusCachedPlugin_injector_nextPcCalc_valids_3", false,-1);
    tracep->declBit(c+575,"when_Fetcher_l332_3", false,-1);
    tracep->declBit(c+514,"IBusCachedPlugin_injector_nextPcCalc_valids_4", false,-1);
    tracep->declBit(c+576,"when_Fetcher_l332_4", false,-1);
    tracep->declBit(c+334,"iBus_cmd_valid", false,-1);
    tracep->declBit(c+577,"iBus_cmd_ready", false,-1);
    tracep->declBus(c+335,"iBus_cmd_payload_address", false,-1, 31,0);
    tracep->declBus(c+1015,"iBus_cmd_payload_size", false,-1, 2,0);
    tracep->declBit(c+578,"iBus_rsp_valid", false,-1);
    tracep->declBus(c+579,"iBus_rsp_payload_data", false,-1, 31,0);
    tracep->declBit(c+999,"iBus_rsp_payload_error", false,-1);
    tracep->declBus(c+580,"IBusCachedPlugin_rspCounter", false,-1, 31,0);
    tracep->declBit(c+999,"IBusCachedPlugin_s0_tightlyCoupledHit", false,-1);
    tracep->declBit(c+581,"IBusCachedPlugin_s1_tightlyCoupledHit", false,-1);
    tracep->declBit(c+582,"IBusCachedPlugin_s2_tightlyCoupledHit", false,-1);
    tracep->declBit(c+999,"IBusCachedPlugin_rsp_iBusRspOutputHalt", false,-1);
    tracep->declBit(c+999,"IBusCachedPlugin_rsp_issueDetected", false,-1);
    tracep->declBit(c+583,"IBusCachedPlugin_rsp_redoFetch", false,-1);
    tracep->declBit(c+584,"when_IBusCachedPlugin_l239", false,-1);
    tracep->declBit(c+585,"when_IBusCachedPlugin_l244", false,-1);
    tracep->declBit(c+586,"when_IBusCachedPlugin_l250", false,-1);
    tracep->declBit(c+587,"when_IBusCachedPlugin_l256", false,-1);
    tracep->declBit(c+465,"when_IBusCachedPlugin_l267", false,-1);
    tracep->declBit(c+588,"dataCache_1_io_mem_cmd_s2mPipe_valid", false,-1);
    tracep->declBit(c+589,"dataCache_1_io_mem_cmd_s2mPipe_ready", false,-1);
    tracep->declBit(c+590,"dataCache_1_io_mem_cmd_s2mPipe_payload_wr", false,-1);
    tracep->declBit(c+591,"dataCache_1_io_mem_cmd_s2mPipe_payload_uncached", false,-1);
    tracep->declBus(c+592,"dataCache_1_io_mem_cmd_s2mPipe_payload_address", false,-1, 31,0);
    tracep->declBus(c+593,"dataCache_1_io_mem_cmd_s2mPipe_payload_data", false,-1, 31,0);
    tracep->declBus(c+594,"dataCache_1_io_mem_cmd_s2mPipe_payload_mask", false,-1, 3,0);
    tracep->declBus(c+595,"dataCache_1_io_mem_cmd_s2mPipe_payload_size", false,-1, 2,0);
    tracep->declBit(c+596,"dataCache_1_io_mem_cmd_s2mPipe_payload_last", false,-1);
    tracep->declBit(c+597,"dataCache_1_io_mem_cmd_rValid", false,-1);
    tracep->declBit(c+598,"dataCache_1_io_mem_cmd_rData_wr", false,-1);
    tracep->declBit(c+599,"dataCache_1_io_mem_cmd_rData_uncached", false,-1);
    tracep->declBus(c+600,"dataCache_1_io_mem_cmd_rData_address", false,-1, 31,0);
    tracep->declBus(c+601,"dataCache_1_io_mem_cmd_rData_data", false,-1, 31,0);
    tracep->declBus(c+602,"dataCache_1_io_mem_cmd_rData_mask", false,-1, 3,0);
    tracep->declBus(c+603,"dataCache_1_io_mem_cmd_rData_size", false,-1, 2,0);
    tracep->declBit(c+604,"dataCache_1_io_mem_cmd_rData_last", false,-1);
    tracep->declBit(c+28,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_valid", false,-1);
    tracep->declBit(c+519,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_ready", false,-1);
    tracep->declBit(c+30,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_wr", false,-1);
    tracep->declBit(c+520,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_uncached", false,-1);
    tracep->declBus(c+521,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_address", false,-1, 31,0);
    tracep->declBus(c+26,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_data", false,-1, 31,0);
    tracep->declBus(c+522,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_mask", false,-1, 3,0);
    tracep->declBus(c+523,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_size", false,-1, 2,0);
    tracep->declBit(c+524,"dataCache_1_io_mem_cmd_s2mPipe_m2sPipe_payload_last", false,-1);
    tracep->declBit(c+28,"dataCache_1_io_mem_cmd_s2mPipe_rValid", false,-1);
    tracep->declBit(c+30,"dataCache_1_io_mem_cmd_s2mPipe_rData_wr", false,-1);
    tracep->declBit(c+520,"dataCache_1_io_mem_cmd_s2mPipe_rData_uncached", false,-1);
    tracep->declBus(c+521,"dataCache_1_io_mem_cmd_s2mPipe_rData_address", false,-1, 31,0);
    tracep->declBus(c+26,"dataCache_1_io_mem_cmd_s2mPipe_rData_data", false,-1, 31,0);
    tracep->declBus(c+522,"dataCache_1_io_mem_cmd_s2mPipe_rData_mask", false,-1, 3,0);
    tracep->declBus(c+523,"dataCache_1_io_mem_cmd_s2mPipe_rData_size", false,-1, 2,0);
    tracep->declBit(c+524,"dataCache_1_io_mem_cmd_s2mPipe_rData_last", false,-1);
    tracep->declBit(c+605,"when_Stream_l368", false,-1);
    tracep->declBus(c+606,"DBusCachedPlugin_rspCounter", false,-1, 31,0);
    tracep->declBit(c+999,"when_DBusCachedPlugin_l308", false,-1);
    tracep->declBus(c+607,"execute_DBusCachedPlugin_size", false,-1, 1,0);
    tracep->declBit(c+608,"dataCache_1_io_cpu_flush_isStall", false,-1);
    tracep->declBit(c+609,"when_DBusCachedPlugin_l350", false,-1);
    tracep->declBit(c+610,"when_DBusCachedPlugin_l366", false,-1);
    tracep->declBit(c+999,"when_DBusCachedPlugin_l393", false,-1);
    tracep->declBit(c+611,"when_DBusCachedPlugin_l446", false,-1);
    tracep->declBit(c+612,"when_DBusCachedPlugin_l466", false,-1);
    tracep->declBus(c+613,"writeBack_DBusCachedPlugin_rspSplits_0", false,-1, 7,0);
    tracep->declBus(c+614,"writeBack_DBusCachedPlugin_rspSplits_1", false,-1, 7,0);
    tracep->declBus(c+615,"writeBack_DBusCachedPlugin_rspSplits_2", false,-1, 7,0);
    tracep->declBus(c+616,"writeBack_DBusCachedPlugin_rspSplits_3", false,-1, 7,0);
    tracep->declBus(c+617,"writeBack_DBusCachedPlugin_rspShifted", false,-1, 31,0);
    tracep->declBus(c+617,"writeBack_DBusCachedPlugin_rspRf", false,-1, 31,0);
    tracep->declBus(c+618,"switch_Misc_l210", false,-1, 1,0);
    tracep->declBus(c+619,"writeBack_DBusCachedPlugin_rspFormated", false,-1, 31,0);
    tracep->declBit(c+620,"when_DBusCachedPlugin_l492", false,-1);
    tracep->declBit(c+621,"when_RegFilePlugin_l63", false,-1);
    tracep->declBus(c+622,"decode_RegFilePlugin_regFileReadAddress1", false,-1, 4,0);
    tracep->declBus(c+623,"decode_RegFilePlugin_regFileReadAddress2", false,-1, 4,0);
    tracep->declBus(c+624,"decode_RegFilePlugin_rs1Data", false,-1, 31,0);
    tracep->declBus(c+625,"decode_RegFilePlugin_rs2Data", false,-1, 31,0);
    tracep->declBit(c+957,"lastStageRegFileWrite_valid", false,-1);
    tracep->declBus(c+958,"lastStageRegFileWrite_payload_address", false,-1, 4,0);
    tracep->declBus(c+959,"lastStageRegFileWrite_payload_data", false,-1, 31,0);
    tracep->declBus(c+626,"execute_IntAluPlugin_bitwise", false,-1, 31,0);
    tracep->declBus(c+315,"execute_SrcPlugin_addSub", false,-1, 31,0);
    tracep->declBit(c+445,"execute_SrcPlugin_less", false,-1);
    tracep->declBus(c+627,"execute_FullBarrelShifterPlugin_amplitude", false,-1, 4,0);
    tracep->declBus(c+628,"execute_FullBarrelShifterPlugin_reversed", false,-1, 31,0);
    tracep->declBit(c+629,"HazardSimplePlugin_src0Hazard", false,-1);
    tracep->declBit(c+630,"HazardSimplePlugin_src1Hazard", false,-1);
    tracep->declBit(c+631,"HazardSimplePlugin_writeBackWrites_valid", false,-1);
    tracep->declBus(c+632,"HazardSimplePlugin_writeBackWrites_payload_address", false,-1, 4,0);
    tracep->declBus(c+633,"HazardSimplePlugin_writeBackWrites_payload_data", false,-1, 31,0);
    tracep->declBit(c+634,"HazardSimplePlugin_writeBackBuffer_valid", false,-1);
    tracep->declBus(c+635,"HazardSimplePlugin_writeBackBuffer_payload_address", false,-1, 4,0);
    tracep->declBus(c+636,"HazardSimplePlugin_writeBackBuffer_payload_data", false,-1, 31,0);
    tracep->declBit(c+637,"HazardSimplePlugin_addr0Match", false,-1);
    tracep->declBit(c+638,"HazardSimplePlugin_addr1Match", false,-1);
    tracep->declBit(c+996,"when_HazardSimplePlugin_l47", false,-1);
    tracep->declBit(c+639,"when_HazardSimplePlugin_l48", false,-1);
    tracep->declBit(c+640,"when_HazardSimplePlugin_l51", false,-1);
    tracep->declBit(c+641,"when_HazardSimplePlugin_l45", false,-1);
    tracep->declBit(c+642,"when_HazardSimplePlugin_l57", false,-1);
    tracep->declBit(c+999,"when_HazardSimplePlugin_l58", false,-1);
    tracep->declBit(c+643,"when_HazardSimplePlugin_l48_1", false,-1);
    tracep->declBit(c+644,"when_HazardSimplePlugin_l51_1", false,-1);
    tracep->declBit(c+645,"when_HazardSimplePlugin_l45_1", false,-1);
    tracep->declBit(c+646,"when_HazardSimplePlugin_l57_1", false,-1);
    tracep->declBit(c+647,"when_HazardSimplePlugin_l58_1", false,-1);
    tracep->declBit(c+648,"when_HazardSimplePlugin_l48_2", false,-1);
    tracep->declBit(c+649,"when_HazardSimplePlugin_l51_2", false,-1);
    tracep->declBit(c+650,"when_HazardSimplePlugin_l45_2", false,-1);
    tracep->declBit(c+651,"when_HazardSimplePlugin_l57_2", false,-1);
    tracep->declBit(c+652,"when_HazardSimplePlugin_l58_2", false,-1);
    tracep->declBit(c+653,"when_HazardSimplePlugin_l105", false,-1);
    tracep->declBit(c+654,"when_HazardSimplePlugin_l108", false,-1);
    tracep->declBit(c+655,"when_HazardSimplePlugin_l113", false,-1);
    tracep->declBit(c+656,"execute_BranchPlugin_eq", false,-1);
    tracep->declBus(c+657,"switch_Misc_l210_1", false,-1, 2,0);
    tracep->declBit(c+658,"execute_BranchPlugin_missAlignedTarget", false,-1);
    tracep->declBus(c+659,"execute_BranchPlugin_branch_src1", false,-1, 31,0);
    tracep->declBus(c+660,"execute_BranchPlugin_branch_src2", false,-1, 31,0);
    tracep->declBus(c+661,"execute_BranchPlugin_branchAdder", false,-1, 31,0);
    tracep->declBus(c+1002,"CsrPlugin_misa_base", false,-1, 1,0);
    tracep->declBus(c+1024,"CsrPlugin_misa_extensions", false,-1, 25,0);
    tracep->declBus(c+662,"CsrPlugin_mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+663,"CsrPlugin_mtvec_base", false,-1, 29,0);
    tracep->declBus(c+664,"CsrPlugin_mepc", false,-1, 31,0);
    tracep->declBit(c+665,"CsrPlugin_mstatus_MIE", false,-1);
    tracep->declBit(c+666,"CsrPlugin_mstatus_MPIE", false,-1);
    tracep->declBus(c+667,"CsrPlugin_mstatus_MPP", false,-1, 1,0);
    tracep->declBit(c+668,"CsrPlugin_mip_MEIP", false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__3(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__3\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+669,"CsrPlugin_mip_MTIP", false,-1);
    tracep->declBit(c+670,"CsrPlugin_mip_MSIP", false,-1);
    tracep->declBit(c+671,"CsrPlugin_mie_MEIE", false,-1);
    tracep->declBit(c+672,"CsrPlugin_mie_MTIE", false,-1);
    tracep->declBit(c+673,"CsrPlugin_mie_MSIE", false,-1);
    tracep->declBit(c+674,"CsrPlugin_mcause_interrupt", false,-1);
    tracep->declBus(c+675,"CsrPlugin_mcause_exceptionCode", false,-1, 3,0);
    tracep->declBus(c+676,"CsrPlugin_mtval", false,-1, 31,0);
    tracep->declQuad(c+677,"CsrPlugin_mcycle", false,-1, 63,0);
    tracep->declQuad(c+679,"CsrPlugin_minstret", false,-1, 63,0);
    tracep->declBit(c+681,"CsrPlugin_exceptionPortCtrl_exceptionValids_decode", false,-1);
    tracep->declBit(c+682,"CsrPlugin_exceptionPortCtrl_exceptionValids_execute", false,-1);
    tracep->declBit(c+683,"CsrPlugin_exceptionPortCtrl_exceptionValids_memory", false,-1);
    tracep->declBit(c+684,"CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack", false,-1);
    tracep->declBit(c+538,"CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode", false,-1);
    tracep->declBit(c+539,"CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute", false,-1);
    tracep->declBit(c+540,"CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory", false,-1);
    tracep->declBit(c+541,"CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack", false,-1);
    tracep->declBus(c+685,"CsrPlugin_exceptionPortCtrl_exceptionContext_code", false,-1, 3,0);
    tracep->declBus(c+686,"CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr", false,-1, 31,0);
    tracep->declBus(c+1004,"CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilegeUncapped", false,-1, 1,0);
    tracep->declBus(c+1004,"CsrPlugin_exceptionPortCtrl_exceptionTargetPrivilege", false,-1, 1,0);
    tracep->declBit(c+567,"when_CsrPlugin_l922", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l922_1", false,-1);
    tracep->declBit(c+575,"when_CsrPlugin_l922_2", false,-1);
    tracep->declBit(c+576,"when_CsrPlugin_l922_3", false,-1);
    tracep->declBit(c+687,"when_CsrPlugin_l935", false,-1);
    tracep->declBit(c+688,"CsrPlugin_interrupt_valid", false,-1);
    tracep->declBus(c+960,"CsrPlugin_interrupt_code", false,-1, 3,0);
    tracep->declBus(c+689,"CsrPlugin_interrupt_targetPrivilege", false,-1, 1,0);
    tracep->declBit(c+665,"when_CsrPlugin_l959", false,-1);
    tracep->declBit(c+690,"when_CsrPlugin_l965", false,-1);
    tracep->declBit(c+691,"when_CsrPlugin_l965_1", false,-1);
    tracep->declBit(c+692,"when_CsrPlugin_l965_2", false,-1);
    tracep->declBit(c+684,"CsrPlugin_exception", false,-1);
    tracep->declBit(c+999,"CsrPlugin_lastStageWasWfi", false,-1);
    tracep->declBit(c+693,"CsrPlugin_pipelineLiberator_pcValids_0", false,-1);
    tracep->declBit(c+694,"CsrPlugin_pipelineLiberator_pcValids_1", false,-1);
    tracep->declBit(c+695,"CsrPlugin_pipelineLiberator_pcValids_2", false,-1);
    tracep->declBit(c+696,"CsrPlugin_pipelineLiberator_active", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l993", false,-1);
    tracep->declBit(c+575,"when_CsrPlugin_l993_1", false,-1);
    tracep->declBit(c+576,"when_CsrPlugin_l993_2", false,-1);
    tracep->declBit(c+697,"when_CsrPlugin_l998", false,-1);
    tracep->declBit(c+698,"CsrPlugin_pipelineLiberator_done", false,-1);
    tracep->declBit(c+699,"when_CsrPlugin_l1004", false,-1);
    tracep->declBit(c+961,"CsrPlugin_interruptJump", false,-1);
    tracep->declBit(c+962,"CsrPlugin_hadException", false,-1);
    tracep->declBus(c+700,"CsrPlugin_targetPrivilege", false,-1, 1,0);
    tracep->declBus(c+701,"CsrPlugin_trapCause", false,-1, 3,0);
    tracep->declBus(c+702,"CsrPlugin_xtvec_mode", false,-1, 1,0);
    tracep->declBus(c+703,"CsrPlugin_xtvec_base", false,-1, 29,0);
    tracep->declBit(c+704,"when_CsrPlugin_l1032", false,-1);
    tracep->declBit(c+705,"when_CsrPlugin_l1077", false,-1);
    tracep->declBus(c+706,"switch_CsrPlugin_l1081", false,-1, 1,0);
    tracep->declBit(c+707,"execute_CsrPlugin_wfiWake", false,-1);
    tracep->declBit(c+708,"when_CsrPlugin_l1129", false,-1);
    tracep->declBit(c+709,"execute_CsrPlugin_blockedBySideEffects", false,-1);
    tracep->declBit(c+710,"execute_CsrPlugin_illegalAccess", false,-1);
    tracep->declBit(c+2,"execute_CsrPlugin_illegalInstruction", false,-1);
    tracep->declBit(c+711,"when_CsrPlugin_l1149", false,-1);
    tracep->declBit(c+999,"when_CsrPlugin_l1150", false,-1);
    tracep->declBit(c+712,"when_CsrPlugin_l1157", false,-1);
    tracep->declBit(c+713,"execute_CsrPlugin_writeInstruction", false,-1);
    tracep->declBit(c+714,"execute_CsrPlugin_readInstruction", false,-1);
    tracep->declBit(c+715,"execute_CsrPlugin_writeEnable", false,-1);
    tracep->declBit(c+716,"execute_CsrPlugin_readEnable", false,-1);
    tracep->declBus(c+533,"execute_CsrPlugin_readToWriteData", false,-1, 31,0);
    tracep->declBit(c+717,"switch_Misc_l210_2", false,-1);
    tracep->declBit(c+718,"when_CsrPlugin_l1189", false,-1);
    tracep->declBit(c+718,"when_CsrPlugin_l1193", false,-1);
    tracep->declBus(c+719,"execute_CsrPlugin_csrAddress", false,-1, 11,0);
    tracep->declBit(c+720,"execute_MulPlugin_aSigned", false,-1);
    tracep->declBit(c+721,"execute_MulPlugin_bSigned", false,-1);
    tracep->declBus(c+457,"execute_MulPlugin_a", false,-1, 31,0);
    tracep->declBus(c+459,"execute_MulPlugin_b", false,-1, 31,0);
    tracep->declBus(c+607,"switch_MulPlugin_l87", false,-1, 1,0);
    tracep->declBus(c+722,"execute_MulPlugin_aULow", false,-1, 15,0);
    tracep->declBus(c+723,"execute_MulPlugin_bULow", false,-1, 15,0);
    tracep->declBus(c+724,"execute_MulPlugin_aSLow", false,-1, 16,0);
    tracep->declBus(c+725,"execute_MulPlugin_bSLow", false,-1, 16,0);
    tracep->declBus(c+726,"execute_MulPlugin_aHigh", false,-1, 16,0);
    tracep->declBus(c+727,"execute_MulPlugin_bHigh", false,-1, 16,0);
    tracep->declArray(c+728,"writeBack_MulPlugin_result", false,-1, 65,0);
    tracep->declBit(c+731,"when_MulPlugin_l147", false,-1);
    tracep->declBus(c+618,"switch_MulPlugin_l148", false,-1, 1,0);
    tracep->declQuad(c+732,"memory_DivPlugin_rs1", false,-1, 32,0);
    tracep->declBus(c+734,"memory_DivPlugin_rs2", false,-1, 31,0);
    tracep->declArray(c+735,"memory_DivPlugin_accumulator", false,-1, 64,0);
    tracep->declBit(c+996,"memory_DivPlugin_frontendOk", false,-1);
    tracep->declBit(c+738,"memory_DivPlugin_div_needRevert", false,-1);
    tracep->declBit(c+739,"memory_DivPlugin_div_counter_willIncrement", false,-1);
    tracep->declBit(c+740,"memory_DivPlugin_div_counter_willClear", false,-1);
    tracep->declBus(c+741,"memory_DivPlugin_div_counter_valueNext", false,-1, 5,0);
    tracep->declBus(c+742,"memory_DivPlugin_div_counter_value", false,-1, 5,0);
    tracep->declBit(c+743,"memory_DivPlugin_div_counter_willOverflowIfInc", false,-1);
    tracep->declBit(c+744,"memory_DivPlugin_div_counter_willOverflow", false,-1);
    tracep->declBit(c+745,"memory_DivPlugin_div_done", false,-1);
    tracep->declBit(c+746,"when_MulDivIterativePlugin_l126", false,-1);
    tracep->declBit(c+575,"when_MulDivIterativePlugin_l126_1", false,-1);
    tracep->declBus(c+747,"memory_DivPlugin_div_result", false,-1, 31,0);
    tracep->declBit(c+748,"when_MulDivIterativePlugin_l128", false,-1);
    tracep->declBit(c+749,"when_MulDivIterativePlugin_l129", false,-1);
    tracep->declBit(c+749,"when_MulDivIterativePlugin_l132", false,-1);
    tracep->declQuad(c+750,"memory_DivPlugin_div_stage_0_remainderShifted", false,-1, 32,0);
    tracep->declQuad(c+752,"memory_DivPlugin_div_stage_0_remainderMinusDenominator", false,-1, 32,0);
    tracep->declBus(c+754,"memory_DivPlugin_div_stage_0_outRemainder", false,-1, 31,0);
    tracep->declBus(c+755,"memory_DivPlugin_div_stage_0_outNumerator", false,-1, 31,0);
    tracep->declBit(c+746,"when_MulDivIterativePlugin_l151", false,-1);
    tracep->declBit(c+575,"when_MulDivIterativePlugin_l162", false,-1);
    tracep->declBus(c+756,"externalInterruptArray_regNext", false,-1, 31,0);
    tracep->declBit(c+574,"when_Pipeline_l124", false,-1);
    tracep->declBus(c+421,"decode_to_execute_PC", false,-1, 31,0);
    tracep->declBit(c+575,"when_Pipeline_l124_1", false,-1);
    tracep->declBus(c+398,"execute_to_memory_PC", false,-1, 31,0);
    tracep->declBit(c+757,"when_Pipeline_l124_2", false,-1);
    tracep->declBus(c+471,"memory_to_writeBack_PC", false,-1, 31,0);
    tracep->declBit(c+574,"when_Pipeline_l124_3", false,-1);
    tracep->declBus(c+462,"decode_to_execute_INSTRUCTION", false,-1, 31,0);
    tracep->declBit(c+575,"when_Pipeline_l124_4", false,-1);
    tracep->declBus(c+430,"execute_to_memory_INSTRUCTION", false,-1, 31,0);
    tracep->declBit(c+576,"when_Pipeline_l124_5", false,-1);
    tracep->declBus(c+472,"memory_to_writeBack_INSTRUCTION", false,-1, 31,0);
    tracep->declBit(c+574,"when_Pipeline_l124_6", false,-1);
    tracep->declBus(c+396,"decode_to_execute_FORMAL_PC_NEXT", false,-1, 31,0);
    tracep->declBit(c+575,"when_Pipeline_l124_7", false,-1);
    tracep->declBus(c+395,"execute_to_memory_FORMAL_PC_NEXT", false,-1, 31,0);
    tracep->declBit(c+576,"when_Pipeline_l124_8", false,-1);
    tracep->declBus(c+394,"memory_to_writeBack_FORMAL_PC_NEXT", false,-1, 31,0);
    tracep->declBit(c+574,"when_Pipeline_l124_9", false,-1);
    tracep->declBit(c+456,"decode_to_execute_MEMORY_FORCE_CONSTISTENCY", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_10", false,-1);
    tracep->declBus(c+442,"decode_to_execute_SRC1_CTRL", false,-1, 1,0);
    tracep->declBit(c+574,"when_Pipeline_l124_11", false,-1);
    tracep->declBit(c+440,"decode_to_execute_SRC_USE_SUB_LESS", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_12", false,-1);
    tracep->declBit(c+461,"decode_to_execute_MEMORY_ENABLE", false,-1);
    tracep->declBit(c+575,"when_Pipeline_l124_13", false,-1);
    tracep->declBit(c+455,"execute_to_memory_MEMORY_ENABLE", false,-1);
    tracep->declBit(c+576,"when_Pipeline_l124_14", false,-1);
    tracep->declBit(c+454,"memory_to_writeBack_MEMORY_ENABLE", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_15", false,-1);
    tracep->declBus(c+446,"decode_to_execute_ALU_CTRL", false,-1, 1,0);
    tracep->declBit(c+574,"when_Pipeline_l124_16", false,-1);
    tracep->declBus(c+441,"decode_to_execute_SRC2_CTRL", false,-1, 1,0);
    tracep->declBit(c+574,"when_Pipeline_l124_17", false,-1);
    tracep->declBit(c+427,"decode_to_execute_REGFILE_WRITE_VALID", false,-1);
    tracep->declBit(c+575,"when_Pipeline_l124_18", false,-1);
    tracep->declBit(c+429,"execute_to_memory_REGFILE_WRITE_VALID", false,-1);
    tracep->declBit(c+576,"when_Pipeline_l124_19", false,-1);
    tracep->declBit(c+432,"memory_to_writeBack_REGFILE_WRITE_VALID", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_20", false,-1);
    tracep->declBit(c+428,"decode_to_execute_BYPASSABLE_EXECUTE_STAGE", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_21", false,-1);
    tracep->declBit(c+388,"decode_to_execute_BYPASSABLE_MEMORY_STAGE", false,-1);
    tracep->declBit(c+575,"when_Pipeline_l124_22", false,-1);
    tracep->declBit(c+431,"execute_to_memory_BYPASSABLE_MEMORY_STAGE", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_23", false,-1);
    tracep->declBit(c+460,"decode_to_execute_MEMORY_WR", false,-1);
    tracep->declBit(c+575,"when_Pipeline_l124_24", false,-1);
    tracep->declBit(c+386,"execute_to_memory_MEMORY_WR", false,-1);
    tracep->declBit(c+576,"when_Pipeline_l124_25", false,-1);
    tracep->declBit(c+453,"memory_to_writeBack_MEMORY_WR", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_26", false,-1);
    tracep->declBit(c+458,"decode_to_execute_MEMORY_MANAGMENT", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_27", false,-1);
    tracep->declBit(c+438,"decode_to_execute_SRC_LESS_UNSIGNED", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_28", false,-1);
    tracep->declBus(c+449,"decode_to_execute_ALU_BITWISE_CTRL", false,-1, 1,0);
    tracep->declBit(c+574,"when_Pipeline_l124_29", false,-1);
    tracep->declBus(c+437,"decode_to_execute_SHIFT_CTRL", false,-1, 1,0);
    tracep->declBit(c+575,"when_Pipeline_l124_30", false,-1);
    tracep->declBus(c+436,"execute_to_memory_SHIFT_CTRL", false,-1, 1,0);
    tracep->declBit(c+574,"when_Pipeline_l124_31", false,-1);
    tracep->declBus(c+424,"decode_to_execute_BRANCH_CTRL", false,-1, 1,0);
    tracep->declBit(c+574,"when_Pipeline_l124_32", false,-1);
    tracep->declBit(c+415,"decode_to_execute_IS_CSR", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_33", false,-1);
    tracep->declBus(c+417,"decode_to_execute_ENV_CTRL", false,-1, 1,0);
    tracep->declBit(c+575,"when_Pipeline_l124_34", false,-1);
    tracep->declBus(c+416,"execute_to_memory_ENV_CTRL", false,-1, 1,0);
    tracep->declBit(c+576,"when_Pipeline_l124_35", false,-1);
    tracep->declBus(c+418,"memory_to_writeBack_ENV_CTRL", false,-1, 1,0);
    tracep->declBit(c+574,"when_Pipeline_l124_36", false,-1);
    tracep->declBit(c+378,"decode_to_execute_IS_MUL", false,-1);
    tracep->declBit(c+575,"when_Pipeline_l124_37", false,-1);
    tracep->declBit(c+377,"execute_to_memory_IS_MUL", false,-1);
    tracep->declBit(c+576,"when_Pipeline_l124_38", false,-1);
    tracep->declBit(c+403,"memory_to_writeBack_IS_MUL", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_39", false,-1);
    tracep->declBit(c+400,"decode_to_execute_IS_DIV", false,-1);
    tracep->declBit(c+575,"when_Pipeline_l124_40", false,-1);
    tracep->declBit(c+402,"execute_to_memory_IS_DIV", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_41", false,-1);
    tracep->declBit(c+399,"decode_to_execute_IS_RS1_SIGNED", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_42", false,-1);
    tracep->declBit(c+401,"decode_to_execute_IS_RS2_SIGNED", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_43", false,-1);
    tracep->declBus(c+457,"decode_to_execute_RS1", false,-1, 31,0);
    tracep->declBit(c+574,"when_Pipeline_l124_44", false,-1);
    tracep->declBus(c+459,"decode_to_execute_RS2", false,-1, 31,0);
    tracep->declBit(c+574,"when_Pipeline_l124_45", false,-1);
    tracep->declBit(c+439,"decode_to_execute_SRC2_FORCE_ZERO", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_46", false,-1);
    tracep->declBit(c+422,"decode_to_execute_PREDICTION_HAD_BRANCHED2", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_47", false,-1);
    tracep->declBit(c+414,"decode_to_execute_CSR_WRITE_OPCODE", false,-1);
    tracep->declBit(c+574,"when_Pipeline_l124_48", false,-1);
    tracep->declBit(c+413,"decode_to_execute_CSR_READ_OPCODE", false,-1);
    tracep->declBit(c+575,"when_Pipeline_l124_49", false,-1);
    tracep->declBus(c+368,"execute_to_memory_MEMORY_STORE_DATA_RF", false,-1, 31,0);
    tracep->declBit(c+576,"when_Pipeline_l124_50", false,-1);
    tracep->declBus(c+320,"memory_to_writeBack_MEMORY_STORE_DATA_RF", false,-1, 31,0);
    tracep->declBit(c+575,"when_Pipeline_l124_51", false,-1);
    tracep->declBus(c+317,"execute_to_memory_REGFILE_WRITE_DATA", false,-1, 31,0);
    tracep->declBit(c+576,"when_Pipeline_l124_52", false,-1);
    tracep->declBus(c+321,"memory_to_writeBack_REGFILE_WRITE_DATA", false,-1, 31,0);
    tracep->declBit(c+575,"when_Pipeline_l124_53", false,-1);
    tracep->declBus(c+435,"execute_to_memory_SHIFT_RIGHT", false,-1, 31,0);
    tracep->declBit(c+575,"when_Pipeline_l124_54", false,-1);
    tracep->declBit(c+420,"execute_to_memory_BRANCH_DO", false,-1);
    tracep->declBit(c+575,"when_Pipeline_l124_55", false,-1);
    tracep->declBus(c+419,"execute_to_memory_BRANCH_CALC", false,-1, 31,0);
    tracep->declBit(c+575,"when_Pipeline_l124_56", false,-1);
    tracep->declBus(c+412,"execute_to_memory_MUL_LL", false,-1, 31,0);
    tracep->declBit(c+575,"when_Pipeline_l124_57", false,-1);
    tracep->declQuad(c+410,"execute_to_memory_MUL_LH", false,-1, 33,0);
    tracep->declBit(c+575,"when_Pipeline_l124_58", false,-1);
    tracep->declQuad(c+408,"execute_to_memory_MUL_HL", false,-1, 33,0);
    tracep->declBit(c+575,"when_Pipeline_l124_59", false,-1);
    tracep->declQuad(c+355,"execute_to_memory_MUL_HH", false,-1, 33,0);
    tracep->declBit(c+576,"when_Pipeline_l124_60", false,-1);
    tracep->declQuad(c+404,"memory_to_writeBack_MUL_HH", false,-1, 33,0);
    tracep->declBit(c+576,"when_Pipeline_l124_61", false,-1);
    tracep->declQuad(c+406,"memory_to_writeBack_MUL_LOW", false,-1, 51,0);
    tracep->declBit(c+758,"when_Pipeline_l151", false,-1);
    tracep->declBit(c+479,"when_Pipeline_l154", false,-1);
    tracep->declBit(c+527,"when_Pipeline_l151_1", false,-1);
    tracep->declBit(c+489,"when_Pipeline_l154_1", false,-1);
    tracep->declBit(c+759,"when_Pipeline_l151_2", false,-1);
    tracep->declBit(c+498,"when_Pipeline_l154_2", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277", false,-1);
    tracep->declBit(c+760,"execute_CsrPlugin_csr_3264", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_1", false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__4(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__4\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+761,"execute_CsrPlugin_csr_768", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_2", false,-1);
    tracep->declBit(c+762,"execute_CsrPlugin_csr_836", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_3", false,-1);
    tracep->declBit(c+763,"execute_CsrPlugin_csr_772", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_4", false,-1);
    tracep->declBit(c+764,"execute_CsrPlugin_csr_773", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_5", false,-1);
    tracep->declBit(c+765,"execute_CsrPlugin_csr_833", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_6", false,-1);
    tracep->declBit(c+766,"execute_CsrPlugin_csr_834", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_7", false,-1);
    tracep->declBit(c+767,"execute_CsrPlugin_csr_835", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_8", false,-1);
    tracep->declBit(c+768,"execute_CsrPlugin_csr_3008", false,-1);
    tracep->declBit(c+574,"when_CsrPlugin_l1277_9", false,-1);
    tracep->declBit(c+769,"execute_CsrPlugin_csr_4032", false,-1);
    tracep->declBus(c+770,"switch_CsrPlugin_l723", false,-1, 1,0);
    tracep->declBit(c+999,"when_CsrPlugin_l1310", false,-1);
    tracep->declBit(c+771,"when_CsrPlugin_l1315", false,-1);
    tracep->declBit(c+772,"when_InstructionCache_l239", false,-1);
    tracep->declBus(c+579,"iBusWishbone_DAT_MISO_regNext", false,-1, 31,0);
    tracep->declBus(c+526,"dBusWishbone_DAT_MISO_regNext", false,-1, 31,0);
    tracep->declQuad(c+773,"decode_ENV_CTRL_string", false,-1, 39,0);
    tracep->declArray(c+775,"decode_SHIFT_CTRL_string", false,-1, 71,0);
    tracep->declQuad(c+778,"decode_ALU_BITWISE_CTRL_string", false,-1, 39,0);
    tracep->declBus(c+780,"decode_SRC2_CTRL_string", false,-1, 23,0);
    tracep->declQuad(c+781,"decode_ALU_CTRL_string", false,-1, 63,0);
    tracep->declArray(c+783,"decode_SRC1_CTRL_string", false,-1, 95,0);
    tracep->declQuad(c+786,"memory_ENV_CTRL_string", false,-1, 39,0);
    tracep->declQuad(c+788,"execute_ENV_CTRL_string", false,-1, 39,0);
    tracep->declQuad(c+790,"writeBack_ENV_CTRL_string", false,-1, 39,0);
    tracep->declBus(c+792,"execute_BRANCH_CTRL_string", false,-1, 31,0);
    tracep->declArray(c+793,"memory_SHIFT_CTRL_string", false,-1, 71,0);
    tracep->declArray(c+796,"execute_SHIFT_CTRL_string", false,-1, 71,0);
    tracep->declBus(c+799,"execute_SRC2_CTRL_string", false,-1, 23,0);
    tracep->declArray(c+800,"execute_SRC1_CTRL_string", false,-1, 95,0);
    tracep->declQuad(c+803,"execute_ALU_CTRL_string", false,-1, 63,0);
    tracep->declQuad(c+805,"execute_ALU_BITWISE_CTRL_string", false,-1, 39,0);
    tracep->declBus(c+807,"decode_BRANCH_CTRL_string", false,-1, 31,0);
    tracep->declArray(c+808,"decode_to_execute_SRC1_CTRL_string", false,-1, 95,0);
    tracep->declQuad(c+803,"decode_to_execute_ALU_CTRL_string", false,-1, 63,0);
    tracep->declBus(c+799,"decode_to_execute_SRC2_CTRL_string", false,-1, 23,0);
    tracep->declQuad(c+805,"decode_to_execute_ALU_BITWISE_CTRL_string", false,-1, 39,0);
    tracep->declArray(c+811,"decode_to_execute_SHIFT_CTRL_string", false,-1, 71,0);
    tracep->declArray(c+814,"execute_to_memory_SHIFT_CTRL_string", false,-1, 71,0);
    tracep->declBus(c+792,"decode_to_execute_BRANCH_CTRL_string", false,-1, 31,0);
    tracep->declQuad(c+788,"decode_to_execute_ENV_CTRL_string", false,-1, 39,0);
    tracep->declQuad(c+786,"execute_to_memory_ENV_CTRL_string", false,-1, 39,0);
    tracep->declQuad(c+790,"memory_to_writeBack_ENV_CTRL_string", false,-1, 39,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+963+i*1,"RegFilePlugin_regFile", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("IBusCachedPlugin_cache ");
    tracep->declBit(c+308,"io_flush", false,-1);
    tracep->declBit(c+309,"io_cpu_prefetch_isValid", false,-1);
    tracep->declBit(c+326,"io_cpu_prefetch_haltIt", false,-1);
    tracep->declBus(c+549,"io_cpu_prefetch_pc", false,-1, 31,0);
    tracep->declBit(c+310,"io_cpu_fetch_isValid", false,-1);
    tracep->declBit(c+311,"io_cpu_fetch_isStuck", false,-1);
    tracep->declBit(c+1005,"io_cpu_fetch_isRemoved", false,-1);
    tracep->declBus(c+950,"io_cpu_fetch_pc", false,-1, 31,0);
    tracep->declBus(c+327,"io_cpu_fetch_data", false,-1, 31,0);
    tracep->declBus(c+950,"io_cpu_fetch_mmuRsp_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+955,"io_cpu_fetch_mmuRsp_isIoAccess", false,-1);
    tracep->declBit(c+999,"io_cpu_fetch_mmuRsp_isPaging", false,-1);
    tracep->declBit(c+996,"io_cpu_fetch_mmuRsp_allowRead", false,-1);
    tracep->declBit(c+996,"io_cpu_fetch_mmuRsp_allowWrite", false,-1);
    tracep->declBit(c+996,"io_cpu_fetch_mmuRsp_allowExecute", false,-1);
    tracep->declBit(c+999,"io_cpu_fetch_mmuRsp_exception", false,-1);
    tracep->declBit(c+999,"io_cpu_fetch_mmuRsp_refilling", false,-1);
    tracep->declBit(c+1017,"io_cpu_fetch_mmuRsp_bypassTranslation", false,-1);
    tracep->declBus(c+950,"io_cpu_fetch_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+312,"io_cpu_decode_isValid", false,-1);
    tracep->declBit(c+311,"io_cpu_decode_isStuck", false,-1);
    tracep->declBus(c+470,"io_cpu_decode_pc", false,-1, 31,0);
    tracep->declBus(c+333,"io_cpu_decode_physicalAddress", false,-1, 31,0);
    tracep->declBus(c+331,"io_cpu_decode_data", false,-1, 31,0);
    tracep->declBit(c+332,"io_cpu_decode_cacheMiss", false,-1);
    tracep->declBit(c+328,"io_cpu_decode_error", false,-1);
    tracep->declBit(c+329,"io_cpu_decode_mmuRefilling", false,-1);
    tracep->declBit(c+330,"io_cpu_decode_mmuException", false,-1);
    tracep->declBit(c+999,"io_cpu_decode_isUser", false,-1);
    tracep->declBit(c+313,"io_cpu_fill_valid", false,-1);
    tracep->declBus(c+333,"io_cpu_fill_payload", false,-1, 31,0);
    tracep->declBit(c+334,"io_mem_cmd_valid", false,-1);
    tracep->declBit(c+577,"io_mem_cmd_ready", false,-1);
    tracep->declBus(c+335,"io_mem_cmd_payload_address", false,-1, 31,0);
    tracep->declBus(c+1015,"io_mem_cmd_payload_size", false,-1, 2,0);
    tracep->declBit(c+578,"io_mem_rsp_valid", false,-1);
    tracep->declBus(c+579,"io_mem_rsp_payload_data", false,-1, 31,0);
    tracep->declBit(c+999,"io_mem_rsp_payload_error", false,-1);
    tracep->declBit(c+939,"clk", false,-1);
    tracep->declBit(c+307,"reset", false,-1);
    tracep->declBit(c+817,"lineLoader_fire", false,-1);
    tracep->declBit(c+818,"lineLoader_valid", false,-1);
    tracep->declBus(c+819,"lineLoader_address", false,-1, 31,0);
    tracep->declBit(c+820,"lineLoader_hadError", false,-1);
    tracep->declBit(c+821,"lineLoader_flushPending", false,-1);
    tracep->declBus(c+822,"lineLoader_flushCounter", false,-1, 7,0);
    tracep->declBit(c+823,"when_InstructionCache_l338", false,-1);
    tracep->declBit(c+824,"when_InstructionCache_l342", false,-1);
    tracep->declBit(c+825,"when_InstructionCache_l351", false,-1);
    tracep->declBit(c+826,"lineLoader_cmdSent", false,-1);
    tracep->declBit(c+577,"io_mem_cmd_fire", false,-1);
    tracep->declBit(c+827,"when_Utils_l515", false,-1);
    tracep->declBit(c+828,"lineLoader_wayToAllocate_willIncrement", false,-1);
    tracep->declBit(c+999,"lineLoader_wayToAllocate_willClear", false,-1);
    tracep->declBit(c+996,"lineLoader_wayToAllocate_willOverflowIfInc", false,-1);
    tracep->declBit(c+828,"lineLoader_wayToAllocate_willOverflow", false,-1);
    tracep->declBus(c+829,"lineLoader_wordIndex", false,-1, 2,0);
    tracep->declBit(c+830,"lineLoader_write_tag_0_valid", false,-1);
    tracep->declBus(c+831,"lineLoader_write_tag_0_payload_address", false,-1, 6,0);
    tracep->declBit(c+832,"lineLoader_write_tag_0_payload_data_valid", false,-1);
    tracep->declBit(c+820,"lineLoader_write_tag_0_payload_data_error", false,-1);
    tracep->declBus(c+833,"lineLoader_write_tag_0_payload_data_address", false,-1, 19,0);
    tracep->declBit(c+578,"lineLoader_write_data_0_valid", false,-1);
    tracep->declBus(c+834,"lineLoader_write_data_0_payload_address", false,-1, 9,0);
    tracep->declBus(c+579,"lineLoader_write_data_0_payload_data", false,-1, 31,0);
    tracep->declBit(c+835,"when_InstructionCache_l401", false,-1);
    tracep->declBus(c+327,"fetchStage_read_banksValue_0_dataMem", false,-1, 31,0);
    tracep->declBus(c+327,"fetchStage_read_banksValue_0_data", false,-1, 31,0);
    tracep->declBit(c+836,"fetchStage_read_waysValues_0_tag_valid", false,-1);
    tracep->declBit(c+837,"fetchStage_read_waysValues_0_tag_error", false,-1);
    tracep->declBus(c+838,"fetchStage_read_waysValues_0_tag_address", false,-1, 19,0);
    tracep->declBit(c+995,"fetchStage_hit_hits_0", false,-1);
    tracep->declBit(c+995,"fetchStage_hit_valid", false,-1);
    tracep->declBit(c+837,"fetchStage_hit_error", false,-1);
    tracep->declBus(c+327,"fetchStage_hit_data", false,-1, 31,0);
    tracep->declBus(c+327,"fetchStage_hit_word", false,-1, 31,0);
    tracep->declBit(c+563,"when_InstructionCache_l435", false,-1);
    tracep->declBus(c+331,"io_cpu_fetch_data_regNextWhen", false,-1, 31,0);
    tracep->declBit(c+563,"when_InstructionCache_l459", false,-1);
    tracep->declBus(c+333,"decodeStage_mmuRsp_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+839,"decodeStage_mmuRsp_isIoAccess", false,-1);
    tracep->declBit(c+840,"decodeStage_mmuRsp_isPaging", false,-1);
    tracep->declBit(c+841,"decodeStage_mmuRsp_allowRead", false,-1);
    tracep->declBit(c+842,"decodeStage_mmuRsp_allowWrite", false,-1);
    tracep->declBit(c+843,"decodeStage_mmuRsp_allowExecute", false,-1);
    tracep->declBit(c+844,"decodeStage_mmuRsp_exception", false,-1);
    tracep->declBit(c+329,"decodeStage_mmuRsp_refilling", false,-1);
    tracep->declBit(c+845,"decodeStage_mmuRsp_bypassTranslation", false,-1);
    tracep->declBit(c+563,"when_InstructionCache_l459_1", false,-1);
    tracep->declBit(c+846,"decodeStage_hit_valid", false,-1);
    tracep->declBit(c+563,"when_InstructionCache_l459_2", false,-1);
    tracep->declBit(c+847,"decodeStage_hit_error", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dataCache_1 ");
    tracep->declBit(c+314,"io_cpu_execute_isValid", false,-1);
    tracep->declBus(c+315,"io_cpu_execute_address", false,-1, 31,0);
    tracep->declBit(c+336,"io_cpu_execute_haltIt", false,-1);
    tracep->declBit(c+460,"io_cpu_execute_args_wr", false,-1);
    tracep->declBus(c+607,"io_cpu_execute_args_size", false,-1, 1,0);
    tracep->declBit(c+456,"io_cpu_execute_args_totalyConsistent", false,-1);
    tracep->declBit(c+337,"io_cpu_execute_refilling", false,-1);
    tracep->declBit(c+316,"io_cpu_memory_isValid", false,-1);
    tracep->declBit(c+495,"io_cpu_memory_isStuck", false,-1);
    tracep->declBit(c+338,"io_cpu_memory_isWrite", false,-1);
    tracep->declBus(c+317,"io_cpu_memory_address", false,-1, 31,0);
    tracep->declBus(c+317,"io_cpu_memory_mmuRsp_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+318,"io_cpu_memory_mmuRsp_isIoAccess", false,-1);
    tracep->declBit(c+999,"io_cpu_memory_mmuRsp_isPaging", false,-1);
    tracep->declBit(c+996,"io_cpu_memory_mmuRsp_allowRead", false,-1);
    tracep->declBit(c+996,"io_cpu_memory_mmuRsp_allowWrite", false,-1);
    tracep->declBit(c+996,"io_cpu_memory_mmuRsp_allowExecute", false,-1);
    tracep->declBit(c+999,"io_cpu_memory_mmuRsp_exception", false,-1);
    tracep->declBit(c+999,"io_cpu_memory_mmuRsp_refilling", false,-1);
    tracep->declBit(c+1019,"io_cpu_memory_mmuRsp_bypassTranslation", false,-1);
    tracep->declBit(c+319,"io_cpu_writeBack_isValid", false,-1);
    tracep->declBit(c+496,"io_cpu_writeBack_isStuck", false,-1);
    tracep->declBit(c+505,"io_cpu_writeBack_isFiring", false,-1);
    tracep->declBit(c+999,"io_cpu_writeBack_isUser", false,-1);
    tracep->declBit(c+339,"io_cpu_writeBack_haltIt", false,-1);
    tracep->declBit(c+344,"io_cpu_writeBack_isWrite", false,-1);
    tracep->declBus(c+320,"io_cpu_writeBack_storeData", false,-1, 31,0);
    tracep->declBus(c+340,"io_cpu_writeBack_data", false,-1, 31,0);
    tracep->declBus(c+321,"io_cpu_writeBack_address", false,-1, 31,0);
    tracep->declBit(c+341,"io_cpu_writeBack_mmuException", false,-1);
    tracep->declBit(c+342,"io_cpu_writeBack_unalignedAccess", false,-1);
    tracep->declBit(c+343,"io_cpu_writeBack_accessError", false,-1);
    tracep->declBit(c+999,"io_cpu_writeBack_keepMemRspData", false,-1);
    tracep->declBit(c+1006,"io_cpu_writeBack_fence_SW", false,-1);
    tracep->declBit(c+1007,"io_cpu_writeBack_fence_SR", false,-1);
    tracep->declBit(c+1008,"io_cpu_writeBack_fence_SO", false,-1);
    tracep->declBit(c+1009,"io_cpu_writeBack_fence_SI", false,-1);
    tracep->declBit(c+1010,"io_cpu_writeBack_fence_PW", false,-1);
    tracep->declBit(c+1011,"io_cpu_writeBack_fence_PR", false,-1);
    tracep->declBit(c+1012,"io_cpu_writeBack_fence_PO", false,-1);
    tracep->declBit(c+1013,"io_cpu_writeBack_fence_PI", false,-1);
    tracep->declBus(c+1014,"io_cpu_writeBack_fence_FM", false,-1, 3,0);
    tracep->declBit(c+1016,"io_cpu_writeBack_exclusiveOk", false,-1);
    tracep->declBit(c+346,"io_cpu_redo", false,-1);
    tracep->declBit(c+322,"io_cpu_flush_valid", false,-1);
    tracep->declBit(c+345,"io_cpu_flush_ready", false,-1);
    tracep->declBit(c+323,"io_cpu_flush_payload_singleLine", false,-1);
    tracep->declBus(c+324,"io_cpu_flush_payload_lineId", false,-1, 6,0);
    tracep->declBit(c+347,"io_mem_cmd_valid", false,-1);
    tracep->declBit(c+325,"io_mem_cmd_ready", false,-1);
    tracep->declBit(c+348,"io_mem_cmd_payload_wr", false,-1);
    tracep->declBit(c+349,"io_mem_cmd_payload_uncached", false,-1);
    tracep->declBus(c+350,"io_mem_cmd_payload_address", false,-1, 31,0);
    tracep->declBus(c+320,"io_mem_cmd_payload_data", false,-1, 31,0);
    tracep->declBus(c+351,"io_mem_cmd_payload_mask", false,-1, 3,0);
    tracep->declBus(c+352,"io_mem_cmd_payload_size", false,-1, 2,0);
    tracep->declBit(c+996,"io_mem_cmd_payload_last", false,-1);
    tracep->declBit(c+525,"io_mem_rsp_valid", false,-1);
    tracep->declBit(c+1018,"io_mem_rsp_payload_last", false,-1);
    tracep->declBus(c+526,"io_mem_rsp_payload_data", false,-1, 31,0);
    tracep->declBit(c+999,"io_mem_rsp_payload_error", false,-1);
    tracep->declBit(c+939,"clk", false,-1);
    tracep->declBit(c+307,"reset", false,-1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__5(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__5\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+999,"haltCpu", false,-1);
    tracep->declBit(c+848,"tagsReadCmd_valid", false,-1);
    tracep->declBus(c+849,"tagsReadCmd_payload", false,-1, 6,0);
    tracep->declBit(c+850,"tagsWriteCmd_valid", false,-1);
    tracep->declBus(c+851,"tagsWriteCmd_payload_way", false,-1, 0,0);
    tracep->declBus(c+852,"tagsWriteCmd_payload_address", false,-1, 6,0);
    tracep->declBit(c+853,"tagsWriteCmd_payload_data_valid", false,-1);
    tracep->declBit(c+854,"tagsWriteCmd_payload_data_error", false,-1);
    tracep->declBus(c+855,"tagsWriteCmd_payload_data_address", false,-1, 19,0);
    tracep->declBit(c+856,"tagsWriteLastCmd_valid", false,-1);
    tracep->declBus(c+857,"tagsWriteLastCmd_payload_way", false,-1, 0,0);
    tracep->declBus(c+858,"tagsWriteLastCmd_payload_address", false,-1, 6,0);
    tracep->declBit(c+859,"tagsWriteLastCmd_payload_data_valid", false,-1);
    tracep->declBit(c+860,"tagsWriteLastCmd_payload_data_error", false,-1);
    tracep->declBus(c+861,"tagsWriteLastCmd_payload_data_address", false,-1, 19,0);
    tracep->declBit(c+862,"dataReadCmd_valid", false,-1);
    tracep->declBus(c+863,"dataReadCmd_payload", false,-1, 9,0);
    tracep->declBit(c+864,"dataWriteCmd_valid", false,-1);
    tracep->declBus(c+865,"dataWriteCmd_payload_way", false,-1, 0,0);
    tracep->declBus(c+866,"dataWriteCmd_payload_address", false,-1, 9,0);
    tracep->declBus(c+867,"dataWriteCmd_payload_data", false,-1, 31,0);
    tracep->declBus(c+868,"dataWriteCmd_payload_mask", false,-1, 3,0);
    tracep->declBit(c+869,"ways_0_tagsReadRsp_valid", false,-1);
    tracep->declBit(c+870,"ways_0_tagsReadRsp_error", false,-1);
    tracep->declBus(c+871,"ways_0_tagsReadRsp_address", false,-1, 19,0);
    tracep->declBus(c+872,"ways_0_dataReadRspMem", false,-1, 31,0);
    tracep->declBus(c+872,"ways_0_dataReadRsp", false,-1, 31,0);
    tracep->declBit(c+873,"when_DataCache_l642", false,-1);
    tracep->declBit(c+874,"when_DataCache_l645", false,-1);
    tracep->declBit(c+875,"when_DataCache_l664", false,-1);
    tracep->declBit(c+996,"rspSync", false,-1);
    tracep->declBit(c+996,"rspLast", false,-1);
    tracep->declBit(c+876,"memCmdSent", false,-1);
    tracep->declBit(c+877,"io_mem_cmd_fire", false,-1);
    tracep->declBit(c+576,"when_DataCache_l686", false,-1);
    tracep->declBus(c+878,"stage0_mask", false,-1, 3,0);
    tracep->declBus(c+879,"stage0_dataColisions", false,-1, 0,0);
    tracep->declBus(c+999,"stage0_wayInvalidate", false,-1, 0,0);
    tracep->declBit(c+999,"stage0_isAmo", false,-1);
    tracep->declBit(c+575,"when_DataCache_l771", false,-1);
    tracep->declBit(c+338,"stageA_request_wr", false,-1);
    tracep->declBus(c+880,"stageA_request_size", false,-1, 1,0);
    tracep->declBit(c+881,"stageA_request_totalyConsistent", false,-1);
    tracep->declBit(c+575,"when_DataCache_l771_1", false,-1);
    tracep->declBus(c+882,"stageA_mask", false,-1, 3,0);
    tracep->declBit(c+999,"stageA_isAmo", false,-1);
    tracep->declBit(c+999,"stageA_isLrsc", false,-1);
    tracep->declBus(c+883,"stageA_wayHits", false,-1, 0,0);
    tracep->declBit(c+575,"when_DataCache_l771_2", false,-1);
    tracep->declBus(c+884,"stageA_wayInvalidate", false,-1, 0,0);
    tracep->declBit(c+575,"when_DataCache_l771_3", false,-1);
    tracep->declBus(c+885,"stage0_dataColisions_regNextWhen", false,-1, 0,0);
    tracep->declBus(c+886,"stageA_dataColisions", false,-1, 0,0);
    tracep->declBit(c+576,"when_DataCache_l822", false,-1);
    tracep->declBit(c+344,"stageB_request_wr", false,-1);
    tracep->declBus(c+887,"stageB_request_size", false,-1, 1,0);
    tracep->declBit(c+888,"stageB_request_totalyConsistent", false,-1);
    tracep->declBit(c+889,"stageB_mmuRspFreeze", false,-1);
    tracep->declBit(c+890,"when_DataCache_l824", false,-1);
    tracep->declBus(c+891,"stageB_mmuRsp_physicalAddress", false,-1, 31,0);
    tracep->declBit(c+349,"stageB_mmuRsp_isIoAccess", false,-1);
    tracep->declBit(c+892,"stageB_mmuRsp_isPaging", false,-1);
    tracep->declBit(c+893,"stageB_mmuRsp_allowRead", false,-1);
    tracep->declBit(c+894,"stageB_mmuRsp_allowWrite", false,-1);
    tracep->declBit(c+895,"stageB_mmuRsp_allowExecute", false,-1);
    tracep->declBit(c+896,"stageB_mmuRsp_exception", false,-1);
    tracep->declBit(c+897,"stageB_mmuRsp_refilling", false,-1);
    tracep->declBit(c+898,"stageB_mmuRsp_bypassTranslation", false,-1);
    tracep->declBit(c+576,"when_DataCache_l821", false,-1);
    tracep->declBit(c+899,"stageB_tagsReadRsp_0_valid", false,-1);
    tracep->declBit(c+900,"stageB_tagsReadRsp_0_error", false,-1);
    tracep->declBus(c+901,"stageB_tagsReadRsp_0_address", false,-1, 19,0);
    tracep->declBit(c+576,"when_DataCache_l821_1", false,-1);
    tracep->declBus(c+902,"stageB_dataReadRsp_0", false,-1, 31,0);
    tracep->declBit(c+576,"when_DataCache_l820", false,-1);
    tracep->declBus(c+903,"stageB_wayInvalidate", false,-1, 0,0);
    tracep->declBit(c+999,"stageB_consistancyHazard", false,-1);
    tracep->declBit(c+576,"when_DataCache_l820_1", false,-1);
    tracep->declBus(c+904,"stageB_dataColisions", false,-1, 0,0);
    tracep->declBit(c+576,"when_DataCache_l820_2", false,-1);
    tracep->declBit(c+905,"stageB_unaligned", false,-1);
    tracep->declBit(c+576,"when_DataCache_l820_3", false,-1);
    tracep->declBus(c+906,"stageB_waysHitsBeforeInvalidate", false,-1, 0,0);
    tracep->declBus(c+907,"stageB_waysHits", false,-1, 0,0);
    tracep->declBit(c+908,"stageB_waysHit", false,-1);
    tracep->declBus(c+902,"stageB_dataMux", false,-1, 31,0);
    tracep->declBit(c+576,"when_DataCache_l820_4", false,-1);
    tracep->declBus(c+351,"stageB_mask", false,-1, 3,0);
    tracep->declBit(c+909,"stageB_loaderValid", false,-1);
    tracep->declBus(c+526,"stageB_ioMemRspMuxed", false,-1, 31,0);
    tracep->declBit(c+910,"stageB_flusher_waitDone", false,-1);
    tracep->declBit(c+999,"stageB_flusher_hold", false,-1);
    tracep->declBus(c+911,"stageB_flusher_counter", false,-1, 7,0);
    tracep->declBit(c+912,"when_DataCache_l850", false,-1);
    tracep->declBit(c+996,"when_DataCache_l856", false,-1);
    tracep->declBit(c+913,"stageB_flusher_start", false,-1);
    tracep->declBit(c+999,"stageB_isAmo", false,-1);
    tracep->declBit(c+999,"stageB_isAmoCached", false,-1);
    tracep->declBit(c+999,"stageB_isExternalLsrc", false,-1);
    tracep->declBit(c+999,"stageB_isExternalAmo", false,-1);
    tracep->declBus(c+320,"stageB_requestDataBypass", false,-1, 31,0);
    tracep->declBit(c+914,"stageB_cpuWriteToCache", false,-1);
    tracep->declBit(c+915,"when_DataCache_l926", false,-1);
    tracep->declBit(c+916,"stageB_badPermissions", false,-1);
    tracep->declBit(c+917,"stageB_loadStoreFault", false,-1);
    tracep->declBit(c+349,"stageB_bypassCache", false,-1);
    tracep->declBit(c+918,"when_DataCache_l995", false,-1);
    tracep->declBit(c+919,"when_DataCache_l1004", false,-1);
    tracep->declBit(c+920,"when_DataCache_l1009", false,-1);
    tracep->declBit(c+921,"when_DataCache_l1020", false,-1);
    tracep->declBit(c+922,"when_DataCache_l1032", false,-1);
    tracep->declBit(c+349,"when_DataCache_l991", false,-1);
    tracep->declBit(c+923,"when_DataCache_l1066", false,-1);
    tracep->declBit(c+924,"when_DataCache_l1075", false,-1);
    tracep->declBit(c+337,"loader_valid", false,-1);
    tracep->declBit(c+925,"loader_counter_willIncrement", false,-1);
    tracep->declBit(c+999,"loader_counter_willClear", false,-1);
    tracep->declBus(c+926,"loader_counter_valueNext", false,-1, 2,0);
    tracep->declBus(c+927,"loader_counter_value", false,-1, 2,0);
    tracep->declBit(c+928,"loader_counter_willOverflowIfInc", false,-1);
    tracep->declBit(c+929,"loader_counter_willOverflow", false,-1);
    tracep->declBus(c+930,"loader_waysAllocator", false,-1, 0,0);
    tracep->declBit(c+931,"loader_error", false,-1);
    tracep->declBit(c+999,"loader_kill", false,-1);
    tracep->declBit(c+932,"loader_killReg", false,-1);
    tracep->declBit(c+933,"when_DataCache_l1090", false,-1);
    tracep->declBit(c+929,"loader_done", false,-1);
    tracep->declBit(c+934,"when_DataCache_l1118", false,-1);
    tracep->declBit(c+935,"loader_valid_regNext", false,-1);
    tracep->declBit(c+936,"when_DataCache_l1122", false,-1);
    tracep->declBit(c+937,"when_DataCache_l1125", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vsim___024root__trace_init_top(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_init_top\n"); );
    // Body
    Vsim___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("sim ");
    Vsim___024root__trace_init_sub__TOP__sim__0(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__1(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__2(vlSelf, tracep);
    tracep->pushNamePrefix("VexRiscv ");
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__0(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__1(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__2(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__3(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__4(vlSelf, tracep);
    Vsim___024root__trace_init_sub__TOP__sim__VexRiscv__5(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vsim___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsim___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsim___024root__trace_register(Vsim___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsim___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vsim___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vsim___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_sub_1(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_sub_2(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_sub_5(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsim___024root__trace_full_sub_6(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsim___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_top_0\n"); );
    // Init
    Vsim___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsim___024root*>(voidSelf);
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsim___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_sub_1((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_sub_2((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_sub_3((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_sub_4((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_sub_5((&vlSymsp->TOP), bufp);
    Vsim___024root__trace_full_sub_6((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_0(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSymsp->TOP__sim.__PVT__builder_array_muxed7),2);
    bufp->fullBit(oldp+2,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalInstruction));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable));
    bufp->fullCData(oldp+4,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_payload_data),8);
    bufp->fullBit(oldp+5,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
    bufp->fullBit(oldp+6,(vlSymsp->TOP__sim.__PVT__main_int_rst));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__sim.__PVT__main_soc_rst));
    bufp->fullBit(oldp+8,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage) 
                                 >> 1U))));
    bufp->fullCData(oldp+9,(vlSymsp->TOP__sim.__PVT__main_reset_storage),2);
    bufp->fullBit(oldp+10,(vlSymsp->TOP__sim.__PVT__main_reset_re));
    bufp->fullIData(oldp+11,(vlSymsp->TOP__sim.__PVT__main_scratch_storage),32);
    bufp->fullBit(oldp+12,(vlSymsp->TOP__sim.__PVT__main_scratch_re));
    bufp->fullIData(oldp+13,(vlSymsp->TOP__sim.__PVT__main_bus_errors),32);
    bufp->fullBit(oldp+14,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_bus_errors_we));
    bufp->fullBit(oldp+15,(vlSymsp->TOP__sim.__PVT__main_bus_errors_re));
    bufp->fullBit(oldp+16,(vlSymsp->TOP__sim.__PVT__builder_error));
    bufp->fullBit(oldp+17,(((IData)(vlSymsp->TOP__sim.__PVT__main_soc_rst) 
                            | ((IData)(vlSymsp->TOP__sim.__PVT__main_reset_storage) 
                               >> 1U))));
    bufp->fullIData(oldp+18,(vlSymsp->TOP__sim.__PVT__main_interrupt),32);
    bufp->fullIData(oldp+19,(((0x3ffffff8U & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address 
                                              >> 2U)) 
                              | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))),30);
    bufp->fullIData(oldp+20,(vlSymsp->TOP__sim.__PVT__builder_shared_dat_r),32);
    bufp->fullBit(oldp+21,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_CYC));
    bufp->fullBit(oldp+22,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_STB));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__sim.__PVT__main_ibus_ack));
    bufp->fullCData(oldp+24,(((7U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBusWishbone_ADR))
                               ? 7U : 2U)),3);
    bufp->fullIData(oldp+25,((((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                                ? ((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address) 
                                   | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready) 
                                      << 2U)) : (0xfffffffcU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address)) 
                              >> 2U)),30);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_data),32);
    bufp->fullCData(oldp+27,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr)
                               ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask)
                               : 0xfU)),4);
    bufp->fullBit(oldp+28,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__sim.__PVT__main_dbus_ack));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr));
    bufp->fullCData(oldp+31,(((5U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size))
                               ? ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)
                                   ? 7U : 2U) : 0U)),3);
    bufp->fullIData(oldp+32,((0x3fffffffU & vlSymsp->TOP__sim.__PVT__builder_array_muxed0)),30);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__sim.__PVT__builder_array_muxed1),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__sim.__PVT__rom_dat0),32);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__sim.__PVT__builder_array_muxed2),4);
    bufp->fullBit(oldp+36,(((IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed3) 
                            & (IData)(vlSymsp->TOP__sim.__PVT__builder_slave_sel))));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__sim.__PVT__builder_array_muxed4));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__sim.__PVT__main_simsoc_ram_bus_ack));
    bufp->fullBit(oldp+39,(vlSymsp->TOP__sim.__PVT__builder_array_muxed5));
    bufp->fullCData(oldp+40,(vlSymsp->TOP__sim.__PVT__builder_array_muxed6),3);
    bufp->fullSData(oldp+41,((0x7fffU & vlSymsp->TOP__sim.__PVT__builder_array_muxed0)),15);
    bufp->fullIData(oldp+42,(vlSymsp->TOP__sim.__PVT__sram
                             [vlSymsp->TOP__sim.__PVT__sram_adr0]),32);
    bufp->fullBit(oldp+43,(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_cyc));
    bufp->fullBit(oldp+44,(vlSymsp->TOP__sim.__PVT__main_ram_bus_ram_bus_ack));
    bufp->fullSData(oldp+45,((0x7ffU & vlSymsp->TOP__sim.__PVT__builder_array_muxed0)),11);
    bufp->fullCData(oldp+46,(vlSymsp->TOP__sim.__PVT__main_ram_we),4);
    bufp->fullBit(oldp+47,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_first));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_fifo_out_last));
    bufp->fullBit(oldp+49,(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re));
    bufp->fullCData(oldp+50,((0xffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),8);
    bufp->fullBit(oldp+51,(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_we));
    bufp->fullCData(oldp+52,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_payload_data),8);
    bufp->fullBit(oldp+53,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
    bufp->fullBit(oldp+54,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_we));
    bufp->fullBit(oldp+55,(vlSymsp->TOP__sim.__PVT__main_uart_txfull_re));
    bufp->fullBit(oldp+56,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)))));
    bufp->fullBit(oldp+57,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_we));
    bufp->fullBit(oldp+58,(vlSymsp->TOP__sim.__PVT__main_uart_rxempty_re));
    bufp->fullBit(oldp+59,((1U & (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status) 
                                   & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)) 
                                  | (((IData)(vlSymsp->TOP__sim.__PVT__main_uart_pending_status) 
                                      & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage)) 
                                     >> 1U)))));
    bufp->fullBit(oldp+60,((0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
    bufp->fullBit(oldp+61,(vlSymsp->TOP__sim.__PVT__main_uart_tx_pending));
    bufp->fullBit(oldp+62,(vlSymsp->TOP__sim.__PVT__main_uart_tx_clear));
    bufp->fullBit(oldp+63,(vlSymsp->TOP__sim.__PVT__main_uart_tx_trigger_d));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable));
    bufp->fullBit(oldp+65,(vlSymsp->TOP__sim.__PVT__main_uart_rx_pending));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__sim.__PVT__main_uart_rx_clear));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__sim.__PVT__main_uart_rx_trigger_d));
    bufp->fullCData(oldp+68,(vlSymsp->TOP__sim.__PVT__main_uart_status_status),2);
    bufp->fullBit(oldp+69,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_we));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__sim.__PVT__main_uart_status_re));
    bufp->fullCData(oldp+71,(vlSymsp->TOP__sim.__PVT__main_uart_pending_status),2);
    bufp->fullBit(oldp+72,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_we));
    bufp->fullBit(oldp+73,(vlSymsp->TOP__sim.__PVT__main_uart_pending_re));
    bufp->fullCData(oldp+74,(vlSymsp->TOP__sim.__PVT__main_uart_pending_r),2);
    bufp->fullBit(oldp+75,((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage))));
    bufp->fullBit(oldp+76,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage) 
                                  >> 1U))));
    bufp->fullCData(oldp+77,(vlSymsp->TOP__sim.__PVT__main_uart_enable_storage),2);
    bufp->fullBit(oldp+78,(vlSymsp->TOP__sim.__PVT__main_uart_enable_re));
    bufp->fullBit(oldp+79,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)))));
    bufp->fullBit(oldp+80,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_we));
    bufp->fullBit(oldp+81,(vlSymsp->TOP__sim.__PVT__main_uart_txempty_re));
    bufp->fullBit(oldp+82,((0x10U == (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
    bufp->fullBit(oldp+83,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_we));
    bufp->fullBit(oldp+84,(vlSymsp->TOP__sim.__PVT__main_uart_rxfull_re));
    bufp->fullBit(oldp+85,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0))));
    bufp->fullSData(oldp+86,((0xffU & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),10);
    bufp->fullSData(oldp+87,(vlSymsp->TOP__sim.__PVT__storage_dat1),10);
    bufp->fullCData(oldp+88,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0),5);
    bufp->fullCData(oldp+89,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_produce),4);
    bufp->fullCData(oldp+90,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_consume),4);
    bufp->fullCData(oldp+91,(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_wrport_adr),4);
    bufp->fullSData(oldp+92,(vlSymsp->TOP__sim.__PVT__storage_dat0),10);
    bufp->fullBit(oldp+93,(((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rxtx_re) 
                            & (0x10U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0)))));
    bufp->fullCData(oldp+94,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_level0) 
                                       + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_tx_fifo_readable)))),5);
    bufp->fullBit(oldp+95,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_first));
    bufp->fullBit(oldp+96,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_fifo_out_last));
    bufp->fullBit(oldp+97,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_syncfifo_re));
    bufp->fullBit(oldp+98,((0U != (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0))));
    bufp->fullSData(oldp+99,(vlSymsp->TOP__sim.__PVT__storage_1_dat1),10);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0),5);
    bufp->fullCData(oldp+101,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_produce),4);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_consume),4);
    bufp->fullCData(oldp+103,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_wrport_adr),4);
    bufp->fullSData(oldp+104,(vlSymsp->TOP__sim.__PVT__storage_1_dat0),10);
    bufp->fullBit(oldp+105,(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_do_read));
    bufp->fullCData(oldp+106,((0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_level0) 
                                        + (IData)(vlSymsp->TOP__sim.__PVT__main_uart_rx_fifo_readable)))),5);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__sim.__PVT__main_timer_load_storage),32);
    bufp->fullBit(oldp+108,(vlSymsp->TOP__sim.__PVT__main_timer_load_re));
    bufp->fullIData(oldp+109,(vlSymsp->TOP__sim.__PVT__main_timer_reload_storage),32);
    bufp->fullBit(oldp+110,(vlSymsp->TOP__sim.__PVT__main_timer_reload_re));
    bufp->fullBit(oldp+111,(vlSymsp->TOP__sim.__PVT__main_timer_en_storage));
    bufp->fullBit(oldp+112,(vlSymsp->TOP__sim.__PVT__main_timer_en_re));
    bufp->fullBit(oldp+113,(vlSymsp->TOP__sim.__PVT__main_timer_update_value_storage));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__sim.__PVT__main_timer_update_value_re));
    bufp->fullIData(oldp+115,(vlSymsp->TOP__sim.__PVT__main_timer_value_status),32);
    bufp->fullBit(oldp+116,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_we));
    bufp->fullBit(oldp+117,(vlSymsp->TOP__sim.__PVT__main_timer_value_re));
    bufp->fullBit(oldp+118,(((IData)(vlSymsp->TOP__sim.__PVT__main_timer_zero_pending) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__main_timer_enable_storage))));
    bufp->fullBit(oldp+119,((0U == vlSymsp->TOP__sim.__PVT__main_timer_value)));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__sim.__PVT__main_timer_zero_pending));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__sim.__PVT__main_timer_zero_clear));
    bufp->fullBit(oldp+122,(vlSymsp->TOP__sim.__PVT__main_timer_zero_trigger_d));
    bufp->fullBit(oldp+123,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_we));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__sim.__PVT__main_timer_status_re));
    bufp->fullBit(oldp+125,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_we));
    bufp->fullBit(oldp+126,(vlSymsp->TOP__sim.__PVT__main_timer_pending_re));
    bufp->fullBit(oldp+127,(vlSymsp->TOP__sim.__PVT__main_timer_pending_r));
    bufp->fullBit(oldp+128,(vlSymsp->TOP__sim.__PVT__main_timer_enable_storage));
    bufp->fullBit(oldp+129,(vlSymsp->TOP__sim.__PVT__main_timer_enable_re));
    bufp->fullIData(oldp+130,(vlSymsp->TOP__sim.__PVT__main_timer_value),32);
    bufp->fullIData(oldp+131,(vlSymsp->TOP__sim.__PVT__main_bus_adr),32);
    bufp->fullCData(oldp+132,(vlSymsp->TOP__sim.__PVT__main_bus_sel),4);
    bufp->fullBit(oldp+133,(vlSymsp->TOP__sim.__PVT__main_bus_cyc));
    bufp->fullBit(oldp+134,(vlSymsp->TOP__sim.__PVT__main_bus_stb));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__sim.__PVT__main_bus_ack));
    bufp->fullBit(oldp+136,(vlSymsp->TOP__sim.__PVT__main_bus_we));
    bufp->fullBit(oldp+137,(vlSymsp->TOP__sim.__PVT__main_dma_reader_source_valid));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__sim.__PVT__main_core_sink_ready));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__sim.__PVT__main_dma_reader_source_last));
    bufp->fullIData(oldp+140,(vlSymsp->TOP__sim.__PVT__main_dma_reader_source_payload_data),32);
    bufp->fullBit(oldp+141,(vlSymsp->TOP__sim.__PVT__main_core_source_valid));
    bufp->fullIData(oldp+142,(vlSymsp->TOP__sim.__PVT__main_core_source_payload_data),32);
    bufp->fullIData(oldp+143,(vlSymsp->TOP__sim.__PVT__main_core_data),32);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__sim.__PVT__main_core_counter),32);
    bufp->fullBit(oldp+145,(vlSymsp->TOP__sim.__PVT__main_dma_reader_sink_ready));
    bufp->fullIData(oldp+146,(vlSymsp->TOP__sim.__PVT__main_dma_reader_data),32);
    bufp->fullBit(oldp+147,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_status_we));
    bufp->fullBit(oldp+148,(vlSymsp->TOP__sim.__PVT__main_status_re));
    bufp->fullBit(oldp+149,((1U & (IData)(vlSymsp->TOP__sim.__PVT__main_control_storage))));
    bufp->fullBit(oldp+150,((1U & ((IData)(vlSymsp->TOP__sim.__PVT__main_control_storage) 
                                   >> 1U))));
    bufp->fullCData(oldp+151,(vlSymsp->TOP__sim.__PVT__main_control_storage),2);
    bufp->fullBit(oldp+152,(vlSymsp->TOP__sim.__PVT__main_control_re));
    bufp->fullIData(oldp+153,(vlSymsp->TOP__sim.__PVT__main_instruction_storage),32);
    bufp->fullBit(oldp+154,(vlSymsp->TOP__sim.__PVT__main_instruction_re));
    bufp->fullIData(oldp+155,(vlSymsp->TOP__sim.__PVT__main_src_storage),32);
    bufp->fullBit(oldp+156,(vlSymsp->TOP__sim.__PVT__main_src_re));
    bufp->fullIData(oldp+157,(vlSymsp->TOP__sim.__PVT__main_dst_storage),32);
    bufp->fullBit(oldp+158,(vlSymsp->TOP__sim.__PVT__main_dst_re));
    bufp->fullIData(oldp+159,(vlSymsp->TOP__sim.__PVT__main_length_storage),32);
    bufp->fullBit(oldp+160,(vlSymsp->TOP__sim.__PVT__main_length_re));
    bufp->fullBit(oldp+161,(vlSymsp->TOP__sim.__PVT__main_enable_storage));
    bufp->fullBit(oldp+162,(vlSymsp->TOP__sim.__PVT__main_enable_re));
    bufp->fullIData(oldp+163,(vlSymsp->TOP__sim.__PVT__main_input_storage),32);
    bufp->fullBit(oldp+164,(vlSymsp->TOP__sim.__PVT__main_input_re));
    bufp->fullIData(oldp+165,(vlSymsp->TOP__sim.__PVT__main_output_storage),32);
    bufp->fullBit(oldp+166,(vlSymsp->TOP__sim.__PVT__main_output_re));
    bufp->fullIData(oldp+167,(vlSymsp->TOP__sim.__PVT__main_imm_storage),32);
    bufp->fullBit(oldp+168,(vlSymsp->TOP__sim.__PVT__main_imm_re));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__sim.__PVT__main_done_status));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_done_we));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__sim.__PVT__main_done_re));
    bufp->fullIData(oldp+172,(vlSymsp->TOP__sim.__PVT__main_offset),32);
    bufp->fullBit(oldp+173,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_offset_we));
    bufp->fullBit(oldp+174,(vlSymsp->TOP__sim.__PVT__main_offset_re));
    bufp->fullBit(oldp+175,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_tick_we));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__sim.__PVT__main_tick_re));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_data_we));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__sim.__PVT__main_data_re));
    bufp->fullBit(oldp+179,((1U & (~ (IData)(vlSymsp->TOP__sim.__PVT__main_enable_storage)))));
    bufp->fullIData(oldp+180,((vlSymsp->TOP__sim.__PVT__main_src_storage 
                               >> 2U)),32);
    bufp->fullIData(oldp+181,((vlSymsp->TOP__sim.__PVT__main_length_storage 
                               >> 2U)),32);
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_1(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_sub_1\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+182,(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr),14);
    bufp->fullBit(oldp+183,(vlSymsp->TOP__sim.__PVT__builder_simsoc_we));
    bufp->fullIData(oldp+184,(vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w),32);
    bufp->fullIData(oldp+185,(((((vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r 
                                  | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r) 
                                 | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r) 
                                | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r) 
                               | vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r)),32);
    bufp->fullIData(oldp+186,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_dat_r),32);
    bufp->fullBit(oldp+187,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_cyc));
    bufp->fullBit(oldp+188,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbone_ack));
    bufp->fullBit(oldp+189,(vlSymsp->TOP__sim.__PVT__builder_array_muxed3));
    bufp->fullBit(oldp+190,(vlSymsp->TOP__sim.__PVT__builder_shared_ack));
    bufp->fullCData(oldp+191,(vlSymsp->TOP__sim.__PVT__builder_request),3);
    bufp->fullCData(oldp+192,(vlSymsp->TOP__sim.__PVT__builder_grant),2);
    bufp->fullCData(oldp+193,(vlSymsp->TOP__sim.__PVT__builder_slave_sel),3);
    bufp->fullCData(oldp+194,(vlSymsp->TOP__sim.__PVT__builder_slave_sel_r),3);
    bufp->fullBit(oldp+195,((((IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed4) 
                              & (IData)(vlSymsp->TOP__sim.__PVT__builder_array_muxed3)) 
                             & (~ (IData)(vlSymsp->TOP__sim.__PVT__builder_shared_ack)))));
    bufp->fullBit(oldp+196,((0U == vlSymsp->TOP__sim.__PVT__builder_count)));
    bufp->fullIData(oldp+197,(vlSymsp->TOP__sim.__PVT__builder_count),20);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface0_bank_bus_dat_r),32);
    bufp->fullBit(oldp+199,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_status_re));
    bufp->fullBit(oldp+200,((1U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)));
    bufp->fullBit(oldp+201,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_control0_re));
    bufp->fullCData(oldp+202,((3U & vlSymsp->TOP__sim.__PVT__builder_simsoc_dat_w)),2);
    bufp->fullBit(oldp+203,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_control0_we));
    bufp->fullBit(oldp+204,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_instruction0_re));
    bufp->fullBit(oldp+205,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_instruction0_we));
    bufp->fullBit(oldp+206,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_src0_re));
    bufp->fullBit(oldp+207,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_src0_we));
    bufp->fullBit(oldp+208,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_dst0_re));
    bufp->fullBit(oldp+209,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_dst0_we));
    bufp->fullBit(oldp+210,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_length0_re));
    bufp->fullBit(oldp+211,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_length0_we));
    bufp->fullBit(oldp+212,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_enable0_re));
    bufp->fullBit(oldp+213,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_enable0_we));
    bufp->fullBit(oldp+214,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_input0_re));
    bufp->fullBit(oldp+215,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_input0_we));
    bufp->fullBit(oldp+216,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_output0_re));
    bufp->fullBit(oldp+217,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_output0_we));
    bufp->fullBit(oldp+218,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_imm0_re));
    bufp->fullBit(oldp+219,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_imm0_we));
    bufp->fullBit(oldp+220,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_done_re));
    bufp->fullBit(oldp+221,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_offset_re));
    bufp->fullBit(oldp+222,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_tick_re));
    bufp->fullBit(oldp+223,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank0_data_re));
    bufp->fullBit(oldp+224,((0U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                             >> 9U)))));
    bufp->fullIData(oldp+225,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface1_bank_bus_dat_r),32);
    bufp->fullBit(oldp+226,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_re));
    bufp->fullBit(oldp+227,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_reset0_we));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_scratch0_re));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_scratch0_we));
    bufp->fullBit(oldp+230,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank1_bus_errors_re));
    bufp->fullBit(oldp+231,((1U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                             >> 9U)))));
    bufp->fullIData(oldp+232,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sram_bus_dat_r),32);
    bufp->fullCData(oldp+233,((0x3fU & (IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr))),6);
    bufp->fullCData(oldp+234,(((0x24U >= (IData)(vlSymsp->TOP__sim.__PVT__mem_adr0))
                                ? vlSymsp->TOP__sim.__PVT__mem
                               [vlSymsp->TOP__sim.__PVT__mem_adr0]
                                : 0U)),8);
    bufp->fullBit(oldp+235,((2U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+236,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_sel_r));
    bufp->fullIData(oldp+237,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface2_bank_bus_dat_r),32);
    bufp->fullBit(oldp+238,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_re));
    bufp->fullBit(oldp+239,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_load0_we));
    bufp->fullBit(oldp+240,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_re));
    bufp->fullBit(oldp+241,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_reload0_we));
    bufp->fullBit(oldp+242,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_re));
    bufp->fullBit(oldp+243,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_en0_we));
    bufp->fullBit(oldp+244,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_re));
    bufp->fullBit(oldp+245,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_update_value0_we));
    bufp->fullBit(oldp+246,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_value_re));
    bufp->fullBit(oldp+247,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_status_re));
    bufp->fullBit(oldp+248,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_pending_re));
    bufp->fullBit(oldp+249,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_re));
    bufp->fullBit(oldp+250,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank2_ev_enable0_we));
    bufp->fullBit(oldp+251,((3U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                             >> 9U)))));
    bufp->fullIData(oldp+252,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_interface3_bank_bus_dat_r),32);
    bufp->fullBit(oldp+253,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txfull_re));
    bufp->fullBit(oldp+254,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxempty_re));
    bufp->fullBit(oldp+255,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_status_re));
    bufp->fullBit(oldp+256,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_pending_re));
    bufp->fullBit(oldp+257,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_re));
    bufp->fullBit(oldp+258,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_ev_enable0_we));
    bufp->fullBit(oldp+259,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_txempty_re));
    bufp->fullBit(oldp+260,(vlSymsp->TOP__sim.__PVT__builder_csr_bankarray_csrbank3_rxfull_re));
    bufp->fullBit(oldp+261,((4U == (0x1fU & ((IData)(vlSymsp->TOP__sim.__PVT__builder_simsoc_adr) 
                                             >> 9U)))));
    bufp->fullBit(oldp+262,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbonedmareader_state));
    bufp->fullBit(oldp+263,(vlSymsp->TOP__sim.__PVT__builder_simsoc_wishbonedmareader_next_state));
    bufp->fullIData(oldp+264,(vlSymsp->TOP__sim.__PVT__main_dma_reader_data_wishbonedmareader_next_value),32);
    bufp->fullBit(oldp+265,(vlSymsp->TOP__sim.__PVT__main_dma_reader_data_wishbonedmareader_next_value_ce));
    bufp->fullCData(oldp+266,(vlSymsp->TOP__sim.__PVT__builder_simsoc_resetinserter_state),2);
    bufp->fullCData(oldp+267,(vlSymsp->TOP__sim.__PVT__builder_simsoc_resetinserter_next_state),2);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__sim.__PVT__main_offset_resetinserter_next_value),32);
    bufp->fullBit(oldp+269,(vlSymsp->TOP__sim.__PVT__main_offset_resetinserter_next_value_ce));
    bufp->fullBit(oldp+270,(vlSymsp->TOP__sim.__PVT__builder_simsoc_state));
    bufp->fullBit(oldp+271,(vlSymsp->TOP__sim.__PVT__builder_simsoc_next_state));
    bufp->fullIData(oldp+272,(vlSymsp->TOP__sim.__PVT__builder_array_muxed0),32);
    bufp->fullSData(oldp+273,(vlSymsp->TOP__sim.__PVT__sram_adr0),11);
    bufp->fullCData(oldp+274,(vlSymsp->TOP__sim.__PVT__mem_adr0),6);
    bufp->fullSData(oldp+275,(vlSymsp->TOP__sim.__PVT__storage[0]),10);
    bufp->fullSData(oldp+276,(vlSymsp->TOP__sim.__PVT__storage[1]),10);
    bufp->fullSData(oldp+277,(vlSymsp->TOP__sim.__PVT__storage[2]),10);
    bufp->fullSData(oldp+278,(vlSymsp->TOP__sim.__PVT__storage[3]),10);
    bufp->fullSData(oldp+279,(vlSymsp->TOP__sim.__PVT__storage[4]),10);
    bufp->fullSData(oldp+280,(vlSymsp->TOP__sim.__PVT__storage[5]),10);
    bufp->fullSData(oldp+281,(vlSymsp->TOP__sim.__PVT__storage[6]),10);
    bufp->fullSData(oldp+282,(vlSymsp->TOP__sim.__PVT__storage[7]),10);
    bufp->fullSData(oldp+283,(vlSymsp->TOP__sim.__PVT__storage[8]),10);
    bufp->fullSData(oldp+284,(vlSymsp->TOP__sim.__PVT__storage[9]),10);
    bufp->fullSData(oldp+285,(vlSymsp->TOP__sim.__PVT__storage[10]),10);
    bufp->fullSData(oldp+286,(vlSymsp->TOP__sim.__PVT__storage[11]),10);
    bufp->fullSData(oldp+287,(vlSymsp->TOP__sim.__PVT__storage[12]),10);
    bufp->fullSData(oldp+288,(vlSymsp->TOP__sim.__PVT__storage[13]),10);
    bufp->fullSData(oldp+289,(vlSymsp->TOP__sim.__PVT__storage[14]),10);
    bufp->fullSData(oldp+290,(vlSymsp->TOP__sim.__PVT__storage[15]),10);
    bufp->fullSData(oldp+291,(vlSymsp->TOP__sim.__PVT__storage_1[0]),10);
    bufp->fullSData(oldp+292,(vlSymsp->TOP__sim.__PVT__storage_1[1]),10);
    bufp->fullSData(oldp+293,(vlSymsp->TOP__sim.__PVT__storage_1[2]),10);
    bufp->fullSData(oldp+294,(vlSymsp->TOP__sim.__PVT__storage_1[3]),10);
    bufp->fullSData(oldp+295,(vlSymsp->TOP__sim.__PVT__storage_1[4]),10);
    bufp->fullSData(oldp+296,(vlSymsp->TOP__sim.__PVT__storage_1[5]),10);
    bufp->fullSData(oldp+297,(vlSymsp->TOP__sim.__PVT__storage_1[6]),10);
    bufp->fullSData(oldp+298,(vlSymsp->TOP__sim.__PVT__storage_1[7]),10);
    bufp->fullSData(oldp+299,(vlSymsp->TOP__sim.__PVT__storage_1[8]),10);
    bufp->fullSData(oldp+300,(vlSymsp->TOP__sim.__PVT__storage_1[9]),10);
    bufp->fullSData(oldp+301,(vlSymsp->TOP__sim.__PVT__storage_1[10]),10);
    bufp->fullSData(oldp+302,(vlSymsp->TOP__sim.__PVT__storage_1[11]),10);
    bufp->fullSData(oldp+303,(vlSymsp->TOP__sim.__PVT__storage_1[12]),10);
    bufp->fullSData(oldp+304,(vlSymsp->TOP__sim.__PVT__storage_1[13]),10);
    bufp->fullSData(oldp+305,(vlSymsp->TOP__sim.__PVT__storage_1[14]),10);
    bufp->fullSData(oldp+306,(vlSymsp->TOP__sim.__PVT__storage_1[15]),10);
    bufp->fullBit(oldp+307,(vlSymsp->TOP__sim.__Vcellinp__VexRiscv__reset));
    bufp->fullBit(oldp+308,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_flush));
    bufp->fullBit(oldp+309,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid));
    bufp->fullBit(oldp+310,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit)))));
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready)))));
    bufp->fullBit(oldp+312,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_decode_isValid));
    bufp->fullBit(oldp+313,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_fill_valid));
    bufp->fullBit(oldp+314,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_isValid));
    bufp->fullIData(oldp+315,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub),32);
    bufp->fullBit(oldp+316,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE))));
    bufp->fullIData(oldp+317,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA),32);
    bufp->fullBit(oldp+318,((vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_DATA 
                             >> 0x1fU)));
    bufp->fullBit(oldp+319,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid));
    bufp->fullIData(oldp+320,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_DATA),32);
    bufp->fullBit(oldp+322,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid));
    bufp->fullBit(oldp+323,((0U != (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xfU)))));
    bufp->fullCData(oldp+324,((0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                        >> 5U))),7);
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)))));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_cpu_prefetch_haltIt));
    bufp->fullIData(oldp+327,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT___zz_banks_0_port1),32);
    bufp->fullBit(oldp+328,((1U & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_error) 
                                   | ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                                      & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                         | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))))));
    bufp->fullBit(oldp+329,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling));
    bufp->fullBit(oldp+330,((((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_refilling)) 
                              & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_isPaging)) 
                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_exception) 
                                | (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_allowExecute))))));
    bufp->fullIData(oldp+331,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen),32);
    bufp->fullBit(oldp+332,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_hit_valid)))));
    bufp->fullIData(oldp+333,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__decodeStage_mmuRsp_physicalAddress),32);
    bufp->fullBit(oldp+334,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid));
    bufp->fullIData(oldp+335,((0xffffffe0U & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__lineLoader_address)),32);
    bufp->fullBit(oldp+336,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt));
    bufp->fullBit(oldp+337,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid));
    bufp->fullBit(oldp+338,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageA_request_wr));
    bufp->fullBit(oldp+339,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt));
    bufp->fullIData(oldp+340,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data),32);
    bufp->fullBit(oldp+341,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_mmuException));
    bufp->fullBit(oldp+342,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_unalignedAccess));
    bufp->fullBit(oldp+343,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_accessError));
    bufp->fullBit(oldp+344,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_request_wr));
    bufp->fullBit(oldp+345,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready));
    bufp->fullBit(oldp+346,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_redo));
    bufp->fullBit(oldp+347,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid));
    bufp->fullBit(oldp+348,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess));
    bufp->fullIData(oldp+350,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address),32);
    bufp->fullCData(oldp+351,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask),4);
    bufp->fullCData(oldp+352,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size),3);
    bufp->fullQData(oldp+353,((0xfffffffffffffULL & 
                               (((((QData)((IData)(
                                                   (0x7ffffU 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            ((QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL)) 
                                                                             >> 0x20U)))))))) 
                                   << 0x21U) | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL))) 
                                 + (((QData)((IData)(
                                                     (3U 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (1ULL 
                                                                               & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                                                >> 0x21U))))))))) 
                                     << 0x32U) | (0x3ffffffffffffULL 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH 
                                                     << 0x10U)))) 
                                + (((QData)((IData)(
                                                    (3U 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (1ULL 
                                                                              & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                                                >> 0x21U))))))))) 
                                    << 0x32U) | (0x3ffffffffffffULL 
                                                 & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL 
                                                    << 0x10U)))))),52);
    bufp->fullQData(oldp+355,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HH),34);
    bufp->fullQData(oldp+357,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
    bufp->fullQData(oldp+359,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh)), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, 
                                                                             (0xffffU 
                                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)))))),34);
    bufp->fullQData(oldp+361,((0x3ffffffffULL & VL_MULS_QQQ(34, 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, 
                                                                             (0xffffU 
                                                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1))), 
                                                            (0x3ffffffffULL 
                                                             & VL_EXTENDS_QI(34,17, vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh))))),34);
    bufp->fullIData(oldp+363,(((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1) 
                               * (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    bufp->fullIData(oldp+364,((0xfffffffeU & (((3U 
                                                == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                                : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                                              + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2))),32);
    bufp->fullBit(oldp+365,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2) 
                              != (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1)) 
                             | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                                & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                    ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0x15U) ^ 
                                       (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                        >> 1U)) : (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                                    ? 
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 0x15U)
                                                    : 
                                                   (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                    >> 8U)))))));
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_2(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_sub_2\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+366,((IData)((0x1ffffffffULL 
                                       & VL_SHIFTRS_QQI(33,33,5, 
                                                        (((QData)((IData)(
                                                                          ((3U 
                                                                            == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL)) 
                                                                           & (vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed 
                                                                              >> 0x1fU)))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed))), 
                                                        (0x1fU 
                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5))))),32);
    bufp->fullIData(oldp+367,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                ? ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                    ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                    : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                        ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                           | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                        : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                           ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL))
                                    ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less)
                                    : vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_addSub))),32);
    bufp->fullIData(oldp+368,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_STORE_DATA_RF),32);
    bufp->fullIData(oldp+369,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU)))
                                ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                    << 0x18U) | ((0xff0000U 
                                                  & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))))
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                                 >> 0xcU)))
                                    ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2 
                                        << 0x10U) | 
                                       (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))
                                    : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2))),32);
    bufp->fullBit(oldp+370,((0x20U != (0x7fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                >> 7U)))));
    bufp->fullBit(oldp+371,((1U & (~ ((IData)((0x2000U 
                                               == (0xfe000U 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))) 
                                      | (IData)((0x6000U 
                                                 == 
                                                 (0xfe000U 
                                                  & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen))))))));
    bufp->fullBit(oldp+372,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodePrediction_cmd_hadBranch));
    bufp->fullBit(oldp+373,((IData)((0x100000U == (0x100008U 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)))));
    bufp->fullBit(oldp+374,((vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                             >> 0x1fU)));
    bufp->fullBit(oldp+375,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+376,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+377,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_MUL));
    bufp->fullBit(oldp+378,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_MUL));
    bufp->fullBit(oldp+379,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0x1cU))));
    bufp->fullCData(oldp+380,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x1aU))),2);
    bufp->fullBit(oldp+381,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0x19U))));
    bufp->fullCData(oldp+382,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x15U))),2);
    bufp->fullCData(oldp+383,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x12U))),2);
    bufp->fullBit(oldp+384,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0x11U))));
    bufp->fullBit(oldp+385,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0x10U))));
    bufp->fullBit(oldp+386,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_WR));
    bufp->fullBit(oldp+387,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0xdU))));
    bufp->fullBit(oldp+388,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+389,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0xcU))));
    bufp->fullBit(oldp+390,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0xbU))));
    bufp->fullCData(oldp+391,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 8U))),2);
    bufp->fullCData(oldp+392,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 6U))),2);
    bufp->fullCData(oldp+393,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 1U))),2);
    bufp->fullIData(oldp+394,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+395,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+396,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_FORMAL_PC_NEXT),32);
    bufp->fullIData(oldp+397,(((IData)(4U) + vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
    bufp->fullIData(oldp+398,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_PC),32);
    bufp->fullBit(oldp+399,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS1_SIGNED));
    bufp->fullBit(oldp+400,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_DIV));
    bufp->fullBit(oldp+401,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_RS2_SIGNED));
    bufp->fullBit(oldp+402,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_IS_DIV));
    bufp->fullBit(oldp+403,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL));
    bufp->fullQData(oldp+404,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH),34);
    bufp->fullQData(oldp+406,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW),52);
    bufp->fullQData(oldp+408,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_HL),34);
    bufp->fullQData(oldp+410,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LH),34);
    bufp->fullIData(oldp+412,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MUL_LL),32);
    bufp->fullBit(oldp+413,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_READ_OPCODE));
    bufp->fullBit(oldp+414,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_CSR_WRITE_OPCODE));
    bufp->fullBit(oldp+415,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR));
    bufp->fullCData(oldp+416,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL),2);
    bufp->fullCData(oldp+417,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL),2);
    bufp->fullCData(oldp+418,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL),2);
    bufp->fullIData(oldp+419,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC),32);
    bufp->fullBit(oldp+420,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_DO));
    bufp->fullIData(oldp+421,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC),32);
    bufp->fullBit(oldp+422,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PREDICTION_HAD_BRANCHED2));
    bufp->fullBit(oldp+423,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1));
    bufp->fullCData(oldp+424,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL),2);
    bufp->fullBit(oldp+425,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0xfU))));
    bufp->fullBit(oldp+426,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 5U))));
    bufp->fullBit(oldp+427,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+428,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE));
    bufp->fullBit(oldp+429,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+430,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_INSTRUCTION),32);
    bufp->fullBit(oldp+431,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE));
    bufp->fullBit(oldp+432,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID));
    bufp->fullIData(oldp+433,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS2),32);
    bufp->fullIData(oldp+434,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_RS1),32);
    bufp->fullIData(oldp+435,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_RIGHT),32);
    bufp->fullCData(oldp+436,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_SHIFT_CTRL),2);
    bufp->fullCData(oldp+437,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SHIFT_CTRL),2);
    bufp->fullBit(oldp+438,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_LESS_UNSIGNED));
    bufp->fullBit(oldp+439,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_FORCE_ZERO));
    bufp->fullBit(oldp+440,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC_USE_SUB_LESS));
    bufp->fullCData(oldp+441,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC2_CTRL),2);
    bufp->fullCData(oldp+442,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_SRC1_CTRL),2);
    bufp->fullBit(oldp+443,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 3U))));
    bufp->fullBit(oldp+444,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 0x14U))));
    bufp->fullBit(oldp+445,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_SrcPlugin_less));
    bufp->fullCData(oldp+446,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_CTRL),2);
    bufp->fullIData(oldp+447,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5),32);
    bufp->fullIData(oldp+448,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1),32);
    bufp->fullCData(oldp+449,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL),2);
    bufp->fullIData(oldp+450,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED),32);
    bufp->fullBit(oldp+451,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_REGFILE_WRITE_VALID));
    bufp->fullBit(oldp+452,(((0x17U == (0x5fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                             | ((0x6fU == (0x7fU & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                | ((3U == (0x106fU 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                   | ((0x1073U == (0x107fU 
                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                      | ((0x2073U == 
                                          (0x207fU 
                                           & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                         | ((0x4063U 
                                             == (0x407fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                            | ((0x2013U 
                                                == 
                                                (0x207fU 
                                                 & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                               | ((0x23U 
                                                   == 
                                                   (0x603fU 
                                                    & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                  | ((3U 
                                                      == 
                                                      (0x207fU 
                                                       & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                     | ((3U 
                                                         == 
                                                         (0x505fU 
                                                          & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                        | ((0x63U 
                                                            == 
                                                            (0x707bU 
                                                             & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                           | ((0xfU 
                                                               == 
                                                               (0x607fU 
                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                              | ((0x33U 
                                                                  == 
                                                                  (0xfc00007fU 
                                                                   & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                 | ((0x500fU 
                                                                     == 
                                                                     (0x1f0707fU 
                                                                      & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                    | ((0x5013U 
                                                                        == 
                                                                        (0xbc00707fU 
                                                                         & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                       | ((0x1013U 
                                                                           == 
                                                                           (0xfc00307fU 
                                                                            & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                          | ((0x5033U 
                                                                              == 
                                                                              (0xbe00707fU 
                                                                               & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                             | ((0x33U 
                                                                                == 
                                                                                (0xbe00707fU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10200073U 
                                                                                == 
                                                                                (0xdfffffffU 
                                                                                & vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)) 
                                                                                | ((0x10500073U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen) 
                                                                                | (0x73U 
                                                                                == vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen)))))))))))))))))))))));
    bufp->fullBit(oldp+453,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_WR));
    bufp->fullBit(oldp+454,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE));
    bufp->fullBit(oldp+455,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_MEMORY_ENABLE));
    bufp->fullBit(oldp+456,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_FORCE_CONSTISTENCY));
    bufp->fullIData(oldp+457,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1),32);
    bufp->fullBit(oldp+458,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_MANAGMENT));
    bufp->fullIData(oldp+459,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2),32);
    bufp->fullBit(oldp+460,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_WR));
    bufp->fullBit(oldp+461,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_MEMORY_ENABLE));
    bufp->fullIData(oldp+462,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION),32);
    bufp->fullBit(oldp+463,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                   >> 4U))));
    bufp->fullBit(oldp+464,((1U & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED)));
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_3(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_sub_3\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+465,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_4));
    bufp->fullBit(oldp+466,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_3));
    bufp->fullBit(oldp+467,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_2));
    bufp->fullBit(oldp+468,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_issueDetected_1));
    bufp->fullCData(oldp+469,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                     >> 0x17U))),2);
    bufp->fullIData(oldp+470,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload),32);
    bufp->fullIData(oldp+471,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC),32);
    bufp->fullIData(oldp+472,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION),32);
    bufp->fullBit(oldp+473,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_haltByOther));
    bufp->fullBit(oldp+474,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt));
    bufp->fullBit(oldp+475,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext));
    bufp->fullBit(oldp+476,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid));
    bufp->fullBit(oldp+477,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers));
    bufp->fullBit(oldp+478,(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isFlushed));
    bufp->fullBit(oldp+479,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt))))));
    bufp->fullBit(oldp+480,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers))) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_removeIt)))));
    bufp->fullBit(oldp+481,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltItself));
    bufp->fullBit(oldp+482,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther));
    bufp->fullBit(oldp+483,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt));
    bufp->fullBit(oldp+484,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext));
    bufp->fullBit(oldp+485,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid));
    bufp->fullBit(oldp+486,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck));
    bufp->fullBit(oldp+487,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_haltByOther) 
                             | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
    bufp->fullBit(oldp+488,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isFlushed));
    bufp->fullBit(oldp+489,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt))))));
    bufp->fullBit(oldp+490,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck))) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_removeIt)))));
    bufp->fullBit(oldp+491,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_haltItself));
    bufp->fullBit(oldp+492,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt));
    bufp->fullBit(oldp+493,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext));
    bufp->fullBit(oldp+494,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid));
    bufp->fullBit(oldp+495,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck));
    bufp->fullBit(oldp+496,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself));
    bufp->fullBit(oldp+497,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isFlushed));
    bufp->fullBit(oldp+498,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt))))));
    bufp->fullBit(oldp+499,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck))) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
    bufp->fullBit(oldp+500,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt));
    bufp->fullBit(oldp+501,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushIt));
    bufp->fullBit(oldp+502,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext));
    bufp->fullBit(oldp+503,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid));
    bufp->fullBit(oldp+504,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)) 
                                   & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_removeIt))))));
    bufp->fullBit(oldp+505,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring));
    bufp->fullBit(oldp+506,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetcherHalt));
    bufp->fullBit(oldp+507,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_incomingInstruction));
    bufp->fullBit(oldp+508,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_valid));
    bufp->fullIData(oldp+509,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload),32);
    bufp->fullBit(oldp+510,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_jumpInterface_valid));
    bufp->fullBit(oldp+511,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1));
    bufp->fullBit(oldp+512,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_2));
    bufp->fullBit(oldp+513,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_3));
    bufp->fullBit(oldp+514,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_4));
    bufp->fullBit(oldp+515,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_valid));
    bufp->fullCData(oldp+516,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_decodeExceptionPort_payload_code),4);
    bufp->fullIData(oldp+517,((0xfffffffcU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_payload)),32);
    bufp->fullBit(oldp+518,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready) 
                             | (0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                        << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext))))))));
    bufp->fullBit(oldp+519,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_2) 
                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_wr) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_cmd_ready_4)))));
    bufp->fullBit(oldp+520,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_uncached));
    bufp->fullIData(oldp+521,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_address),32);
    bufp->fullCData(oldp+522,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_mask),4);
    bufp->fullCData(oldp+523,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_size),3);
    bufp->fullBit(oldp+524,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rData_last));
    bufp->fullBit(oldp+525,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_dBus_rsp_valid));
    bufp->fullIData(oldp+526,(vlSymsp->TOP__sim__VexRiscv.__PVT__dBusWishbone_DAT_MISO_regNext),32);
    bufp->fullBit(oldp+527,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_removeIt)))));
    bufp->fullBit(oldp+528,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_redoBranch_valid));
    bufp->fullBit(oldp+529,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_valid));
    bufp->fullCData(oldp+530,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_exceptionBus_payload_code),4);
    bufp->fullBit(oldp+531,(vlSymsp->TOP__sim__VexRiscv.__PVT__decodeExceptionPort_valid));
    bufp->fullBit(oldp+532,(vlSymsp->TOP__sim__VexRiscv.__PVT__BranchPlugin_branchExceptionPort_valid));
    bufp->fullIData(oldp+533,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_csrMapping_readDataInit),32);
    bufp->fullIData(oldp+534,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_writeDataSignal),32);
    bufp->fullBit(oldp+535,((1U & (~ ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                                      | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))))));
    bufp->fullBit(oldp+536,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_valid));
    bufp->fullIData(oldp+537,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload),32);
    bufp->fullBit(oldp+538,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_decode));
    bufp->fullBit(oldp+539,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute));
    bufp->fullBit(oldp+540,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory));
    bufp->fullBit(oldp+541,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack));
    bufp->fullBit(oldp+542,((0U != vlSymsp->TOP__sim__VexRiscv.__PVT___zz_CsrPlugin_csrMapping_readDataInit_1)));
    bufp->fullBit(oldp+543,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_valid));
    bufp->fullCData(oldp+544,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_selfException_payload_code),4);
    bufp->fullBit(oldp+545,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_flushNext) 
                                     << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_flushNext) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_flushNext) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_flushNext)))))));
    bufp->fullBit(oldp+546,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_jump_pcLoad_valid));
    bufp->fullIData(oldp+547,(((0U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_PC
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                    ? vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_jumpInterface_payload
                                    : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_jump_pcLoad_payload_6))
                                        ? vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BRANCH_CALC
                                        : vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_predictionJumpInterface_payload)))),32);
    bufp->fullBit(oldp+548,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready));
    bufp->fullIData(oldp+549,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pc),32);
    bufp->fullBit(oldp+550,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction));
    bufp->fullBit(oldp+551,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg));
    bufp->fullBit(oldp+552,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
    bufp->fullBit(oldp+553,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correctionReg))));
    bufp->fullBit(oldp+554,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate));
    bufp->fullBit(oldp+555,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted));
    bufp->fullBit(oldp+556,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_inc));
    bufp->fullBit(oldp+557,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate))));
    bufp->fullBit(oldp+558,(((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid)) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready))));
    bufp->fullBit(oldp+559,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_redoFetch));
    bufp->fullBit(oldp+560,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_flushed));
    bufp->fullBit(oldp+561,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_booted) 
                             & (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_input_ready) 
                                 | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_correction)) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_pcRegPropagate)))));
    bufp->fullBit(oldp+562,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_fetchPc_output_valid) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt)))));
    bufp->fullBit(oldp+563,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_input_ready));
    bufp->fullBit(oldp+564,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_0_halt));
    bufp->fullBit(oldp+565,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2));
    bufp->fullBit(oldp+566,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid));
    bufp->fullBit(oldp+567,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_arbitration_isStuckByOthers)))));
    bufp->fullBit(oldp+568,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_halt));
    bufp->fullBit(oldp+569,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_flush));
    bufp->fullBit(oldp+570,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_readyForError));
    bufp->fullBit(oldp+571,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_0_output_ready_2) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_IBusCachedPlugin_iBusRsp_stages_1_output_m2sPipe_valid))));
    bufp->fullBit(oldp+572,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_1)))));
    bufp->fullBit(oldp+573,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_injector_nextPcCalc_valids_0));
    bufp->fullBit(oldp+574,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
    bufp->fullBit(oldp+575,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isStuck)))));
    bufp->fullBit(oldp+576,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_haltItself)))));
    bufp->fullBit(oldp+577,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache_io_mem_cmd_valid) 
                             & (IData)(vlSymsp->TOP__sim.__PVT__main_ibus_ack))));
    bufp->fullBit(oldp+578,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_iBus_rsp_valid));
    bufp->fullIData(oldp+579,(vlSymsp->TOP__sim__VexRiscv.__PVT__iBusWishbone_DAT_MISO_regNext),32);
    bufp->fullIData(oldp+580,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rspCounter),32);
    bufp->fullBit(oldp+581,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s1_tightlyCoupledHit));
    bufp->fullBit(oldp+582,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_s2_tightlyCoupledHit));
    bufp->fullBit(oldp+583,(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_rsp_redoFetch));
    bufp->fullBit(oldp+584,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l239));
    bufp->fullBit(oldp+585,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l244));
    bufp->fullBit(oldp+586,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l250));
    bufp->fullBit(oldp+587,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_IBusCachedPlugin_l256));
    bufp->fullBit(oldp+588,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_valid) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid))));
    bufp->fullBit(oldp+589,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_ready));
    bufp->fullBit(oldp+590,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                              ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr)
                              : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_wr))));
    bufp->fullBit(oldp+591,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                              ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached)
                              : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mmuRsp_isIoAccess))));
    bufp->fullIData(oldp+592,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_address)),32);
    bufp->fullIData(oldp+593,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_STORE_DATA_RF)),32);
    bufp->fullCData(oldp+594,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__stageB_mask))),4);
    bufp->fullCData(oldp+595,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_payload_size))),3);
    bufp->fullBit(oldp+596,((1U & ((~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid)) 
                                   | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last)))));
    bufp->fullBit(oldp+597,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rValid));
    bufp->fullBit(oldp+598,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_wr));
    bufp->fullBit(oldp+599,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_uncached));
    bufp->fullIData(oldp+600,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_address),32);
    bufp->fullIData(oldp+601,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_data),32);
    bufp->fullCData(oldp+602,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_mask),4);
    bufp->fullCData(oldp+603,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_size),3);
    bufp->fullBit(oldp+604,(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_rData_last));
    bufp->fullBit(oldp+605,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_mem_cmd_s2mPipe_rValid)))));
    bufp->fullIData(oldp+606,(vlSymsp->TOP__sim__VexRiscv.__PVT__DBusCachedPlugin_rspCounter),32);
    bufp->fullCData(oldp+607,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xcU))),2);
    bufp->fullBit(oldp+608,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready)))));
    bufp->fullBit(oldp+609,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_valid) 
                              & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_flush_ready))) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_execute_haltIt))));
    bufp->fullBit(oldp+610,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1__DOT__loader_valid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid))));
    bufp->fullBit(oldp+611,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_DBusCachedPlugin_l446));
    bufp->fullBit(oldp+612,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_isValid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_haltIt))));
    bufp->fullCData(oldp+613,((0xffU & vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data)),8);
    bufp->fullCData(oldp+614,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                        >> 8U))),8);
    bufp->fullCData(oldp+615,((0xffU & (vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+616,((vlSymsp->TOP__sim__VexRiscv.__PVT__dataCache_1_io_cpu_writeBack_data 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+617,(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted),32);
    bufp->fullCData(oldp+618,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                     >> 0xcU))),2);
    bufp->fullIData(oldp+619,(((0U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                             >> 0xcU)))
                                ? (((- (IData)((1U 
                                                & ((vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
                                                    >> 7U) 
                                                   & (~ 
                                                      (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                       >> 0xeU)))))) 
                                    << 8U) | (0xffU 
                                              & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))
                                : ((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                 >> 0xcU)))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted 
                                                        >> 0xfU) 
                                                       & (~ 
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                                           >> 0xeU)))))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))
                                    : vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_DBusCachedPlugin_rspShifted))),32);
}

VL_ATTR_COLD void Vsim___024root__trace_full_sub_4(Vsim___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsim___024root__trace_full_sub_4\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_hff286ec7__0;
    VlWide<3>/*95:0*/ __Vtemp_h24933c90__0;
    VlWide<3>/*95:0*/ __Vtemp_h385ceada__0;
    VlWide<3>/*95:0*/ __Vtemp_h567caa2d__0;
    VlWide<3>/*95:0*/ __Vtemp_hc951bc44__0;
    // Body
    bufp->fullBit(oldp+620,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MEMORY_ENABLE))));
    bufp->fullBit(oldp+621,((0U == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                             >> 7U)))));
    bufp->fullCData(oldp+622,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+623,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_INSTRUCTION_ANTICIPATED 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+624,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port0),32);
    bufp->fullIData(oldp+625,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_RegFilePlugin_regFile_port1),32);
    bufp->fullIData(oldp+626,(((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                   & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                : ((1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ALU_BITWISE_CTRL))
                                    ? (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       | vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)
                                    : (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC1 
                                       ^ vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)))),32);
    bufp->fullCData(oldp+627,((0x1fU & vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_SRC2_5)),5);
    bufp->fullIData(oldp+628,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_FullBarrelShifterPlugin_reversed),32);
    bufp->fullBit(oldp+629,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard));
    bufp->fullBit(oldp+630,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard));
    bufp->fullBit(oldp+631,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isFiring))));
    bufp->fullCData(oldp+632,((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                        >> 7U))),5);
    bufp->fullIData(oldp+633,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_RS2_2),32);
    bufp->fullBit(oldp+634,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_valid));
    bufp->fullCData(oldp+635,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address),5);
    bufp->fullIData(oldp+636,(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_data),32);
    bufp->fullBit(oldp+637,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                             == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0xfU)))));
    bufp->fullBit(oldp+638,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_writeBackBuffer_payload_address) 
                             == (0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                          >> 0x14U)))));
    bufp->fullBit(oldp+639,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                       >> 7U)) == (0x1fU 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0xfU)))));
    bufp->fullBit(oldp+640,(((0x1fU & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                       >> 7U)) == (0x1fU 
                                                   & (vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_cache__DOT__io_cpu_fetch_data_regNextWhen 
                                                      >> 0x14U)))));
    bufp->fullBit(oldp+641,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45));
    bufp->fullBit(oldp+642,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_REGFILE_WRITE_VALID))));
    bufp->fullBit(oldp+643,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_1));
    bufp->fullBit(oldp+644,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_1));
    bufp->fullBit(oldp+645,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_1));
    bufp->fullBit(oldp+646,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_1));
    bufp->fullBit(oldp+647,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_BYPASSABLE_MEMORY_STAGE)))));
    bufp->fullBit(oldp+648,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l48_2));
    bufp->fullBit(oldp+649,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l51_2));
    bufp->fullBit(oldp+650,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l45_2));
    bufp->fullBit(oldp+651,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_HazardSimplePlugin_l57_2));
    bufp->fullBit(oldp+652,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BYPASSABLE_EXECUTE_STAGE)))));
    bufp->fullBit(oldp+653,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                      >> 5U)))));
    bufp->fullBit(oldp+654,((1U & (~ (vlSymsp->TOP__sim__VexRiscv.__PVT___zz_decode_IS_RS2_SIGNED 
                                      >> 0xfU)))));
    bufp->fullBit(oldp+655,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__IBusCachedPlugin_iBusRsp_stages_2_output_valid) 
                             & ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src0Hazard) 
                                | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__HazardSimplePlugin_src1Hazard)))));
    bufp->fullBit(oldp+656,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_eq));
    bufp->fullCData(oldp+657,((7U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+658,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_execute_BRANCH_COND_RESULT_1) 
                             & ((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? ((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 0x15U) ^ (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1 
                                                  >> 1U))
                                 : ((2U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                     ? (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                        >> 0x15U) : 
                                    (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                     >> 8U))))));
    bufp->fullIData(oldp+659,(((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC)),32);
    bufp->fullIData(oldp+660,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2),32);
    bufp->fullIData(oldp+661,((((3U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_BRANCH_CTRL))
                                 ? vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1
                                 : vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_PC) 
                               + vlSymsp->TOP__sim__VexRiscv.__PVT__execute_BranchPlugin_branch_src2)),32);
    bufp->fullCData(oldp+662,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_mode),2);
    bufp->fullIData(oldp+663,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtvec_base),30);
    bufp->fullIData(oldp+664,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mepc),32);
    bufp->fullBit(oldp+665,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MIE));
    bufp->fullBit(oldp+666,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPIE));
    bufp->fullCData(oldp+667,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mstatus_MPP),2);
    bufp->fullBit(oldp+668,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MEIP));
    bufp->fullBit(oldp+669,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MTIP));
    bufp->fullBit(oldp+670,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mip_MSIP));
    bufp->fullBit(oldp+671,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MEIE));
    bufp->fullBit(oldp+672,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MTIE));
    bufp->fullBit(oldp+673,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mie_MSIE));
    bufp->fullBit(oldp+674,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_interrupt));
    bufp->fullCData(oldp+675,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcause_exceptionCode),4);
    bufp->fullIData(oldp+676,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mtval),32);
    bufp->fullQData(oldp+677,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_mcycle),64);
    bufp->fullQData(oldp+679,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_minstret),64);
    bufp->fullBit(oldp+681,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode));
    bufp->fullBit(oldp+682,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute));
    bufp->fullBit(oldp+683,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory));
    bufp->fullBit(oldp+684,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack));
    bufp->fullCData(oldp+685,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_code),4);
    bufp->fullIData(oldp+686,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionContext_badAddr),32);
    bufp->fullBit(oldp+687,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_writeBack) 
                                     << 3U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_memory) 
                                                << 2U) 
                                               | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_execute) 
                                                   << 1U) 
                                                  | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValids_decode)))))));
    bufp->fullBit(oldp+688,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_valid));
    bufp->fullCData(oldp+689,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_interrupt_targetPrivilege),2);
    bufp->fullBit(oldp+690,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965));
    bufp->fullBit(oldp+691,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_1));
    bufp->fullBit(oldp+692,(vlSymsp->TOP__sim__VexRiscv.__PVT___zz_when_CsrPlugin_l965_2));
    bufp->fullBit(oldp+693,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_0));
    bufp->fullBit(oldp+694,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_1));
    bufp->fullBit(oldp+695,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_pcValids_2));
    bufp->fullBit(oldp+696,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_active));
    bufp->fullBit(oldp+697,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l998));
    bufp->fullBit(oldp+698,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_pipelineLiberator_done));
    bufp->fullBit(oldp+699,((0U != (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_writeBack) 
                                     << 2U) | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_memory) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_exceptionPortCtrl_exceptionValidsRegs_execute))))));
    bufp->fullCData(oldp+700,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_targetPrivilege),2);
    bufp->fullCData(oldp+701,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_trapCause),4);
    bufp->fullCData(oldp+702,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_mode),2);
    bufp->fullIData(oldp+703,(vlSymsp->TOP__sim__VexRiscv.__PVT__CsrPlugin_xtvec_base),30);
    bufp->fullBit(oldp+704,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1032));
    bufp->fullBit(oldp+705,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1077));
    bufp->fullCData(oldp+706,((3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_INSTRUCTION 
                                     >> 0x1cU))),2);
    bufp->fullBit(oldp+707,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_wfiWake));
    bufp->fullBit(oldp+708,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                              & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_ENV_CTRL))) 
                             | (((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid) 
                                 & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_to_memory_ENV_CTRL))) 
                                | ((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                                   & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))))));
    bufp->fullBit(oldp+709,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                             | (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_arbitration_isValid))));
    bufp->fullBit(oldp+710,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_illegalAccess));
    bufp->fullBit(oldp+711,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                             & (1U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_ENV_CTRL)))));
    bufp->fullBit(oldp+712,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_CsrPlugin_l1157));
    bufp->fullBit(oldp+713,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeInstruction));
    bufp->fullBit(oldp+714,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction));
    bufp->fullBit(oldp+715,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_writeEnable));
    bufp->fullBit(oldp+716,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_CsrPlugin_readInstruction) 
                             & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isStuck)))));
    bufp->fullBit(oldp+717,((1U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                   >> 0xdU))));
    bufp->fullBit(oldp+718,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_arbitration_isValid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_IS_CSR))));
    bufp->fullSData(oldp+719,((vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+720,(((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                           >> 0xcU))) 
                             | (2U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                             >> 0xcU))))));
    bufp->fullBit(oldp+721,((1U == (3U & (vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_INSTRUCTION 
                                          >> 0xcU)))));
    bufp->fullSData(oldp+722,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),16);
    bufp->fullSData(oldp+723,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),16);
    bufp->fullIData(oldp+724,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS1)),17);
    bufp->fullIData(oldp+725,((0xffffU & vlSymsp->TOP__sim__VexRiscv.__PVT__decode_to_execute_RS2)),17);
    bufp->fullIData(oldp+726,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_aHigh),17);
    bufp->fullIData(oldp+727,(vlSymsp->TOP__sim__VexRiscv.__PVT__execute_MulPlugin_bHigh),17);
    __Vtemp_hff286ec7__0[0U] = (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW);
    __Vtemp_hff286ec7__0[1U] = (((- (IData)((1U & (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                           >> 0x33U))))) 
                                 << 0x14U) | (IData)(
                                                     (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                      >> 0x20U)));
    __Vtemp_hff286ec7__0[2U] = (3U & ((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_LOW 
                                                             >> 0x33U))))) 
                                      >> 0xcU));
    VL_EXTEND_WQ(66,34, __Vtemp_h24933c90__0, vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_MUL_HH);
    VL_SHIFTL_WWI(66,66,32, __Vtemp_h385ceada__0, __Vtemp_h24933c90__0, 0x20U);
    VL_ADD_W(3, __Vtemp_h567caa2d__0, __Vtemp_hff286ec7__0, __Vtemp_h385ceada__0);
    __Vtemp_hc951bc44__0[0U] = __Vtemp_h567caa2d__0[0U];
    __Vtemp_hc951bc44__0[1U] = __Vtemp_h567caa2d__0[1U];
    __Vtemp_hc951bc44__0[2U] = (3U & __Vtemp_h567caa2d__0[2U]);
    bufp->fullWData(oldp+728,(__Vtemp_hc951bc44__0),66);
    bufp->fullBit(oldp+731,(((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__writeBack_arbitration_isValid) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_to_writeBack_IS_MUL))));
    bufp->fullQData(oldp+732,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1),33);
    bufp->fullIData(oldp+734,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs2),32);
    bufp->fullWData(oldp+735,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_accumulator),65);
    bufp->fullBit(oldp+738,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_needRevert));
    bufp->fullBit(oldp+739,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement));
    bufp->fullBit(oldp+740,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willClear));
    bufp->fullCData(oldp+741,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_valueNext),6);
    bufp->fullCData(oldp+742,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value),6);
    bufp->fullBit(oldp+743,((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
    bufp->fullBit(oldp+744,(((0x21U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value)) 
                             & (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_willIncrement))));
    bufp->fullBit(oldp+745,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done));
    bufp->fullBit(oldp+746,((0x20U == (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_counter_value))));
    bufp->fullIData(oldp+747,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_result),32);
    bufp->fullBit(oldp+748,(vlSymsp->TOP__sim__VexRiscv.__PVT__when_MulDivIterativePlugin_l128));
    bufp->fullBit(oldp+749,((1U & (~ (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_done)))));
    bufp->fullQData(oldp+750,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted),33);
    bufp->fullQData(oldp+752,(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator),33);
    bufp->fullIData(oldp+754,(((1U & (IData)((vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                              >> 0x20U)))
                                ? (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderShifted)
                                : (IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator))),32);
    bufp->fullIData(oldp+755,((((IData)(vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_rs1) 
                                << 1U) | (1U & (~ (IData)(
                                                          (vlSymsp->TOP__sim__VexRiscv.__PVT__memory_DivPlugin_div_stage_0_remainderMinusDenominator 
                                                           >> 0x20U)))))),32);
    bufp->fullIData(oldp+756,(vlSymsp->TOP__sim__VexRiscv.__PVT__externalInterruptArray_regNext),32);
}
