bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);

int sum_if_palindrome(int integers[], int length) {
    
    int palin;
    int sum;
    if (length < 1)
    {
        return -1;
    } else {
        palin = is_palindrome(integers, length);
        if (palin == 0) {
            return -2;
        } else {
         sum = sum_array_elements(integers, length);
         return sum;
        }
}
}

bool is_palindrome(int integers[], int length) {
    if (length % 2 == 0)
       {
         for (int i = 0; i < (length/2)-2; i++)
        {
            if (integers[i] > integers[i+1])
            {
                return false;
            }
            
        }
        for (int i = (length/2); i < length-1; i++)
        {
            if (integers[i] < integers[i+1])
            {
                return false;
            }
            
        }
        for (int i = 0; i < (length/2)-1; i++)
        {
            if (integers[i] != integers[length-i-1])
            {
                return false;
            }
            
        }
        
        return true;
       } else {
            for (int i = 0; i < ((length-1)/2)-1; i++)
        {
            if (integers[i] > integers[i+1])
            {
                return false;
            }
            
        }
        for (int i = ((length-1)/2); i < length-1; i++)
        {
            if (integers[i] < integers[i+1])
            {
                return false;
            }
            
        }
        for (int i = 0; i < ((length-1)/2)-1; i++)
        {
            if (integers[i] != integers[length-i-1])
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