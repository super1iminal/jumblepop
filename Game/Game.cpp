#include "Entity.h"
#include "Enemy.h"
#include "Player.h"
#include <string>
#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::string;
using std::endl;

static void runGame() {
    //initializations:
    vector<Entity> enemyList;
    Enemy enemy1 = Enemy(10, 10, "zombie");
    Enemy enemy2 = Enemy(5, 15, "skelly");
    Player player = Player(12, 5, "");

    // adding enemies to enemy lsit
    enemyList.push_back(enemy1);
    enemyList.push_back(enemy2);

    string inputName;
    cin >> inputName;
    player.setName(inputName);

    cout << "Welcome, " << player.getName() << ", to jumblepop!" << endl;
    

    // enemy loop:
    int i = 0;
    while (!enemyList.empty()) {
        cout << enemyList[i].getName() << " is looking at you menacingly." << endl;
        cout << "Would you like to attack it? (y/n)" << endl;

        string answer;
        cin >> answer;

        if (answer == "y" || answer == "yes") {
            int damage = player.dealOther(enemyList[i]);
            cout << "You did " << damage << " damage to " << enemyList[i].getName() << endl;
            if (enemyList[i].isDead()) {
                cout << "You killed " << enemyList[i].getName() << endl;
                enemyList.erase(enemyList.begin() + i); // u dont have to get this part
            }
        } else {
            int damage = enemyList[i].dealOther(player);
            cout << "You were dealt " << damage << " damage from " << enemyList[i].getName() << endl;
            if (player.isDead()) {
                cout << "You died :(" << endl;
                return;
            }
        }

        i++;
        i %= enemyList.size();
    }
    cout << "You won! Good job " << player.getName() << endl;
    return;
    
}