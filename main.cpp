#include <iostream>

extern int function(int);

int main() {
    int number = 75;
    std::cout << "Text" << function(number) << std::endl;
    return 0;
}