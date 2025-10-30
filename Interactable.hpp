#ifndef INTERACTABLE_HPP
#define INTERACTABLE_HPP

#include "GridItem.hpp"
#include "Scientist.hpp"

enum InteractableType{GOAL,EXPERIMENT};


class Interactable:public GridItem {
    protected:
    int InteractableCount=0;
    public:
    Interactable():GridItem(){InteractableCount=InteractableCount+1;}
    Interactable(int x,int y,int width,int height):GridItem(x,y,width,height){InteractableCount=InteractableCount+1;}
    virtual bool interact(Scientist* player){return true; }
    virtual InteractableType getType(){}
    int getActiveInteractableCount(){return InteractableCount;}
    ~Interactable() { InteractableCount = InteractableCount - 1; }
};


#endif