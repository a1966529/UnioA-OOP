#ifndef FRIDGE_H
#define FRIDGE_H

#include"appliance.h"

class fridge : public appliance
{
private:
    double volume;
public:
    
    fridge();

    fridge(int powerRating, double volume);

    void setVolume(double volume);

    double getVolume();

    double getPowerConsumption() override;
};

#endif