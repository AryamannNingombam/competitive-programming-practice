class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int current = nums[0] == 1 ? 1 : 0;
        int max_ones = current;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == 1 && nums[i - 1] == 1)
            {

                current++;
            }
            else if (nums[i] == 1)
            {
                current = 1;
            }
            max_ones = max(max_ones, current);
        }

        return max_ones;
    }
};