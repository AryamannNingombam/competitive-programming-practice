// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<int> sumClosest(vector<int> arr, int x)
    {
        vector<int> result = {-1, -1};
        int difference = INT_MAX;
        const int size = arr.size();
        int l = 0, r = size - 1;
        while (l < r)
        {
            int sum = arr[l] + arr[r];
            if (sum < x)
            {
                if (x - sum < difference)
                {
                    difference = x - sum;
                    result = {arr[l], arr[r]};
                }
                l++;
            }
            else if (sum == x)
            {
                result = {arr[l], arr[r]};
                difference = 0;
                break;
            }
            else
            {
                if (sum - x <= difference)
                {
                    difference = sum - x;
                    result = {arr[l], arr[r]};
                }
                r--;
            }
        }
        return result;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumClosest(arr, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} // } Driver Code Ends