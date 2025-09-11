#ifndef VEHICLE_H
#define VEHICLE_H

#include<ctime>

class vehicle
{
private:
    std::time_t timeOfEntry;
    int ID;
public:

vehicle(int ID);

int getID();

int getTime();

};


#endif