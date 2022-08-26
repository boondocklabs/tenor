from platform import platform
from re import S
from migen import *
from litex_boards.platforms import lambdaconcept_ecpix5
from litex.soc.interconnect.csr import *
from litex.soc.interconnect import wishbone
from litex.soc.interconnect import stream
from litex.soc.cores.dma import WishboneDMAReader, WishboneDMAWriter

from litex.build.io import DDRInput
from litex.build.io import DifferentialInput


class MIPI(Module, AutoCSR):
    def __init__(self, pads):

        #ClockSignal()
        pass

