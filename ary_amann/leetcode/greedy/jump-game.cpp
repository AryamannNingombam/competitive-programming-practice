class Solution
{
public:
    bool canJump(vector<int> &nums)
    {
        const int size = nums.size();
        int it = 0;
        for (int i = 0; i <= it; i++)
        {
            if (it >= size - 1)
                return true;
            it = max(it, i + nums[i]);
        }

        return false;
    }
};