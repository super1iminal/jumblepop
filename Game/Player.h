#include "Entity.h"
#include "Item.h"
#include <vector>

#ifndef PLAYER_H
#define PLAYER_H

typedef std::vector<Item> Items;

class Player : public Entity {
    public:
        // constructors 
        Player();
        Player(int h, int ap, std::string n);

        // getters
        Items getInventory();

        void addItem(Item i);

        void removeItem(Item i);

    private:
        Items inventory;
};

#endif