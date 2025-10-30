// Creature.cpp (Skeleton)
#include <iostream>

#include "Creature.h"

int Creature::totalCreatures = 0;

Creature::Creature(const std::string& name, int cost, CreatureType t, int atk, int def)
    : Card(name, cost) {
        this->type = t;
        this->attack = atk,
        this->defense = def;
        totalCreatures++;
}

Creature::Creature(const Creature& other) : Card(other.name, other.cost) {
    this->type = other.type;
    this->attack = other.attack,
    this->defense = other.defense;
    totalCreatures++;

}

Creature::~Creature() {
    totalCreatures--;
}

void Creature::printInfo() const {
    std::cout << "Creature - " << name << " (Cost " << cost << "): Creature Type=";
    switch (type)
    {
    case CreatureType::WARRIOR:
        std::cout << "Warrior";
        break;
    case CreatureType::ARCHER:
        std::cout << "Archer";
        break;
    case CreatureType::MAGE:
        std::cout << "Mage";
        break;
    default:
        break;
    }
    std::cout << ", Attack=" << attack << ", Defense=" << defense << std::endl;
}

int Creature::getAttack() const {
    return attack;
}

int Creature::getDefense() const {
    return defense;
}

Creature::CreatureType Creature::getCreatureType() const {
    return type;
}

int Creature::getTotalCreatures() {
    return totalCreatures;
}
// clone() method creates a deep copy of the Creature object using the copy
// constructor
Card* Creature::clone() const { return new Creature(*this); }
// getType() method reuturns the Type for a Card object
Card::Type Creature::getType() const { return Type::CREATURE; }