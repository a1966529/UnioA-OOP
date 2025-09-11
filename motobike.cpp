#include "motobike.h"
#include "vehicle.h"

motobike::motobike(int ID) : vehicle(ID) {
}

int motobike::getParkingDuration() {
    return getTime();
}