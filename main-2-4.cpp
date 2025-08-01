#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern bool is_ascending(int[], int);

int main() {
  int array[5] = {1,2,3,4,5};
  is_ascending(array, 5);
std::cout << "The number is: " << is_ascending(array, 5) << std::endl;
  return 0;
}