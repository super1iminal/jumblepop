#include "Entity.h"

#ifndef ENEMY_H
#define ENEMY_H

class Enemy : public Entity {
    public:

        // constructors 
        Enemy();

        Enemy(int h, int ap, std::string n);

};

#endif