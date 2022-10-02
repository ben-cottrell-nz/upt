//
// Created by ben on 14/04/21.
//

#ifndef SHOWCASE_UPT_APPLICATION_H
#define SHOWCASE_UPT_APPLICATION_H

#include "upt_object.h"
#include "upt_window.h"

//class upt_window;

class upt_application : public upt_object  {
public:
    upt_application(int, char**);
    ~upt_application();
    void add_window(upt_window*);
    void run();
    pt_platform::native_window_t native_main_window();
private:
    upt_window* _main_window;
};


#endif //SHOWCASE_UPT_APPLICATION_H
