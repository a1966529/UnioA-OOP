#include <iostream>
#include "motobike.h"
#include "bus.h"
#include "car.h"
#include "vehicle.h"

int main() {
    // vehicle* array = new vehicle[5]
    int size;
    std::cout << "how many vehicles do you want: " << std::endl;
    std::cin >> size;
    vehicle** carpark = new vehicle*[size];

    for (int i = 0; i < size; i++)
    {
        carpark[i] = new car(i);
    }
    
    std::cout << "Vehicle ID's in order: " << carpark[3]->getID() << std::endl;

    for (int i = 0; i < size; ++i) {
    delete carpark[i];
    }
    delete[] carpark;
}