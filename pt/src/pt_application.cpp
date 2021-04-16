//
// Created by ben on 14/04/21.
//

#include "pt_application.h"

pt_application::pt_application() : _main_window(new pt_window()) {

}

pt_application::~pt_application() {

}

void pt_application::add_main_window(pt_window* window) {
    _main_window = window;
}

void pt_application::run() {
    pt_platform::run_event_loop(_main_window->native_window());
}
