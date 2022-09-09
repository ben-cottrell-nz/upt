//
// Created by ben on 14/04/21.
//

#ifndef SHOWCASE_PT_APPLICATION_H
#define SHOWCASE_PT_APPLICATION_H

#include "pt_object.h"
#include "pt_window.h"

//class pt_window;

class pt_application : public pt_object  {
public:
    pt_application(int, char**);
    ~pt_application();
    void add_window(pt_window*);
    void run();
    pt_platform::native_window_t native_main_window();
private:
    pt_window* _main_window;
};


#endif //SHOWCASE_PT_APPLICATION_H
