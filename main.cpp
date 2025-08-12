#include <iostream>
#include "headerFile.h"
    extern void changeValue(double*);

int main() {
    double var = 30;
    double* ptr;

    ptr = &var;
    changeValue(ptr);
    std::cout << *ptr <<std::endl;
    return 0;
}
