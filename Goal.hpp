#ifndef GOAL_HPP
#define GOAL_HPP

#include "Interactable.hpp"
#include "Helper.hpp"

class Goal:public Interactable {
    private:

    public:
    Goal(int width,int height){
    this->width=width;
    this->height=height;
    }

    bool interact(Scientist* player) {
        int distance=Helper::manhattanDistance(player->getCoordinates(),{4,4});
        if(distance=0 & player->getExperimentCount()>=1){
            return true;
        }else{
            return false;
        }
    
    }

    InteractableType getType() { return GOAL;}
};


#endif