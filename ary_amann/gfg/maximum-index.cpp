// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N)
    {
        int max_from_right[N];
        max_from_right[N - 1] = A[N - 1];
        for (int i = N - 2; i > -1; i--)
            max_from_right[i] = max(A[i],
                                    max_from_right[i + 1]);

        int min_from_left[N];
        min_from_left[0] = A[0];
        for (int i = 1; i < N; i++)
            min_from_left[i] = min(A[i],
                                   min_from_left[i - 1]);
        int result = -1;
        int i = 0, j = 0;
        while (i < N && j < N)
        {
            if (max_from_right[i] >= min_from_left[j])
            {
                result = max(result, i - j);
                i++;
            }
            else
                j++;
        }
        return result;
    }
};

// { Driver Code Starts.

/* Driver program to test above functions */
int main()
{
    int T;
    // testcases
    cin >> T;
    while (T--)
    {
        int num;
        // size of array
        cin >> num;
        int arr[num];

        // inserting elements
        for (int i = 0; i < num; i++)
            cin >> arr[i];
        Solution ob;

        // calling maxIndexDiff() function
        cout << ob.maxIndexDiff(arr, num) << endl;
    }
    return 0;
} // } Driver Code Ends