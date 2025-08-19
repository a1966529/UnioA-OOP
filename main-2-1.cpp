#include <iostream>

extern void hexDigits(int *numbers,int length);

int main() {
    int array[7] = {1,2,3,4,5,6,7};
    int *numbers = array;
    hexDigits(numbers, 7);
    return 0;
}