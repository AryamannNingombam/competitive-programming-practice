class Solution
{
    unordered_map<int, int> hash;

public:
    int fib(int n)
    {
        if (hash.find(n) != hash.end())
            return hash[n];
        if (n <= 1)
            return n;
        return fib(n - 1) + fib(n - 2);
    }
};