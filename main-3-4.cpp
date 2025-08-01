#include <iostream>

// the `extern` keywork tells the compiler that the count funtion exists,
// but will implement somewhere else
extern void print_pass_fail(char grade);

int main() {
  char grade = 'E';
  print_pass_fail(grade);
  return 0;
}