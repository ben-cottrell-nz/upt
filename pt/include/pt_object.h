//
// Created by ben on 14/04/21.
//

#ifndef SHOWCASE_PT_OBJECT_H
#define SHOWCASE_PT_OBJECT_H

#include <iostream>
#include <vector>
#include <functional>
#include <memory>

using namespace std;

class pt_object {
public:
    pt_object();
    pt_object(pt_object*);
    ~pt_object();
    pt_object* add_child(pt_object*);
private:
    vector<pt_object*> children;
};


#endif //SHOWCASE_PT_OBJECT_H
