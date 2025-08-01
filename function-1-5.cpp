int count_evens(int number){
    int total = 0;
    if (number < 1) {
        return total;
    } else {
        for (int i = 0; i < number; i++)
        {
            if (i % 2 == 0)
            {
                total++;
            }
            
        }
        return total;
    }
}