#include "house.h"
#include "appliance.h"

    house::house() {
        numAppliances = 0;
    }

    house::house(int numAppliances) {
        this->numAppliances = numAppliances;
        this->House = new appliance*[numAppliances];
        this->totalAppliances = 0;
    }

    bool house::addAppliance(appliance* appliance) {
        if (totalAppliances < numAppliances)
        {
            House[totalAppliances] = appliance;
            totalAppliances++;
            return true;
        } else {
            return false;
        }
        
    }

    double house::getTotalPowerConsumption() {
        double totalPowerCon = 0;
        for (int i = 0; i < numAppliances; i++)
        {
            totalPowerCon = totalPowerCon + House[i]->getPowerConsumption();
        }
        return totalPowerCon;
    }