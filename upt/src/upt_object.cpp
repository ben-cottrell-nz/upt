//
// Created by ben on 14/04/21.
//

#include "../include/upt_object.h"

upt_object::upt_object() : children() {

}

upt_object::~upt_object() {
    for (auto child : children) {
        delete child;
    }
}

upt_object* upt_object::add_child(upt_object* child) {
    children.emplace_back(child);
    return child;
}


