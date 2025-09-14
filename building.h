#ifndef BUILDING_H
#define BUILDING_H

#include "player.h"
#include <string>

class building : public player
{
private:
    float damage; //float for multipliers
    int range;
    float fire_rate;
    int level;
    // std::string priority;  for if we get to it
public:
    building();

    building(float damage, int range, float fire_rate);

    float get_damage();

    int get_range();

    float get_fire_rate();

    int get_level();

    void set_damage(int damage);

    // void set_priority(std::string priority);

    virtual void upgrade();

    virtual void attack(int enemy);
};

#endif