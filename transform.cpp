#include <iostream>
#include <vector>

int main() {
    int decimal;
    std::cout << "Enter a decimal: ";
    std::cin >> decimal;

    std::vector<int> binary;
    while (decimal > 0)
    {
        binary.push_back(decimal % 2);
        decimal /= 2;
    }
    for (int digits : binary)
    {
        std::cout << digits;
    }
      std::cout << std::endl;
      return 0;
}