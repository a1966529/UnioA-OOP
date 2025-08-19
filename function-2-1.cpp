#include <iostream>

void hexDigits(int *numbers,int length) {
    for (int i = 0; i < length; i++)
    {
        int x;
        
        std::cout << i << " " << *(numbers + i) << " " << x << std::endl;
    }
    
    
}