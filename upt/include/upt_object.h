//
// Created by ben on 14/04/21.
//

#ifndef SHOWCASE_UPT_OBJECT_H
#define SHOWCASE_UPT_OBJECT_H

#include <iostream>
#include <vector>
#include <functional>
#include <memory>

using namespace std;

class upt_object {
public:
    upt_object();
    ~upt_object();
    upt_object* add_child(upt_object*);
private:
    vector<upt_object*> children;
};


#endif //SHOWCASE_UPT_OBJECT_H
