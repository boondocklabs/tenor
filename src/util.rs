use size::Size;
use core::fmt::Display;

pub struct SizeFormat(Size);

impl Display for SizeFormat {
    fn fmt(&self, f: &mut core::fmt::Formatter<'_>) -> core::fmt::Result {
        todo!()
    }
}