#[doc = "Register `INSTRUCTION` reader"]
pub type R = crate::R<INSTRUCTION_SPEC>;
#[doc = "Register `INSTRUCTION` writer"]
pub type W = crate::W<INSTRUCTION_SPEC>;
#[doc = "Field `instruction` reader - "]
pub type INSTRUCTION_R = crate::FieldReader<u32>;
#[doc = "Field `instruction` writer - "]
pub type INSTRUCTION_W<'a, REG> = crate::FieldWriter<'a, REG, 32, u32>;
impl R {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    pub fn instruction(&self) -> INSTRUCTION_R {
        INSTRUCTION_R::new(self.bits)
    }
}
impl W {
    #[doc = "Bits 0:31"]
    #[inline(always)]
    #[must_use]
    pub fn instruction(&mut self) -> INSTRUCTION_W<INSTRUCTION_SPEC> {
        INSTRUCTION_W::new(self, 0)
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
#[doc = "\n\nYou can [`read`](crate::generic::Reg::read) this register and get [`instruction::R`](R).  You can [`reset`](crate::generic::Reg::reset), [`write`](crate::generic::Reg::write), [`write_with_zero`](crate::generic::Reg::write_with_zero) this register using [`instruction::W`](W). You can also [`modify`](crate::generic::Reg::modify) this register. See [API](https://docs.rs/svd2rust/#read--modify--write-api)."]
pub struct INSTRUCTION_SPEC;
impl crate::RegisterSpec for INSTRUCTION_SPEC {
    type Ux = u32;
}
#[doc = "`read()` method returns [`instruction::R`](R) reader structure"]
impl crate::Readable for INSTRUCTION_SPEC {}
#[doc = "`write(|w| ..)` method takes [`instruction::W`](W) writer structure"]
impl crate::Writable for INSTRUCTION_SPEC {
    const ZERO_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
    const ONE_TO_MODIFY_FIELDS_BITMAP: Self::Ux = 0;
}
#[doc = "`reset()` method sets INSTRUCTION to value 0"]
impl crate::Resettable for INSTRUCTION_SPEC {
    const RESET_VALUE: Self::Ux = 0;
}
