#include "player.h" 
#include <string>
#include <iostream>

player::player() {

}

player::player(std::string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void player::attack(player* opponent, int damage) {
    this->dealDam = damage;
    // opponent->takeDamage(attack);
}

void player::takeDamage(int damage) {
    this->health = this->health - damage;
}

int player::getHealth() {
    return health;
}

void player::setHealth(int health) {
    this->health = health;
}
    
std::string player::getName() {
    return this->name;
}

void player::setName(std::string name) {
    this->name = name;
}

int player::getDamage() {
    return this->damage;
}