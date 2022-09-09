#include <iostream>
#include "pt_application.h"
#include "pt_window.h"


int main(int argc, char* argv[]) {
    pt_application app(argc,argv);
    pt_window window({0,0,1024,768});
    app.add_window(&window);
    app.run();
    return 0;
}
