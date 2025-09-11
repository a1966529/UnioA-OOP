#include "vehicle.h"

vehicle::vehicle(int ID) {
    timeOfEntry = time(NULL);
    this->ID = ID;
}

int vehicle::getID() {
    return ID;
}

int vehicle::getTime() {
    int seconds = static_cast<int>(timeOfEntry);
    return seconds;
}