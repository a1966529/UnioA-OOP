#include "building.h"
    
    building::building(){}

    building::building(float damage, int range, float fire_rate) {
        this->damage = (damage*get_multiplier());
        this->range = range;
        this->fire_rate = fire_rate;
        this->level = 1;
    }

    float building::get_damage() {
        return damage;
    }

    int building::get_range() {
        return range;
    }

    float building::get_fire_rate() {
        return fire_rate;
    }

    int building::get_level() {
        return level;
    }

    void building::set_damage(int damage) {
        this->damage = damage;
    }

    void building::upgrade() {}
    
    void building::attack(int enemy) {}
