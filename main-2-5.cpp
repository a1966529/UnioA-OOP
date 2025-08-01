#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern bool is_descending(int[], int);

int main() {
  int array[5] = {5,4,3,8,1};
  is_descending(array, 5);
std::cout << "The number is: " << is_descending(array, 5) << std::endl;
  return 0;
}