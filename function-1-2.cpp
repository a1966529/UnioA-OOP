double array_mean(int array[], int n) {
    double value = 0.0;
    double total;
    if (n < 1)
    {
        return value;
    } else {
        for (int i = 0; i < n; i++)
        {
            total = total + array[i];
        }
        value = total/n;
        return value;
    }
    
}