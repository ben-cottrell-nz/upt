//
// Created by ben on 14/04/21.
//

#include "pt_window.h"
#include "pt_platform.h"

pt_window::pt_window(pt_window& parent) : pt_object() {

}

pt_window::~pt_window() = default;

void pt_window::show() {

}

pt_window::pt_window(const pt_rect &rect) {
    _native_window = pt_platform::create_window(&rect);
}

pt_platform::native_window_t pt_window::native_window() {
    return _native_window;
}

pt_window::pt_window() {

}
