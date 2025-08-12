#include <iostream>
#include "arrayMax.h"

    extern double arrayMax(double*, int);

int main() {
    double array[] = {1,2,6,4,5};
    double* ptr;

    ptr = array;
    std::cout <<  arrayMax(ptr, 5) << std::endl;
    return 0;
}
