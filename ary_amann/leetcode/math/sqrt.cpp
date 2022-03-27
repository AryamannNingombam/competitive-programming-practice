class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;
        long long low = 1, high = x, ans = -1;
        while (low <= high)
        {
            long long mid = low + (high - low) / 2;
            long long sq = mid * mid;
            if (sq == x)
                return mid;
            else if (sq > x)
                high = mid - 1;
            else
            {
                low = mid + 1;
                ans = mid;
            }
        }

        return ans;
    }
};