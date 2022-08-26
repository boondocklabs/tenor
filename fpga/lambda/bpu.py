from platform import platform
from re import S
from migen import *
from litex_boards.platforms import lambdaconcept_ecpix5
from litex.soc.interconnect.csr import *
from litex.soc.interconnect import wishbone
from litex.soc.interconnect import stream
from litex.soc.cores.dma import WishboneDMAReader, WishboneDMAWriter

from enum import Enum


class BpuOperation(Enum):
    OP_NOP = 0b0000
    OP_ADD = 0b0001
    OP_SUB = 0b0010
    OP_CMP = 0b0011

class BPUCore(Module):
    def __init__(self, data_width=32):
        self.sink = stream.Endpoint([("data", data_width)])
        self.source = stream.Endpoint([("data", data_width)])

        data = Signal(data_width)

        # Process data arriving from the DMA stream
        self.sync += [
            If(self.sink.valid,
                self.sink.ready.eq(1),
                data.eq(self.sink.data)
            )
        ]

        self.counter = Signal(32)

        self.sync += [
            self.counter.eq(self.counter + 1)
            #self.instruction.storage.eq(self.instruction)

            #Case(self.instruction.storage, {
            #    BpuOperation.OP_ADD.value: self.output.storage.eq(self.input.storage + self.imm.storage),
            #    BpuOperation.OP_SUB.value: self.output.storage.eq(self.input.storage - self.imm.storage),
            #    "default": self.output.storage.eq(self.input.storage)
            #}),

        ]

class BPU(Module, AutoCSR):
    def __init__(self, data_width=32, adr_width=30):
        self.bus = wishbone.Interface(data_width=data_width, adr_width=adr_width)

        self.core = BPUCore(data_width=data_width)
        self.submodules.core = self.core

        self.dma_reader = WishboneDMAReader(self.bus, with_csr=False)
        #self.dma_writer = WishboneDMAWriter(self.bus, with_csr=False)

        # Connect the DMA reader to the core
        #self.dma_reader.source.connect(self.core.sink)
        #self.comb += self.core.sink.connect(self.dma_reader.source)
        self.comb += self.dma_reader.source.connect(self.core.sink)

        self.submodules += self.dma_reader
        #self.submodules += self.dma_writer

        self.instruction = CSRStorage(32, reset=0)

        self.src = CSRStorage(32)
        self.dst = CSRStorage(32)
        self.length = CSRStorage(32)
        self.enable = CSRStorage()

        self.input = CSRStorage(32)
        self.output = CSRStorage(32)
        self.imm = CSRStorage(32)
        self.done   = CSRStatus()
        self.offset = CSRStatus(32)
        self.tick = CSRStatus(32)
        self.data = CSRStatus(32)

        fsm = FSM(reset_state="IDLE")
        fsm: FSM = ResetInserter()(fsm)
        self.submodules += fsm

        shift = log2_int(self.bus.data_width//8)
        base = Signal(self.bus.adr_width)
        offset = Signal(self.bus.adr_width)
        length = Signal(self.bus.adr_width)
        data = Signal(self.bus.data_width)

        self.comb += base.eq(self.src.storage[shift:])
        self.comb += length.eq(self.length.storage[shift:])

        self.comb += fsm.reset.eq(~self.enable.storage)
        self.comb += self.data.status.eq(data)

        self.comb += self.offset.status.eq(offset)
        self.comb += self.tick.status.eq(self.core.counter)

        fsm.act("IDLE",
            NextValue(offset, 0),
            NextState("RUN")
        )

        fsm.act("RUN",
            self.dma_reader.sink.valid.eq(1),
            self.dma_reader.sink.last.eq(offset == (length - 1)),
            self.dma_reader.sink.address.eq(base + offset),

            If(self.dma_reader.sink.ready,
                NextValue(offset, offset + 1),
                If(self.dma_reader.sink.last,
                    NextState("DONE")
                )
            )
        )

        fsm.act("DONE",
            self.done.status.eq(1),
        )