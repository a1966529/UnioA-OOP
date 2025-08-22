#include "Person.h"
#include <iostream>

Person* createPersonArray(int n) {

    // Person array[n];
    // Person* ptr = array;
    Person *ptr = new Person[n];
    for (int i = 0; i < n; i++)
    {
        ptr[i].name = "John Doe";
        ptr[i].age = 0;
    }
    return ptr;
}