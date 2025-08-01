bool is_fanarray(int array[], int n) {
    if (n < 1)
    {
        return false;
    } else {
       if (n % 2 == 0)
       {
         for (int i = 0; i < (n/2)-2; i++)
        {
            if (array[i] > array[i+1])
            {
                return false;
            }
            
        }
        for (int i = (n/2); i < n-1; i++)
        {
            if (array[i] < array[i+1])
            {
                return false;
            }
            
        }
        for (int i = 0; i < (n/2)-1; i++)
        {
            if (array[i] != array[n-i-1])
            {
                return false;
            }
            
        }
        
        return true;
       } else {
            for (int i = 0; i < ((n-1)/2)-1; i++)
        {
            if (array[i] > array[i+1])
            {
                return false;
            }
            
        }
        for (int i = ((n-1)/2); i < n-1; i++)
        {
            if (array[i] < array[i+1])
            {
                return false;
            }
            
        }
        for (int i = 0; i < ((n-1)/2)-1; i++)
        {
            if (array[i] != array[n-i-1])
            {
                return false;
            }
            
        }
        
        return true;
    } 
    }
}