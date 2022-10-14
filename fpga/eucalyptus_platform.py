#
# This file is part of LiteX-Boards.
#
# Copyright (c) 2022 Matt Thompson <matt@boondocker.io>
# SPDX-License-Identifier: BSD-2-Clause

from litex.build.generic_platform import *
from litex.build.lattice import LatticePlatform
from litex.build.lattice.programmer import OpenOCDJTAGProgrammer

# IOs ----------------------------------------------------------------------------------------------

_io_v0_1 = [
    # Clk
    ("clk50", 0, Pins("C8"), IOStandard("LVCMOS33")),
    ("rst_n", 0, Pins("A13"), IOStandard("LVCMOS33")),

    # LEDs
    ("led_n", 0, Pins("A5 B6 A6 B7"), IOStandard("LVCMOS33")),

    # Serial FTDI USB UART
    ("serial", 0,
        Subsignal("tx", Pins("R8")),
        Subsignal("rx", Pins("R7")),
        IOStandard("LVCMOS33")
    ),

    # DDR3 SDRAM
    ("ddram", 0,
        Subsignal("a", Pins(
            "F16 J16 F15 C16 H14 C15 G14 D16 F14 E16 K16 E14 J14"),
            IOStandard("SSTL135_I")),
        Subsignal("ba",    Pins("B15 K15 G15"), IOStandard("SSTL135_I")),
        Subsignal("ras_n", Pins("J15"),  IOStandard("SSTL135_I")),
        Subsignal("cas_n", Pins("H15"),  IOStandard("SSTL135_I")),
        Subsignal("we_n",  Pins("G16"),  IOStandard("SSTL135_I")),
        #Subsignal("cs_n",  Pins("F16"),  IOStandard("SSTL135_I")),
        Subsignal("dm", Pins("M15 P13"), IOStandard("SSTL135_I")),
        Subsignal("dq", Pins(
            "P16 L13 N14 M16 M13 K13 L12 L14",
            "T15 N12 R14 P12 R13 M11 T14 M12"),
            IOStandard("SSTL135_I"),
            Misc("TERMINATION=75")),
        Subsignal("dqs_p", Pins("N16 R12"), IOStandard("SSTL135D_I"),
            Misc("TERMINATION=OFF DIFFRESISTOR=100")),
        Subsignal("clk_p", Pins("L16"), IOStandard("SSTL135D_I")),
        Subsignal("cke",   Pins("K14"),  IOStandard("SSTL135_I")),
        Subsignal("odt",   Pins("B16"), IOStandard("SSTL135_I")),
        Subsignal("reset_n", Pins("E15"), IOStandard("SSTL135_I")),
        Misc("SLEWRATE=FAST")
    ),

    ("usb", 0,
        Subsignal("d_p", Pins("B13")),
        Subsignal("d_n", Pins("C13")),
        Subsignal("pullup", Pins("D13")),
        IOStandard("LVCMOS33")
    ),

    # SDCard
    ("sdcard", 0,
        Subsignal("data", Pins("L3 L4 K5 K4")),
        Subsignal("cmd", Pins("N4")),
        Subsignal("clk", Pins("P5")),
        Misc("SLEW=FAST"),
        IOStandard("LVCMOS33"),
    ),

    ("emmc", 0,
        Subsignal("rst_n", Pins("M4")),
        Subsignal("ds", Pins("N3")),
        IOStandard("LVCMOS33"),
    ),

    # SPIFlash (W25Q256JV)
    # Flash clock is connected to MCLK and needs to be accessed using USRMCLK macro
    # See TN-02039 ECP5 and ECP5-5G sysCONFIG Usage Guide section 6.1.2
    ("spiflash", 0,
        Subsignal("cs_n", Pins("N8")),
        Subsignal("mosi", Pins("T8")),
        Subsignal("miso", Pins("T7")),
        IOStandard("LVCMOS33"),
    ),
    ("spiflash4x", 0,
        Subsignal("cs_n", Pins("N8")),
        Subsignal("dq",   Pins("T8 T7 M7 N7")),
        IOStandard("LVCMOS33"),
    ),

    # RGMII Ethernet
    ("eth_clocks", 0,
        Subsignal("tx", Pins("A7")),
        Subsignal("rx", Pins("C7")),
        IOStandard("LVCMOS33")
    ),
    ("eth", 0,
        Subsignal("rst_n",   Pins("B5")),
        Subsignal("mdio",    Pins("D7")),
        Subsignal("mdc",     Pins("D6")),
        Subsignal("rx_ctl",  Pins("E5")),
        Subsignal("rx_data", Pins("D5 C5 D4 C4")),
        Subsignal("tx_ctl",  Pins("A4")),
        Subsignal("tx_data", Pins("A2 B3 A3 B4")),
        IOStandard("LVCMOS33")
    ),

    ("oled", 0,
        Subsignal("sda", Pins("M9")),
        Subsignal("scl", Pins("M8")),
    ),

    ("stemma", 0,
        Subsignal("sda", Pins("B8")),
        Subsignal("scl", Pins("A8")),
    ),
    ("stemma", 1,
        Subsignal("sda", Pins("B9")),
        Subsignal("scl", Pins("A9")),
    ),
]

# Platform -----------------------------------------------------------------------------------------

class Platform(LatticePlatform):
    default_clk_name = "clk50"
    default_clk_period = 1e9/50e6

    def __init__(self, device="25F", revision="0.1", toolchain="trellis"):
        device = "LFE5U-25F-6BG256C"
        io = _io_v0_1
        connectors = []
        LatticePlatform.__init__(self, device, io, connectors=connectors, toolchain=toolchain)

    #def create_programmer(self):
    #    return OpenOCDJTAGProgrammer("openocd_colorlight_5a_75b.cfg")

    def do_finalize(self, fragment):
        LatticePlatform.do_finalize(self, fragment)
        self.add_period_constraint(self.lookup_request("clk50",            loose=True), Platform.default_clk_period)
        self.add_period_constraint(self.lookup_request("eth_clocks:rx", 0, loose=True), 1e9/125e6)
        self.add_period_constraint(self.lookup_request("hspi_clocks:rx", 0, loose=True), 1e9/120e6)
