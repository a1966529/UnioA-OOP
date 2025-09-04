#include "player.h" 
#include "wizard.h"
#include <string>
#include <iostream>

void wizard::castSpell(player* opponent) {
    attack(opponent, getDamage());
    }

wizard::wizard(std::string name, int health, int damage, int mana)
    : player(name, health, damage)
    {
    setMana(mana);
    }

void wizard::setMana(int mana){
    this->mana = mana; 
    }

int wizard::getMana() {
    return mana;
}