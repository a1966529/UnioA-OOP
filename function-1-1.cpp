#include <iostream>

int* realnumbers() {
int* array;
int size = 10;
array = new int[size]; 
    for (int i = 0; i < 10; i++)
    {
        int x;    
        std::cin >> x;
        array[i] = x;
    }
    
return array;
}