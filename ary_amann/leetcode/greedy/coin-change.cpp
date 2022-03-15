class Solution
{
public:
    int coinChange(vector<int> &coins, int amount)
    {
        if (amount == 0 || coins.size() == 0)
            return 0;
        vector<int> dp(amount + 1, amount + 2);
        dp[0] = 0;
        for (int i = 1; i < amount + 1; i++)
        {
            for (int c : coins)
            {
                if (i >= c)
                {
                    dp[i] = min(dp[i], dp[i - c] + 1);
                }
            }
        }
        return dp[amount] == amount + 2 ? -1 : dp[amount];
    }
};