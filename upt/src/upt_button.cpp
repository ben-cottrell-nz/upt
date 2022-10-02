//
// Created by ben on 10/09/22.
//
#include "../include/upt_button.h"

upt_button::upt_button(const upt_rect &rect, string text) {
    _text = text;
    pt_platform::create_button(&rect, &text[0]);
}