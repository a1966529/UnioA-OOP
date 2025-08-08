#include <iostream>

extern int sum_if_palindrome(int array[], int length);

int main() {
  int array[]= {5,2,2,1};
  std::cout << "The mumber is: " << sum_if_palindrome(array, 4) << std::endl;
  return 0;
}