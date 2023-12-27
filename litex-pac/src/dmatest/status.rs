#[doc = "Register `STATUS` reader"]
pub type R = crate::R<STATUS_SPEC>;
#[doc = "Register `STATUS` writer"]
pub type W = crate::W<STATUS_SPEC>;
#[doc = "Field `idle` reader - DMA Idle"]
pub type IDLE_R = crate::BitReader;
#[doc = "Field `idle` writer - DMA Idle"]
pub type IDLE_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `read` reader - DMA Read"]
pub type READ_R = crate::BitReader;
#[doc = "Field `read` writer - DMA Read"]
pub type READ_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `write` reader - DMA Write"]
pub type WRITE_R = crate::BitReader;
#[doc = "Field `write` writer - DMA Write"]
pub type WRITE_W<'a, REG> = crate::BitWriter<'a, REG>;
#[doc = "Field `done` reader - DMA Done"]
pub type DONE_R = crate::BitReader;
#[doc = "Field `done` writer - DMA Done"]
pub type DONE_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0 - DMA Idle"]
    #[inline(always)]
    pub fn idle(&self) -> IDLE_R {
        IDLE_R::new((self.bits & 1) != 0)
    }
    #[doc = "Bit 1 - DMA Read"]
    #[inline(always)]
    pub fn read(&self) -> READ_R {
        READ_R::new(((self.bits >> 1) & 1) != 0)
    }
    #[doc = "Bit 2 - DMA Write"]
    #[inline(always)]
    pub fn write(&self) -> WRITE_R {
        WRITE_R::new(((self.bits >> 2) & 1) != 0)
    }
    #[doc = "Bit 3 - DMA Done"]
    #[inline(always)]
    pub fn done(&self) -> DONE_R {
        DONE_R::new(((self.bits >> 3) & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0 - DMA Idle"]
    #[inline(always)]
    #[must_use]
    pub fn idle(&mut self) -> IDLE_W<STATUS_SPEC> {
        IDLE_W::new(self, 0)
    }
    #[doc = "Bit 1 - DMA Read"]
    #[inline(always)]
    #[must_use]
    pub fn read(&mut self) -> READ_W<STATUS_SPEC> {
        READ_W::new(self, 1)
    }
    #[doc = "Bit 2 - DMA Write"]
    #[inline(always)]
    #[must_use]
    pub fn write(&mut self) -> WRITE_W<STATUS_SPEC> {
        WRITE_W::new(self, 2)
    }
    #[doc = "Bit 3 - DMA Done"]
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
#[doc = "DMA Status\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`status::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`status::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
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
