#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

class car : public vehicle
{
private:

public:
    car(int ID);

int getParkingDuration();

};


#endif