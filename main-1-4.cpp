#include <iostream>
#include <iomanip> 

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern int sum_two_arrays(int[], int[], int);

int main() {
  int array[5] = {1,4,3,5,4};
  int secarray[5] = {1,2,3,4,5};
  std::cout << "The number is: " << sum_two_arrays(array, secarray, 5) << std::endl;
  return 0;
}