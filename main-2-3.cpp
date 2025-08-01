#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern int two_five_nine(int[], int);

int main() {
  int array[5] = {2,3,1,4,5};
  two_five_nine(array, 5);
  return 0;
}