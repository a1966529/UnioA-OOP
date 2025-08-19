#include <iostream>

extern int* realnumbers();

extern void printNumbers(int* array);

int main() {
    int* array = realnumbers();
    printNumbers(array);
    return 0;
}