#ifndef HELPER_H
#define HELPER_H

#include <algorithm>
#include <cmath>
#include <iostream>

class Helper{
    private:
    
    public:
        static int manhattanDistance(std::pair<int,int> item1,std::pair<int,int> item2){
            int distance = abs(item2.first-item1.first)+abs(item2.second-item1.second);
            return distance;
        }
};

#endif