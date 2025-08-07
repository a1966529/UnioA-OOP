#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

void print_binary_str(std::string decimal_number) {

    std::vector<int> binary;
    int decimal = std::stoi(decimal_number);
    while (decimal > 0)
    {
        binary.push_back(decimal % 2);
        decimal /= 2;
    }
    std::reverse(binary.begin(), binary.end());
    for (int digits : binary)
    {
        std::cout << digits;
    }
      std::cout << std::endl;
}