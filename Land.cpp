// Land.cpp (Skeleton)
#include <iostream>

#include "Land.h"

int Land::totalLands = 0;

Land::Land(const std::string& name, int cost, LandType t) : Card(name, cost) {
    this->landType = t;
    totalLands++;
}

Land::Land(const Land& other) : Card(other.name, other.cost) {
    this->landType = other.landType;
    totalLands++;
}

Land::~Land() {
    totalLands--;
}

void Land::printInfo() const {

    std::cout << "Land - " << name << " (Cost " << cost << "): ";
    switch (landType) {
        case LandType::FOREST:
            std::cout << "Forest";
        break;
        case LandType::MOUNTAIN:
            std::cout << "Moutain";
        break;
        case LandType::SWAMP:
            std::cout << "Swamp";
        break;
        default:
        break;
    }
    std::cout << " land." << std::endl;
}

Land::LandType Land::getLandType() const {
    return landType;
}

int Land::getTotalLands() {
    return totalLands;
}

// clone() method creates a deep copy of the Landobject using the copy
// constructor
Card* Land::clone() const {
    return new Land(*this);
}
// getType() method returns the Type for a Card object
Card::Type Land::getType() const { 
    return Type::LAND; 
}