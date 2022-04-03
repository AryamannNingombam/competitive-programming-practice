class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        if (nums.size() == 1)
            return true;
        int current = nums[0], i = 1;
        while (current > 0)
        {
            if (i == nums.size() - 1)
                return true;
            current = max(--current, nums[i]);
            i++;
        }
        return false;
    }
};