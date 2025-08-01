int max_element(int array[], int n){
    int min = array[0];
if (n < 1) {
        return min;
    } else {
     for (int i = 0; i < n; i++)
     {
        if (array[i] > min)
        {
            min = array[i];
        }
     }
        return min;
    }
}