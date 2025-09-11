#include "fridge.h"
#include "appliance.h"

fridge::fridge() {
    volume = 0;
}

fridge::fridge(int powerRating, double volume) : appliance(powerRating) 
{
    this->volume = volume;
}

void fridge::setVolume(double volume) {
    this->volume = volume;
}

double fridge::getVolume() {
    return volume;
}

double fridge::getPowerConsumption() {
    return (getPowerRating()*24*(getVolume()/100));
}