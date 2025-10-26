#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int health;
    bool isBlocking;

public:
    Player();
    Player(std::string playerName);

    void takeDamage(int damage);
    
    void setBlocking(bool blocking);
    bool getIsBlocking();
    int getHealth();
    std::string getName();
    bool isAlive();
};

#endif
