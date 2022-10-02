//
// Created by ben on 10/09/22.
//

#ifndef SHOWCASE_UPT_BUTTON_H
#define SHOWCASE_UPT_BUTTON_H

#include <memory>
#include <string>
#include "upt_object.h"
#include "upt_platform.h"

using std::string;

class upt_button : public upt_object {
public:
    upt_button(const upt_rect& rect, string text);
private:
    pt_platform::native_window_t _native_button;
    string _text;
};
#endif //SHOWCASE_UPT_BUTTON_H
