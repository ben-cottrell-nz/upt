#include <iostream>
#include "pt_application.h"
#include "pt_window.h"


int main() {
    pt_application app;
    pt_window window({0,0,640,430});
    app.add_main_window(&window);
    app.run();
    return 0;
}
