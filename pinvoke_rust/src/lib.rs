use std::ffi::{c_char, CStr, CString};

#[no_mangle]
pub extern "C" fn concatenate(input: *const c_char) -> *const c_char {
    // Don't take ownership of the input char pointer
    let input_string = unsafe {
        CStr::from_ptr(input).to_str().expect("Some error handling needed")
    };

    let mut output_string = String::new();

    output_string.push_str(input_string);
    output_string.push_str(input_string);

    let returned_string = CString::new(output_string).expect("Some error handling needed");

    // Leak the output char pointer, caller is responsible on calling "release"
    returned_string.into_raw()
}

#[no_mangle]
pub extern "C" fn release(input: *mut c_char) {
    // Take ownership of input char pointer and destroy it
    unsafe {
        let _ = CString::from_raw(input);
    }
}

