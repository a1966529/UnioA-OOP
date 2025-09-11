#include <iostream>
#include "fridge.h"
#include "TV.h"
#include "house.h"
#include "appliance.h"

int main(){

    fridge samsung(20, 100);
    // std::cout << samsung.getPowerConsumption() << " " << std::endl;
    // samsung.setVolume(30);
    // std::cout << samsung.getPowerConsumption() << " " << std::endl;
    
    TV apple(30, 300);
    // std::cout << apple.getPowerConsumption() << " " << std::endl;
    // apple.setScreenSize(30);
    // std::cout << apple.getPowerConsumption() << " " << std::endl;

    TV lenovo(10, 150);

    house MyHouse(3);
    std::cout << MyHouse.addAppliance(&samsung) << " " << MyHouse.addAppliance(&apple)
    << " " << MyHouse.addAppliance(&lenovo) << " " << MyHouse.addAppliance(&apple)
    << "The total power consumption of your house is: " << MyHouse.getTotalPowerConsumption()
    << std::endl;   


}