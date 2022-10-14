from platform import platform
from re import S
from migen import *

from litex.soc.interconnect.csr import *
from litex.soc.interconnect.csr_eventmanager import *

from litex.soc.interconnect import wishbone
from litex.soc.cores.dma import WishboneDMAReader, WishboneDMAWriter

from enum import Enum


class ThreadManagementUnit(Module, AutoCSR):
    def __init__(self, data_width=32, adr_width=30):
    #def __init__(self, bus):
        self.num_slots = 64
        self.bus = wishbone.Interface()

        self.ident = CSRConstant(0xB4A10001, name = "Identification")

        self.status = CSRStatus(32, description = "TMU Status Register", fields = [
            CSRField(name="enabled", size=1, description="TMU Enabled"),
            CSRField(name="locked", size=1, description="TMU Locked"),
            CSRField(name="ack", size=1, description="TMU Command Ack"),
        ]);

        self.slot_status = CSRStatus(32, description = "Slot Status", fields = [
            CSRField(name="used", size=log2_int(self.num_slots), description="Used slots")
        ]);
        
        self.control = CSRStorage(32, description = "TMU Control Register", fields=[
            CSRField(name="reset", size=1, description="Reset TMU"),
            CSRField(name="enable", size=1, description="Enable TMU"),
            CSRField(name="lock", size=1, description="Lock TMU"),
        ])

        # The switch register will be driven to the source/dest thread IDs
        # for the ISR to read for a context switch
        self.switch_source = CSRStatus(32, description = "TMU Switch Source");
        self.switch_dest = CSRStatus(32, description = "TMU Switch Destination");

        self.current_thread = CSRStatus(32, description = "Current thread")

        # BROKEN in LiteX
        #self.switch = CSRStatus(64, description = "TMU Switch Status", fields=[
        #    CSRField(name="source", size=32, description="Source Thread ID"),
        #    CSRField(name="dest", size=32, description="Destination Thread ID"),
        #])

        #self.args = CSRStorage(128, fields = [
        #    CSRField(name="thread_id", size=32, description="Thread ID"),
        #    CSRField(name="context_pointer", size=32, description="Context Pointer"),
        #    CSRField(name="flags", size=32, description="Flags")
        #])

        self.cmd_thread_id = CSRStorage(32)
        self.cmd_context_pointer = CSRStorage(32)
        self.cmd_flags = CSRStorage(32)

        self.command = CSRStorage(32, atomic_write=True, fields = [
            CSRField(name="add", size=1, description="Add the thread described in the args CSR"),
            CSRField(name="remove", size=1, description="Remove the thread described in the args CSR"),
        ])

        # Interrupt events
        self.submodules.ev = EventManager()
        self.ev.switch = EventSourceProcess(edge="rising")
        self.ev.finalize()

        command_fsm = ResetInserter()(FSM(reset_state="IDLE"))
        self.submodules += command_fsm

        self.comb += command_fsm.reset.eq(self.control.fields.reset)

        #### Slots to store TCB pointers

        slot_index = Signal(log2_int(self.num_slots))
 
        slot = Memory(32, self.num_slots, init=[])
        self.specials += slot
        
        cmd_write_port = slot.get_port(write_capable=True, mode=READ_FIRST)
        self.specials += cmd_write_port

        cmd_read_port = slot.get_port(has_re = True, async_read=True)
        self.specials += cmd_read_port

        self.comb += cmd_read_port.adr.eq(slot_index)
        self.comb += cmd_write_port.adr.eq(slot_index)

        command_fsm.act("IDLE",
            self.slot_status.fields.used.eq(slot_index),
            #write_port.we.eq(1),
            If(self.command.fields.add,
                cmd_read_port.re.eq(1),
                NextValue(slot_index, 0),
                NextState("ADD_THREAD")
            )
        )

        command_fsm.act("ADD_THREAD",
            cmd_read_port.re.eq(1),
            If(cmd_read_port.dat_r == 0,
                cmd_write_port.we.eq(1),
                cmd_write_port.dat_w.eq(self.cmd_context_pointer.storage),
                NextState("COMMAND_ACK")
            ).Else(
                cmd_read_port.re.eq(1),
                NextValue(slot_index, slot_index + 1)
            )
        )

        command_fsm.act("COMMAND_ACK",
            self.status.fields.ack.eq(1),
            If(self.command.storage == 0,
                self.status.fields.ack.eq(0),
                NextState("IDLE")
            )
        )


        ##### Scheduler FSM
        sched_read_port = slot.get_port(has_re = True, async_read=True)
        self.specials += sched_read_port

        sched_read_port2 = slot.get_port(has_re = False, async_read=True)
        self.specials += sched_read_port2

        fsm = FSM(reset_state="IDLE")
        fsm: FSM = ResetInserter()(fsm)
        self.submodules += fsm

        self.comb += self.status.fields.enabled.eq(self.control.fields.enable)
        self.comb += fsm.reset.eq(self.control.fields.reset)


        # When this counter wraps, the scheduler will switch to the next thread
        counter = Signal(19)

        # Make counter wrap at num slots (log2(num_slots))
        current_thread = Signal(log2_int(self.num_slots))
        next_thread = Signal(log2_int(self.num_slots))

        self.comb += sched_read_port.adr.eq(next_thread)
        self.comb += sched_read_port2.adr.eq(current_thread)

        #self.comb += self.switch_source.status.eq(current_thread)
        #self.comb += self.switch_dest.status.eq(next_thread)

        self.comb += self.switch_dest.status.eq(sched_read_port.dat_r)
        self.comb += self.switch_source.status.eq(sched_read_port2.dat_r)

        fsm.act("IDLE",
            NextValue(counter, 1),
            NextState("RUN"),
        )

        fsm.act("RUN",
            NextValue(counter, counter + 1),

            If(counter == 0,
                NextValue(current_thread, next_thread),
                NextValue(next_thread, next_thread + 1),
                sched_read_port.re.eq(1),
                NextState("NEXT-SLOT")
            )
        )

        fsm.act("NEXT-SLOT",
            If(sched_read_port.dat_r != 0,
                NextState("SWITCH"),
            ).Else(
                NextValue(next_thread, next_thread + 1),
            )
        )

        fsm.act("SWITCH",
            self.ev.switch.trigger.eq(1),
            NextState("WAIT-SWITCH") 
        )

        fsm.act("WAIT-SWITCH",
            If(self.ev.switch.pending == 0,
                NextState("IDLE")
            )
        )