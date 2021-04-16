//
// Created by ben on 14/04/21.
//

#include "pt_platform.h"
#include <unistd.h>

namespace pt_platform {
    native_window create_window(const pt_rect &rect) {
        native_window w{};
        w.display = XOpenDisplay(0);
        w.handle = XCreateWindow(w.display,
                                        DefaultRootWindow(w.display),
                                        0, 0, rect.w, rect.h, 0,
                                        CopyFromParent, CopyFromParent,
                                        CopyFromParent,
                                        0UL, 0);
        XMapWindow(w.display, w.handle);
        XFlush(w.display);
        return w;
    }

    void run_event_loop(native_window* w) {
        XMapWindow(w->display, w->handle);
        GC gc = XCreateGC(w->display, w->handle,
                          0, 0);
        int blackColor = BlackPixel(w->display,
                                    DefaultScreen(w->display));
        XSetForeground(w->display, gc, blackColor);
        for (;;) {
            XEvent e;
            XNextEvent(w->display, &e);
            if (e.type == MapNotify)
                break;
            //TODO: Fire callback handlers for events
        }
        XFlush(w->display);
        sleep(10);
    }

    void dispose(native_window &) {

    }

}