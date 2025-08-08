#include <iostream>

extern int sum_min_max(int array[], int length);

int main() {
  int array[] = {1,2,3,4,5,6};
  std::cout << "The mumber is: " << sum_min_max(array, 6) << std::endl;
  return 0;
}