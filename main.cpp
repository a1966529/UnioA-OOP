#include <iostream>
#include "player.h"
#include "wizard.h"
#include "warrior.h"

int main () {
    wizard wizard("Player 1", 100, 20, 50);
    warrior warrior("Player 2", 100, 30, "Axe");

    std::cout << wizard.getName() << " vs " << warrior.getName() << " begin!" << std::endl;
    
    int count = 0;
    int action;

    // if (count%2 == 0)
    // {
        std::cout << "Wizard: " << std::endl;
        std::cin >> action;
            switch (action)
            {
            case 1:
                wizard.attack(&warrior, wizard.getDamage());
                break;
            
            default:
                std::cout << "invalid action" << std::endl;
                break;
            }
        
    // }
            std::cout << "remaining health: " << warrior.getHealth() << std::endl;
}