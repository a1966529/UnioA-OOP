double sum_even(double array[], int n) {
    double sum_even = 0;
    if (n < 1)
    {
        return 0;
    } else {
        if (n % 2 == 0){
            for (int i = 0; i < n-1; i+=2)
        {
            sum_even = sum_even + array[i];
        }
        return sum_even;
        } else {
            for (int i = 0; i < n-2; i+=2)
        {
            sum_even = sum_even + array[i];
        }
        sum_even = sum_even + array[n-1];
        return sum_even;
        }
    }
    
}