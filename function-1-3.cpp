#include <iostream>
#include "Person.h"

PersonList deepCopyPersonlist(PersonList PL) {

    int n = PL.numPeople;
    PersonList perlist;
    perlist.numPeople = n;
    Person array[n];

    Person* ptr = array;
    for (int i = 0; i < n; i++)
    {
        array[i].name = PL.people[i].name;
        array[i].age = PL.people[i].age;
    }
    perlist.people = ptr;
    return perlist;
}
