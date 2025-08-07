#include <iostream>

extern int name(int[], int);

int main() {
  int array[5] = {4, 5, 6, 7, 8};
  std::cout << "The mumber is: " << name(array, 5) << std::endl;
  return 0;
}