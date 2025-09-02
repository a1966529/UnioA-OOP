#include "player.h" 
#include "warrior.h"
#include <string>
#include <iostream>

    void warrior::swingWeapon(player* opponent) {
    attack(opponent, getDamage());
    }

    warrior::warrior(std::string name, int health, int damage, std::string weapon) {
    player(name, health, damage), weaponName(weapon);
    }

    void warrior::weaponName(std::string weapon) {
        this->weapon = weapon;
    }