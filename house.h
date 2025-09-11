#ifndef HOUSE_H
#define HOUSE_H

#include "appliance.h"

class house : public appliance
{
private:
    appliance** House;
    int numAppliances;
    int totalAppliances;
public:
    house();

    house(int numAppliances);

    bool addAppliance(appliance* appliance);

    double getTotalPowerConsumption();
};

#endif