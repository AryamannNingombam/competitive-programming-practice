    void rearrange(long long *arr, int n) 
    { 
    int temp[n];
    int small = 0, large = n - 1;
    int flag = true;
 
    for (int i = 0; i < n; i++) {
        if (flag)
            temp[i] = arr[large--];
        else
            temp[i] = arr[small++];
        flag = !flag;
    }
 
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
    
    }