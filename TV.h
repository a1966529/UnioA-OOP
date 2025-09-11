#ifndef TY_H
#define TY_H

#include "appliance.h"

class TV : public appliance
{
private:
    double screenSize;
public:
    TV();

    TV(int powerRating, double screenSize);

    double getScreenSize();

    void setScreenSize(double screenSize);

    double getPowerConsumption() override;

};

#endif 