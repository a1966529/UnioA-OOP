#include <iostream>
#include <iomanip> 

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern int count_evens(int);

int main() {
  std::cout << "The number is: " << count_evens(8) << std::endl;
  return 0;
}