#include <iostream>
#include <vector>
#include <algorithm>

int median_array(int array[], int n) {

    if (n < 1)
    {
        return 0;
    } else if (n % 2 == 0)
    {
       return 0;
    } else {
         std::sort(array, array + n);
        return ((n-1)/2)+1;
    }
    
}