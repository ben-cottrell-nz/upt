//
// Created by ben on 14/04/21.
//

#ifndef SHOWCASE_UPT_WINDOW_H
#define SHOWCASE_UPT_WINDOW_H

#include <memory>
#include "upt_object.h"
#include "upt_platform.h"

using std::unique_ptr;
using namespace pt_platform;

class upt_window : public upt_object {
public:
    upt_window();
    upt_window(upt_window&);
    explicit upt_window(const upt_rect&);
    ~upt_window();
    native_window_t native_window();
    native_window_t add_control(native_window_t);
    void show();
private:
    native_window_t _native_window;
};


#endif //SHOWCASE_UPT_WINDOW_H
