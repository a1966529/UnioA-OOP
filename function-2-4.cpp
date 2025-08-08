int array_max(int integers[], int length);
int array_min(int integers[], int length);

int sum_min_max(int integers[], int length) {
    if (length < 1)
    {
        return -1;
    } else
    {
        int max = array_max(integers, length);
        int min = array_min(integers, length);
        return max + min;
    }
    
    
}

int array_max(int integers[], int length) {
    int max = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (integers[i] > max)
        {
            max = integers[i];
        }
        
    }
    return max;
    
}
int array_min(int integers[], int length) {
    int min = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (integers[i] < min)
        {
            min = integers[i];
        }
        
    }
    return min;
}