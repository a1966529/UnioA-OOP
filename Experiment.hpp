#ifndef Experiment_hpp
#define Experiment_hpp

#include "Interactable.hpp"
#include "Helper.hpp"
class Experiment :public Interactable{
    private:
    
    public:
    Experiment():Interactable(x,y,width,height){}
    bool interact(Scientist* player) { 
        int distance=Helper::manhattanDistance(player->getCoordinates(),Experiment::getCoordinates());
        if(distance=0 & player->getExperimentCount()>=3){
            return true;
        }else{
            return false;
        }
     }

    InteractableType getType() { return EXPERIMENT;}
};


#endif