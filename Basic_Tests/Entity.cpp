#include "Entity.h"
#include <iostream>

Entity::Entity() {
    health = 1;
    attackPower = 1;
}

Entity::Entity(int h, int ap) {
    health = h;
    attackPower = ap;
}

void Entity::dealOther(Entity & enemy) {
    enemy.takeDamage(attackPower);
}

void Entity::takeDamage(int damage) {
    health -= damage;
}

int Entity::getHealth() {
    return health;
}

int Entity::getAP() {
    return attackPower;
}


