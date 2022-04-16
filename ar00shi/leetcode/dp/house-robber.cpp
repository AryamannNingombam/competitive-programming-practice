class Solution
{
public:
    int houserob(vector<int> &nums)
    {
        vector<int> dp(nums.size());
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for (int i = 2; i < nums.size(); i++)
            dp[i] = max(dp[i - 1], nums[i] + dp[i - 2]);
        return dp[nums.size() - 1];
    }
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);
        return houserob(nums);
    }
};

// this doesnt use recursion lmao but dp works