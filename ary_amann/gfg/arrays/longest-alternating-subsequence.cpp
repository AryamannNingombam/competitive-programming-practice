// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int AlternatingaMaxLength(vector<int> &nums)
    {
        // Code
        const int size = nums.size();
        int inc = 1, dec = 1;
        for (int i = 1; i < size; i++)
        {
            if (nums[i] > nums[i - 1])
                dec = inc + 1;
            else if (nums[i] < nums[i - 1])
                inc = dec + 1;
        }
        return max(inc, dec);
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution obj;
        int ans = obj.AlternatingaMaxLength(nums);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends