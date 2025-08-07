#include <iostream>

extern void print_binary_str(std::string decimal_number);

int main() {
  std::string str = "10";
  print_binary_str(str);

  return 0;
}