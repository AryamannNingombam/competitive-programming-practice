class Solution
{
public:
    map<int, unsigned long long> cache;
    int climbStairs(int n)
    {
        if (n < 4)
            return n;
        if (cache[n] == 0)
        {
            cache[n] = climbStairs(n - 1) + climbStairs(n - 2);
            return cache[n];
        }
        return cache[n];
    }
};