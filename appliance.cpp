#include "appliance.h"

appliance::appliance() {
    this->powerRating = 0;
    this->isOn = false;
}

appliance::appliance(int powerRating) {
    this->powerRating = powerRating;
    this->isOn = false;
}

void appliance::turnOn() {
    this->isOn = true;
}

void appliance::turnOff() {
    this->isOn = false;
}

double appliance::getPowerConsumption() {
    return 0;
}

int appliance::getPowerRating() {
    return powerRating;
}
