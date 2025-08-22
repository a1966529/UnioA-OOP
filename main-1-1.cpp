#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main()
{
    int size = 5;
    Person* ptr = createPersonArray(size);    
        for (int i = 0; i < 5; i++)
    {
        std::cout << "Person " << i + 1 << ": " << (ptr + i)->name << ", " << (ptr + i)->age << std::endl;
    }
    return 0;
}
