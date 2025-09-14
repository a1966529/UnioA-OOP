#include "mage_tower.h"

    mage_tower::mage_tower(int location) {
        add_money(-150);
        this->location = location;
    }

    void mage_tower::upgrade() {
        add_money(-150*get_level());
        set_damage(get_damage()*1.5);
    }

    void mage_tower::attack(int enemy) {
        //need enemy to deal damage
    }

    int mage_tower:: get_location() {
        return location;
    }