//
// Created by ben on 14/04/21.
//

#include "pt_application.h"
#include <memory>

pt_application::pt_application(int argc, char* argv[]) {
    pt_platform::create_application(argc, argv);
}

pt_application::~pt_application() {

}

void pt_application::add_window(pt_window* window) {
    _main_window = std::move(window);
}

void pt_application::run() {
    pt_platform::run_event_loop(_main_window->native_window());
}

pt_platform::native_window_t pt_application::native_main_window() {
    return pt_platform::native_main_window();
}
