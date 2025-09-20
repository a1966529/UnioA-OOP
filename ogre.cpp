#include "ogre.h"

ogre::ogre(int quantity) : enemy(quantity, 2, 30, "physical") {
    this->quantity = quantity;
}

// int ogre::get_quantity() {
//     return quantity;
// }
