#include "bus.h"
#include "vehicle.h"

bus::bus(int ID) : vehicle(ID) {
}

int bus::getParkingDuration() {
    return getTime();
}