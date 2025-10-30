#include <iostream>
#include "GridItem.hpp"
#include "Helper.hpp"
#include "Experiment.hpp"
#include "Goal.hpp"
#include "Scientist.hpp"
#include "Interactable.hpp"

int main(){
    Scientist* player;
    Goal* goal;

    player= new Scientist (4,4);
    goal= new Goal(4,4);

    player->move(1,1);
    player->move(2, 1);
    player->move(1, 1);
    player->move(2, 1);

   

    return 0;
}