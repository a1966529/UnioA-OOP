double arrayMax(double* ptr, int size) {
        double max = *ptr;
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i) > max)
        {
            max = *(ptr + i);
        }
        
    }
    return max;
}