#include "Entity.h"
#include <string>
#include <iostream>

int main() { 
    Entity zombie = Entity(10, 10);
    Entity skeleton = Entity(5, 15);

    std::cout << "Skeleton's health is "<< skeleton.getHealth() << std::endl;
    std::cout << "Zombie's ap is " << zombie.getAP() << std::endl;

    zombie.dealOther(skeleton);

    std::cout << "Skeleton's health is now "<< skeleton.getHealth() << std::endl;
    
    return 0;
}