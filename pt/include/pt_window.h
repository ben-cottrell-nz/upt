//
// Created by ben on 14/04/21.
//

#ifndef SHOWCASE_PT_WINDOW_H
#define SHOWCASE_PT_WINDOW_H

#include <memory>
#include "pt_object.h"
#include "pt_platform.h"

using std::unique_ptr;

class pt_window : public pt_object {
public:
    pt_window();
    pt_window(pt_window&);
    explicit pt_window(const pt_rect&);
    ~pt_window();
    pt_platform::native_window* native_window();
    void show();
private:
    pt_platform::native_window _native_window;
};


#endif //SHOWCASE_PT_WINDOW_H
