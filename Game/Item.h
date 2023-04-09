#include <string>
#include "Entity.h"

using std::string;

#ifndef ITEMS_H
#define ITEMS_H

class Item {
    private: 
        string name;
        // Entity owner; double dependency ?? i forget exactly what it's called but when changing owners we need to change here too
};

#endif