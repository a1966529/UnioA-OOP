#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonlist(PersonList PL) {

    int n = PL.numPeople;
    PersonList perlist;
    perlist.numPeople = n;
    Person *ptr = new Person[n];


    ptr = PL.people;
    perlist.people = ptr;
    return perlist;
}
