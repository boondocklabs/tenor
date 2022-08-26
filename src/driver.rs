pub(crate) trait DriverAccess<T> {
    fn access<R>(&self, f: impl FnOnce(&mut T) -> R) -> R;
    fn set(&self, instance: T);
}

#[macro_export]
macro_rules! driver_add {
    ($name:ident, $driver:ty) => {
        pub static $name: critical_section::Mutex<core::cell::RefCell<Option<$driver>>> = Mutex::new(core::cell::RefCell::new(None));

        // Implement the DriverAccess trait on the Mutex wrapping the driver type
        // This allows adding an access method which wraps the driver in a critical section
        impl DriverAccess<$driver> for Mutex<core::cell::RefCell<Option<$driver>>> {
            fn access<R>(&self, f: impl FnOnce(&mut $driver) -> R) -> R {
                critical_section::with(|cs| {
                    let mut cell = $name.borrow(cs).borrow_mut();

                    match cell.as_mut() {
                        Some(driver) => {
                            // Call the closure with a mutually exclusive handle to this driver
                            return f(driver)
                        }
                        None => {
                            panic!("Driver not initialized")
                        }
                    }
                })
            }

            fn set(&self, instance: $driver) {
                critical_section::with(|cs| {
                    let mut cell = $name.borrow(cs).borrow_mut();
                    cell.replace(instance);
                })
            }
        }
    }
}
