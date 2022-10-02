//
// Created by ben on 14/04/21.
//

#include "../include/upt_platform.h"
#include "../include/upt_window.h"

upt_window::upt_window(upt_window& parent) : upt_object() {

}

upt_window::~upt_window() = default;

void upt_window::show() {

}

upt_window::upt_window(const upt_rect &rect) {
    _native_window = pt_platform::create_window(&rect);
}

pt_platform::native_window_t upt_window::native_window() {
    return _native_window;
}

upt_window::upt_window() {

}

native_window_t upt_window::add_control(native_window_t value) {
    pt_platform::add_control_to_window(_native_window,
                                       value);
    return value;
}
