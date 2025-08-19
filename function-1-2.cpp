#include <iostream>

void printNumbers(int array[]) {
    int size = 10;
    for (int i = 0; i < size; i++)
    {
        std::cout << i << " " << *(array + i) << std::endl;
    }
    std::cout;

}