#ifndef BUS_H
#define BUS_H

#include "vehicle.h"

class bus : public vehicle
{
private:
    
public:
    bus(int ID);

  int getParkingDuration();
};

#endif