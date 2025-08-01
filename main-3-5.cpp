#include <iostream>
#include <iomanip>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern double sum_even(double[], int);

int main() {
  double array[5] = {1,5,4,1,3};
  sum_even(array, 6);
std::cout << "The number is: " << std::fixed << std::setprecision(1) << sum_even(array, 5) << std::endl;
  return 0;
}