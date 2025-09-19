#include "player.h"

    // player::player() {}

    player::player() {
        // this->difficulty = difficulty;
        // this->multiplier = 2 - 0.5*(this->difficulty-1);
        // this->health = (100 - 20*(this->difficulty-1));
        this->health = (100);
        this->money = (500);
    }

     int player::get_health() {
        return health;
    }

    int player::get_money() {
        return money;
    }

    void player::add_money(int add_money) {
        this->money = this->money + add_money;
    }

    void player::add_health(int add_health) {
        this->health = this->health + add_health;
    }

    //player::~player() {}

    // int player::get_waveNumber() {
    //     return waveNumber;
    // }

    // int player::get_difficulty() {
    //     return difficulty;
    // }

    // int player::get_multiplier() {
    //     return multiplier;
    // }

    // void player::set_health(int health) {
    //     this->health = health;
    // }

    // void player::next_wave() {
    //     waveNumber++;
    // }