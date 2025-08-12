#include <iostream>
#include "headerFile-2.h"
    extern void printArray(double*, int);

int main() {
    double array[] = {1,2,3,4,5};
    double* ptr;

    ptr = array;
    printArray(ptr, 5);
    return 0;
}
