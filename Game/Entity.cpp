#include "Entity.h"

Entity::Entity() {
    health = 1;
    attackPower = 1;
    name = "placeholder";
}

Entity::Entity(int h, int ap, std::string n) {
    // hidden shit here
    health = h;
    attackPower = ap;
    name = n;
}

int Entity::dealOther(Entity & enemy) {
    int damage = attackPower;
    enemy.takeDamage(damage);
    return damage;
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

std::string Entity::getName() {
    return name;
}

void Entity::setHealth(int hp) {
    health = hp;
}

void Entity::setAP(int ap) {
    attackPower = ap;
}

void Entity::setName(std::string n) {
    name = n;
}

bool Entity::isDead() {
    if (health <= 0) {
        return true;
    } else {
        return false;
    }
}


