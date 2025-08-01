#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern bool median_array(int[], int);

int main() {
  int array[5] = {3,5,4,2,1};
  median_array(array, 5);
std::cout << "The number is: " << median_array(array, 5) << std::endl;
  return 0;
}