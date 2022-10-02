//
// Created by ben on 14/04/21.
//

#ifndef SHOWCASE_UPT_PLATFORM_H
#define SHOWCASE_UPT_PLATFORM_H

#include "upt_rect.h"

#ifdef __linux__
#include "platform_types/linux/wm-types.h"
#elif WIN32
#include "platform_types/msw/wm-types.h"
#endif

namespace pt_platform {
    native_window_t create_window(const upt_rect* rect);
    native_window_t create_button(const upt_rect* rect, const char* text);
    //parameters: window, control
    native_window_t add_control_to_window(native_window_t, native_window_t);
    native_window_t native_main_window();
    void create_application(int, char**);
    void run_event_loop(native_window_t);
    void dispose(native_window_t);
};


#endif //SHOWCASE_UPT_PLATFORM_H
