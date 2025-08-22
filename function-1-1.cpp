#include "Person.h"
#include <iostream>

Person* createPersonArray(int n) {
        Person array[n];
        Person* ptr = array;
    for (int i = 0; i < n; i++)
    {
        array[i].name = "John Doe";
        array[i].age = 0;
    }
    
     for (int i = 0; i < 5; i++)
    {
        std::cout << (array[i].name) << " " << array[i].age << std::endl;
    }
    return ptr;
}