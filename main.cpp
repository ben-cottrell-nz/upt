#include <iostream>
#include "upt_application.h"
#include "upt_window.h"
#include "upt_button.h"


int main(int argc, char* argv[]) {
    upt_application app(argc,argv);
    upt_window window({0,0,1024,768});
    upt_button main_button({0,0,100,45}, "Click Me!");
    window.add_control(main_button);
    app.add_window(&window);
    app.run();
    return 0;
}
