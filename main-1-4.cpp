#include <iostream>

extern void print_scaled(int array[3][3], int scaled);

int main() {
  int array[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int scaled = 3;
  print_scaled(array, scaled);

  return 0;
}