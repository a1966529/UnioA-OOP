#include <iostream>

extern void print_summed(int array1[3][3], int array2[3][3]);

int main() {
  int array1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int array2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  print_summed(array1, array2);

  return 0;
}