#ifndef Scientist_hpp
#define Scientist_hpp

#include <algorithm>
#include <cmath>
#include <iostream>
#include "GridItem.hpp"

class Scientist : public GridItem{
    private:
    int experimentCount;
    public:
    Scientist(int gridWidth,int gridHeight){
        this->x=0;
        this->y=0;
        experimentCount=0;
    }

    int getExperimentCount(){return experimentCount;}

    void runExperiment(){experimentCount=experimentCount+1;}
    bool move(int xOffset,int yOffset){
      if (xOffset > 2 || yOffset > 2 ) {
        return false;
      } else {
        this->x = x + xOffset;
        this->y = y + yOffset;
        return true;
      }
    }


};

#endif