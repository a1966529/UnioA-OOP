#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"

class warrior : public player 
{
private:
    std::string weapon;
public:
    void swingWeapon(player* opponent);

    warrior(std::string name, int health, int damage, std::string weapon);

    void weaponName(std::string weapon);
};
#endif