#[doc = "Register `EV_PENDING` reader"]
pub type R = crate::R<EV_PENDING_SPEC>;
#[doc = "Register `EV_PENDING` writer"]
pub type W = crate::W<EV_PENDING_SPEC>;
#[doc = "Field `zero` reader - `1` if a `zero` event occurred. This Event is triggered on a **falling** edge."]
pub type ZERO_R = crate::BitReader;
#[doc = "Field `zero` writer - `1` if a `zero` event occurred. This Event is triggered on a **falling** edge."]
pub type ZERO_W<'a, REG> = crate::BitWriter<'a, REG>;
impl R {
    #[doc = "Bit 0 - `1` if a `zero` event occurred. This Event is triggered on a **falling** edge."]
    #[inline(always)]
    pub fn zero(&self) -> ZERO_R {
        ZERO_R::new((self.bits & 1) != 0)
    }
}
impl W {
    #[doc = "Bit 0 - `1` if a `zero` event occurred. This Event is triggered on a **falling** edge."]
    #[inline(always)]
    #[must_use]
    pub fn zero(&mut self) -> ZERO_W<EV_PENDING_SPEC> {
        ZERO_W::new(self, 0)
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
#[doc = "When a zero event occurs, the corresponding bit will be set in this register. To clear the Event, set the corresponding bit in this register.\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`ev_pending::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`ev_pending::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct EV_PENDING_SPEC;
impl crate::RegisterSpec for EV_PENDING_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`ev_pending::R`](R) reader structure"]
impl crate::Readable for EV_PENDING_SPEC {}
#[doc = "`write(|w| ..)` method takes [`ev_pending::W`](W) writer structure"]
impl crate::Writable for EV_PENDING_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets EV_PENDING to value 0"]
impl crate::Resettable for EV_PENDING_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
