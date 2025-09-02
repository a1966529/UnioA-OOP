#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class player
{
private:
    std::string name;
    int health;
    int damage;
    int dealDam;
public:
    player();

    player(std::string name, int health, int damage);

    void attack(player* opponent, int damage);

    void takeDamage(int damage);

    int getHealth();

    void setHealth(int health);
    
    std::string getName();

    void setName(std::string name);

    int getDamage();

};

#endif