#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern bool is_fanarray(int[], int);

int main() {
  int array[5] = {1,2,3,2,1};
  is_fanarray(array, 5);
std::cout << "The number is: " << is_fanarray(array, 5) << std::endl;
  return 0;
}