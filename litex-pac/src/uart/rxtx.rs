#[doc = "Register `RXTX` reader"]
pub type R = crate::R<RXTX_SPEC>;
#[doc = "Register `RXTX` writer"]
pub type W = crate::W<RXTX_SPEC>;
#[doc = "Field `rxtx` reader - "]
pub type RXTX_R = crate::FieldReader;
#[doc = "Field `rxtx` writer - "]
pub type RXTX_W<'a, REG> = crate::FieldWriter<'a, REG, 8>;
impl R {
    #[doc = "Bits 0:7"]
    #[inline(always)]
    pub fn rxtx(&self) -> RXTX_R {
        RXTX_R::new((self.bits & 0xff) as u8)
    }
}
impl W {
    #[doc = "Bits 0:7"]
    #[inline(always)]
    #[must_use]
    pub fn rxtx(&mut self) -> RXTX_W<RXTX_SPEC> {
        RXTX_W::new(self, 0)
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
#[doc = "\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`rxtx::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`rxtx::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct RXTX_SPEC;
impl crate::RegisterSpec for RXTX_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`rxtx::R`](R) reader structure"]
impl crate::Readable for RXTX_SPEC {}
#[doc = "`write(|w| ..)` method takes [`rxtx::W`](W) writer structure"]
impl crate::Writable for RXTX_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets RXTX to value 0"]
impl crate::Resettable for RXTX_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
