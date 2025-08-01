#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern int min_element(int[], int);

int main() {
  int array[5] = {2,3,1,4,5};
  std::cout << "The number is: " << min_element(array, 5) << std::endl;
  return 0;
}