#include <iostream>

extern int binary_to_int(int binary_digits[], int  number_of_digits);

int main() {
  int array[] = {0,1,0,1,0,1,0};
  std::cout << "The mumber is: " << binary_to_int(array, 7) << std::endl;
  return 0;
}