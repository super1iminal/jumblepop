#include <string>

#ifndef ENTITY_H
#define ENTITY_H

class Entity {
    public:

        // constructors 
        Entity();

        Entity(int h, int ap, std::string n);

        // normal functions

        int dealOther(Entity & enemy);

        void takeDamage(int damage);


        // getters

        int getHealth();

        int getAP();

        std::string getName();

        // setters

        void setHealth(int hp);

        void setAP(int ap);

        void setName(std::string n);

        bool isDead();

        

    protected:
        int health;
        int attackPower;
        std::string name;

};

#endif


