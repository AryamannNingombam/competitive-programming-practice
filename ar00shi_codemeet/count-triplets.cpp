// har jagah tle aa raha hai bc
/*
int countTriplet(int arr[], int n)
{
    sort(arr, arr + n);
    int ans = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        int k = i - 1;
        while (j < k)
        {
            if (arr[i] == arr[j] + arr[k])
            {
                ans++;
            }
            else if (arr[i] > arr[j] + arr[k])
                j += 1;
            else
                k -= 1;
        }
    }
    return ans;
}
*/
