bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length) {
    int sum;
    if (length < 1)
    {
        return -1;
    } else {
        if (is_palindrome(integers, length) == false) {
            return -2;
        } else if (is_palindrome(integers, length) == true) {
         sum = sum_array_elements(integers, length);
         return sum;
        }
}
}

bool is_palindrome(int array[], int n) {
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

int sum_array_elements(int integers[], int length) {
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total = total + integers[i];
    }
    return total;
}