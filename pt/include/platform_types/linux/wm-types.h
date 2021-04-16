//
// Created by ben on 16/04/21.
//

#ifndef SHOWCASE_WM_TYPES_H
#define SHOWCASE_WM_TYPES_H
#include <X11/Xlib.h>
namespace pt_platform {
    struct native_window {
        Display *display;
        Window handle;
    };
}
#endif //SHOWCASE_WM_TYPES_H
