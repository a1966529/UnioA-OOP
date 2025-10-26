#include "Player.h"

Player::Player(){}

Player::Player(std::string playerName) {
    this->name = playerName;
    health = 100;
    isBlocking = false;
}

void Player::takeDamage(int damage) {
    if (isBlocking) {
        damage /= 2;        // reduce damage by 50%
        isBlocking = false; // block only works once
    }

    health -= damage;
    if (health < 0)
        health = 0;
    
}

void Player::setBlocking(bool blocking) {
    isBlocking = blocking;
}

bool Player::getIsBlocking() {
    return isBlocking;
}

int Player::getHealth() {
    return health;
}

std::string Player::getName() {
    return name;
}

bool Player::isAlive() {
    if (health>0) {
        return true;
    } else {
        return false;
    }
}