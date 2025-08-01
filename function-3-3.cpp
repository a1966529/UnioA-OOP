double weighted_average(int array[], int n) {
    double weighted_average = 0;
    if (n < 1)
    {
        return 0;
    } else {
        for (int i = 0; i < n; i++)
        {
            double count = 0;
            for (int j = 0; j < n; j++)
            {
                if (array[j] == array[i])
                {
                    count++;
                }
                
            }
            weighted_average = weighted_average + (array[i] * (count/n));
        }
        return weighted_average;
    }
}