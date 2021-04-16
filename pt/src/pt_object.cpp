//
// Created by ben on 14/04/21.
//

#include "pt_object.h"

pt_object::pt_object() : children() {

}

pt_object::pt_object(pt_object* parent) : pt_object() {
    parent->add_child(this);
}

pt_object::~pt_object() {
    for (auto child : children) {
        delete child;
    }
}

pt_object* pt_object::add_child(pt_object* child) {
    children.emplace_back(child);
    return child;
}


