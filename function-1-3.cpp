#include <iostream>
#include "Person.h"

PersonList deepCopyPersonlist(PersonList PL) {

    int n = PL.numPeople;
    PersonList perlist;
    perlist.numPeople = n;
    Person *ptr = new Person[n];

    for (int i = 0; i < n; i++)
    {
        ptr[i].name = PL.people[i].name;
        ptr[i].age = PL.people[i].age;
    }
    perlist.people = ptr;
    return perlist;
}
