//
// Created by ben on 14/04/21.
//

#include "../include/upt_application.h"
#include <memory>

upt_application::upt_application(int argc, char* argv[]) {
    pt_platform::create_application(argc, argv);
}

upt_application::~upt_application() {

}

void upt_application::add_window(upt_window* window) {
    _main_window = std::move(window);
}

void upt_application::run() {
    pt_platform::run_event_loop(_main_window->native_window());
}

pt_platform::native_window_t upt_application::native_main_window() {
    return pt_platform::native_main_window();
}
