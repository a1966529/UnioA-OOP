#include <iostream>

int main() {

double var_1 = 10;
char var_2 = 'e';
double* ptr_1;
char* ptr_2;

ptr_1 = &var_1;
ptr_2 = &var_2;
std::cout << *ptr_1 << *ptr_2 << std::endl;
return 0;
}