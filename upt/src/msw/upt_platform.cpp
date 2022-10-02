//
// Created by ben on 10/09/22.
//
#include "../../include/upt_platform.h"
namespace pt_platform {
    HWND g_main_window;
    native_window_t create_window(const pt_rect* rect);
    native_window_t native_main_window();
    void create_application(int, char**);
    void dispose(native_window_t);
}