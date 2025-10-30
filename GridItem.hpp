#ifndef GRIDITEM_H
#define GRIDITEM_H

#include <iostream> 
#include <cmath>
#include <algorithm>


class GridItem{
    protected:
    int x;
    int y;
    int width;
    int height;
    int ItemCount=0;

    public:
        GridItem(){
            x=0;
            y=0;
            width=0;
            height=0;
            ItemCount=ItemCount+1;
        }
        GridItem(int x, int y,int width,int height):GridItem(){
            this->x=x;
            this->y=y;
            this->width=width;
            this->height=height;
            this->ItemCount=ItemCount+1;
        }

        void setCoordinates(int x,int y){
            this->x=x;
            this->y=y;
        }

        std::pair<int,int> getCoordinates(){
            std::pair <int,int> Coordinates;
            Coordinates.first=this->x;
            Coordinates.second=this->y;

            return Coordinates;
        }

        int getGridWidth(){return width;}
        int getGridHeight(){return height;}
        int getActiveGridItemCount(){return ItemCount;}
        virtual ~GridItem(){ItemCount=ItemCount-1;}
};


#endif