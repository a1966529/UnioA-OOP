#include "GridItem.hpp"
#include "Helper.hpp"
#include <iostream>
int main(){
    GridItem* player;
    GridItem* enemy;


    player = new GridItem(0, 0, 4, 4);
    enemy = new GridItem(3, 3, 4, 4);
    

    std::pair<int,int> playerCoords = player->getCoordinates();
    std::pair<int, int> enemyCoords = enemy->getCoordinates();


    
    std::cout<<player->getActiveGridItemCount()<<std::endl;
    std::cout<<"distance: "<<Helper::manhattanDistance(playerCoords,enemyCoords)<<std::endl;
    std::cout<<"playerCords: ("<<playerCoords.first<<","<<playerCoords.second << ")" <<std::endl;
    std::cout<<"enemyCords: ("<<enemyCoords.first<<","<<enemyCoords.second << ")" <<std::endl;
    return 0;
}   