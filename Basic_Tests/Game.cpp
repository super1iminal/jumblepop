#include "Entity.h"
#include "Enemy.h"
#include <string>
#include <iostream>

static void runGame() {
    Enemy enemy1 = Enemy(10, 10, "zombie");
    Enemy enemy2 = Enemy(5, 15, "skelly");

    std::cout << enemy1.getName() << "'s health is "<< enemy1.getHealth() << std::endl;
    std::cout << enemy2.getName() << "'s ap is " << enemy2.getAP() << std::endl;

    enemy2.dealOther(enemy1);

    std::cout << enemy2.getName() << " attacks " << enemy1.getName() << std::endl;
    std::cout << enemy1.getName() << "'s health is now "<< enemy1.getHealth() << std::endl;
    
}