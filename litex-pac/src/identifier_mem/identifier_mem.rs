#[doc = "Register `IDENTIFIER_MEM` reader"]
pub type R = crate::R<IDENTIFIER_MEM_SPEC>;
#[doc = "Register `IDENTIFIER_MEM` writer"]
pub type W = crate::W<IDENTIFIER_MEM_SPEC>;
#[doc = "Field `identifier_mem` reader - "]
pub type IDENTIFIER_MEM_R = crate::FieldReader;
#[doc = "Field `identifier_mem` writer - "]
pub type IDENTIFIER_MEM_W<'a, REG> = crate::FieldWriter<'a, REG, 8>;
impl R {
    #[doc = "Bits 0:7"]
    #[inline(always)]
    pub fn identifier_mem(&self) -> IDENTIFIER_MEM_R {
        IDENTIFIER_MEM_R::new((self.bits & 0xff) as u8)
    }
}
impl W {
    #[doc = "Bits 0:7"]
    #[inline(always)]
    #[must_use]
    pub fn identifier_mem(&mut self) -> IDENTIFIER_MEM_W<IDENTIFIER_MEM_SPEC> {
        IDENTIFIER_MEM_W::new(self, 0)
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
#[doc = "8 x 37-bit memory\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`identifier_mem::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`identifier_mem::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct IDENTIFIER_MEM_SPEC;
impl crate::RegisterSpec for IDENTIFIER_MEM_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`identifier_mem::R`](R) reader structure"]
impl crate::Readable for IDENTIFIER_MEM_SPEC {}
#[doc = "`write(|w| ..)` method takes [`identifier_mem::W`](W) writer structure"]
impl crate::Writable for IDENTIFIER_MEM_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets IDENTIFIER_MEM to value 0"]
impl crate::Resettable for IDENTIFIER_MEM_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
