#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonlist(PersonList PL);

int main()
{
    PersonList PL_1;
    PL_1.numPeople = 5;
    Person arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i].name = "Jane Doe";
        arr[i].age = 1;
    }
    PL_1.people = arr;
    int size = 5;
    
    PersonList PL = deepCopyPersonlist(PL_1); 
    Person* ptr = PL.people;
        std::cout << "NumberPeople: " << PL.numPeople << std::endl;
        for (int i = 0; i < size; i++)
    {
        std::cout << "Person " << i + 1 << ": " << (ptr + i)->name << ", " << (ptr + i)->age << std::endl;
    }
    return 0;
}
