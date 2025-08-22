#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main()
{
    int size = 5;
    Person* ptr = createPersonArray(size);    

    return 0;
}
