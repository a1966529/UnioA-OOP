#include <iostream>
#include <iomanip> 

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern int num_count(int[], int, int);

int main() {
  int array[5] = {1,4,3,5,4};
  std::cout << "The number is: " << num_count(array, 5, 4) << std::endl;
  return 0;
}