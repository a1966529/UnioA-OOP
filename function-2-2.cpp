#include <cmath>

int binary_to_int(int binary_digits[], int number_of_digits) {
    int total = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        int two = std::pow(2, number_of_digits - i - 1);
        total = total + binary_digits[i]*two;
    }
    return total;
}