#include "building_space.h"
#include "building.h"

building_space::building_space(int total_space) {
    this->total_space = total_space;
    space = new building*[total_space];
    occupied = 0;
}

building** building_space::get_space() {

}

bool building_space::popularise(building* type) {
    if (total_space < occupied)
        {
            space[occupied] = type;
            occupied++;
            return true;
        } else {
            return false;
        }
        
}
