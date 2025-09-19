#include "player.h"
#include "ballista.h"
#include "farm.h"
#include "mage_tower.h"
#include "building_space.h"
#include <iostream>

int main() {
    player P1;
    // std::cout << P1.get_money() << " " << P1.get_health() << std::endl;

    // P1.add_health(-10);
    // P1.add_money(150);

    // std::cout << P1.get_money() << " " << P1.get_health() << std::endl;

    ballista B1(1);
    mage_tower MT1(2);
    farm F1(3);
    ballista B2(4);

    building_space MAP1(4);
    MAP1.popularise(&B1);
    MAP1.popularise(&MT1);
    MAP1.popularise(&F1);
    MAP1.popularise(&B2);
}