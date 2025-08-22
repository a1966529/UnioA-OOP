#include <iostream>
#include "Person.h"

extern PersonList deepCopyPersonlist(PersonList PL);

int main()
{
    int size = 5;
    PersonList PL_1;
    PersonList PL = deepCopyPersonlist(PL_1); 
    Person* ptr = PL.people;
        std::cout << "NumberPeople: " << PL.numPeople << std::endl;
        for (int i = 0; i < size; i++)
    {
        std::cout << "Person " << i + 1 << ": " << (ptr + i)->name << ", " << (ptr + i)->age << std::endl;
    }
    return 0;
}
