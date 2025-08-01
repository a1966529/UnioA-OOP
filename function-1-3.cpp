int num_count(int array[], int n, int number) {
    int value = 0;
    if (n < 1) {
        return value;
    } else {
        for (int i = 0; i < n; i++)
        {
            if (array[i] == number)
            {
                value++;
            }
            
        }
        return value;
    }
}