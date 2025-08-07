int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; i++)
    {
        if (array[i][i] != 1)
        {
            return 0;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < i-1; k++)
        {
            if (array[i][k] !=0)
            {
                return 0;
            }
            
        }
        for (int s = i+1; s < 10; s++)
        {
            if (array[i][s] != 0)
            {
                return 0;
            } 
        }
    }
    return 1;
}