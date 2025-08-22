#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    PersonList perlist;
    perlist.numPeople = n;
    Person array[n];

    Person* ptr = array;
    for (int i = 0; i < n; i++)
    {
        array[i].name = "Jane Doe";
        array[i].age = 1;
    }
    perlist.people = ptr;
    return perlist;
}
