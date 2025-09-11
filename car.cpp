#include "car.h"
#include "vehicle.h"

car::car(int ID) : vehicle(ID) {
}

int car::getParkingDuration() {
    return getTime();
}