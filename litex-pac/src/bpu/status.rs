#[doc = "Register `STATUS` reader"]
pub type R = crate::R<STATUS_SPEC>;
#[doc = "Register `STATUS` writer"]
pub type W = crate::W<STATUS_SPEC>;
#[doc = "Field `busy` reader - BPU Busy"]
pub type BUSY_R = crate::BitReader;
#[doc = "Field `busy` writer - BPU Busy"]
pub type BUSY_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `idle` reader - BPU Idle"]
pub type IDLE_R = crate::BitReader;
#[doc = "Field `idle` writer - BPU Idle"]
pub type IDLE_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `running` reader - BPU Running"]
pub type RUNNING_R = crate::BitReader;
#[doc = "Field `running` writer - BPU Running"]
pub type RUNNING_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `done` reader - BPU Done"]
pub type DONE_R = crate::BitReader;
#[doc = "Field `done` writer - BPU Done"]
pub type DONE_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0 - BPU Busy"]
    #[inline(always)]
    pub fn busy(&self) -> BUSY_R {
        BUSY_R::new((self.bits & 1) != 0)
    }
    #[doc = "Bit 1 - BPU Idle"]
    #[inline(always)]
    pub fn idle(&self) -> IDLE_R {
        IDLE_R::new(((self.bits >> 1) & 1) != 0)
    }
    #[doc = "Bit 2 - BPU Running"]
    #[inline(always)]
    pub fn running(&self) -> RUNNING_R {
        RUNNING_R::new(((self.bits >> 2) & 1) != 0)
    }
    #[doc = "Bit 3 - BPU Done"]
    #[inline(always)]
    pub fn done(&self) -> DONE_R {
        DONE_R::new(((self.bits >> 3) & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0 - BPU Busy"]
    #[inline(always)]
    #[must_use]
    pub fn busy(&mut self) -> BUSY_W<STATUS_SPEC> {
        BUSY_W::new(self, 0)
    }
    #[doc = "Bit 1 - BPU Idle"]
    #[inline(always)]
    #[must_use]
    pub fn idle(&mut self) -> IDLE_W<STATUS_SPEC> {
        IDLE_W::new(self, 1)
    }
    #[doc = "Bit 2 - BPU Running"]
    #[inline(always)]
    #[must_use]
    pub fn running(&mut self) -> RUNNING_W<STATUS_SPEC> {
        RUNNING_W::new(self, 2)
    }
    #[doc = "Bit 3 - BPU Done"]
    #[inline(always)]
    #[must_use]
    pub fn done(&mut self) -> DONE_W<STATUS_SPEC> {
        DONE_W::new(self, 3)
    }
    #[doc = r" Writes raw bits to the register."]
    #[doc = r""]
    #[doc = r" # Safety"]
    #[doc = r""]
    #[doc = r" Passing incorrect value can cause undefined behaviour. See reference manual"]
    #[inline(always)]
    pub unsafe fn bits(&mut self, bits: u32) -> &mut Self {
        self.bits = bits;
        self
    }
}
#[doc = "BPU Status\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`status::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`status::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct STATUS_SPEC;
impl crate::RegisterSpec for STATUS_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`status::R`](R) reader structure"]
impl crate::Readable for STATUS_SPEC {}
#[doc = "`write(|w| ..)` method takes [`status::W`](W) writer structure"]
impl crate::Writable for STATUS_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets STATUS to value 0"]
impl crate::Resettable for STATUS_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
