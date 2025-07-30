#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern int count(int[], int);

int main() {
  int array[5] = {4, 5, 6, 7, 8};
  std::cout << "The mumber is: " << count(array, 5) << std::endl;
  return 0;
}