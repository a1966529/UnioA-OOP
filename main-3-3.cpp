#include <iostream>
#include <iomanip>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern double weighted_average(int[], int);

int main() {
  int array[6] = {1,2,1,4,1,3};
  weighted_average(array, 6);
std::cout << "The number is: " << std::fixed << std::setprecision(1) << weighted_average(array, 6) << std::endl;
  return 0;
}