//
// Created by ben on 14/04/21.
//

#ifndef SHOWCASE_PT_PLATFORM_H
#define SHOWCASE_PT_PLATFORM_H

#include "pt_rect.h"

#ifdef __linux__
#include "platform_types/linux/wm-types.h"
#endif

namespace pt_platform {
    native_window_t create_window(const pt_rect* rect);
    native_window_t native_main_window();
    void create_application(int, char**);
    void run_event_loop(native_window_t);
    void dispose(native_window_t);
};


#endif //SHOWCASE_PT_PLATFORM_H
