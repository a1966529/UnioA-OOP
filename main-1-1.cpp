#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern int array_sum(int[], int);

int main() {
  int array[0] = {};
  std::cout << "The number is: " << array_sum(array, 0) << std::endl;
  return 0;
}