#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    PersonList perlist;
    perlist.numPeople = n;
    Person *ptr = new Person[n];
    for (int i = 0; i < n; i++)
    {
        ptr[i].name = "Jane Doe";
        ptr[i].age = 1;
    }
    perlist.people = ptr;
    return perlist;
}
