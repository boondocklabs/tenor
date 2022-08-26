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
    def __init__(self, address_width=30, data_width=32):
        # The sink endpoint streams incoming DMA data
        self.sink = stream.Endpoint([("data", data_width)])

        # The source endpoint provides the output DMA stream
        self.source = stream.Endpoint([("address", address_width), ("data", data_width)])

        data = Signal(data_width)

        self.comb += [
            self.sink.ready.eq(1)
        ]

        # Process data arriving from the DMA stream
        self.sync += [
            #If(self.sink.valid,
            #    self.sink.ready.eq(1),
            #    data.eq(self.sink.data),

                #self.source.address.eq(0x90000000),
                #self.source.data.eq(data),
                #self.source.valid.eq(1)
            #)
        ]

        self.counter = Signal(32)

        self.sync += [
            self.counter.eq(self.counter + 1),
            #self.instruction.storage.eq(self.instruction),

            #Case(self.instruction.storage, {
            #    BpuOperation.OP_ADD.value: self.output.storage.eq(self.input.storage + self.imm.storage),
            #    BpuOperation.OP_SUB.value: self.output.storage.eq(self.input.storage - self.imm.storage),
            #    "default": self.output.storage.eq(self.input.storage)
            #}),

        ]

class BPU(Module, AutoCSR):
    def __init__(self, data_width=32, adr_width=30):
    #def __init__(self, bus):
        #self.bus = wishbone.Interface(data_width=data_width, adr_width=adr_width)
        self.bus = wishbone.Interface()

        self.core = BPUCore(data_width=self.bus.data_width)

        self.dma_reader = WishboneDMAReader(self.bus, with_csr=False)
        self.dma_writer = WishboneDMAWriter(self.bus, with_csr=False)

        # Add the submodules 
        self.submodules += self.core
        self.submodules += self.dma_reader
        self.submodules += self.dma_writer

        # Connect the DMA reader to the core
        self.comb += self.dma_reader.source.connect(self.core.sink)
        #self.comb += self.core.source.connect(self.dma_writer.sink)


        fields = []

        self.ident = CSRConstant(0xabad1dea, name = "Identification")

        self.status = CSRStatus(32, description = "BPU Status", fields = [
            CSRField(name="busy", size=1, description="BPU Busy"),
            CSRField(name="idle", size=1, description="BPU Idle"),
            CSRField(name="running", size=1, description="BPU Running"),
            CSRField(name="done", size=1, description="BPU Done"),
        ]);
        
        self.control = CSRStorage(32, fields=[
            CSRField(name="enable", size=1, description="Enable BPU"),
            CSRField(name="reset", size=1, description="Reset BPU"),
        ])

        self.instruction = CSRStorage(32, reset=0)

        self.src = CSRStorage(32, atomic_write=True)
        self.dst = CSRStorage(32, atomic_write=True)
        self.length = CSRStorage(32)

        #self.input = CSRStorage(32)
        #self.output = CSRStorage(32)
        #self.imm = CSRStorage(32)

        self.offset = CSRStatus(32)
        self.data = CSRStatus(32)
        self.tick = CSRStatus(32)

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

        self.comb += fsm.reset.eq(~self.control.fields.enable)
        self.comb += self.data.status.eq(data)

        self.comb += self.offset.status.eq(offset)
        self.comb += self.tick.status.eq(self.core.counter)

        fsm.act("IDLE",
            NextValue(offset, 0),
            NextState("RUN"),
            self.status.fields.idle.eq(1),
        )

        fsm.act("RUN",
            self.status.fields.running.eq(1),

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
            self.status.fields.done.eq(1),
        )