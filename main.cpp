#include <iostream>

extern int transform_base2(int);

int main() {
    int number = 75;
    std::cout << "The number is: " << transform_base2(number) << std::endl;
    return 0;
}