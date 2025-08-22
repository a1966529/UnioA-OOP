#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonlist(PersonList PL) {

    int n = PL.numPeople;
    PersonList perlist;
    perlist.numPeople = n;
    Person array[n];

    Person* ptr = array;
    ptr = PL.people;
    perlist.people = ptr;
    return perlist;
}
