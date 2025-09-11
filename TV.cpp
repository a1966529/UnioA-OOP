#include "TV.h"
#include "appliance.h"

    TV::TV() {
    }

    TV::TV(int powerRating, double screenSize) : appliance(powerRating) {
        this->screenSize = screenSize;
    }

    double TV::getScreenSize() {
        return screenSize;
    }

    void TV::setScreenSize(double screenSize) {
        this->screenSize = screenSize;
    }

    double TV::getPowerConsumption() {
        return (getPowerRating()*24*(getScreenSize()/100));
    }