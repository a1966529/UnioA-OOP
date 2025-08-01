#include <iostream>
#include <iomanip> 

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern double array_mean(int[], int);

int main() {
  int array[3] = {1,2,3};
  std::cout << "The number is: " << std::fixed << std::setprecision(1) << array_mean(array, 3) << std::endl;
  return 0;
}