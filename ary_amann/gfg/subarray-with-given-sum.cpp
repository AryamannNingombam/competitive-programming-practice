// { Driver Code Starts
#include <vector>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        int l = 0, r = 0;
        long long sum = 0;
        while (r < n)
        {
            sum += arr[r];
            while (sum >= s && l <= r)
            {
                if (sum == s)
                {
                    return {l + 1, r + 1};
                }
                sum -= arr[l];
                l++;
            }
            r++;
        }
        return {-1};
    }
};
