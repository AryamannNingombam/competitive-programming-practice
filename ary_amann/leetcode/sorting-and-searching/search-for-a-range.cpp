
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        const int size = nums.size();

        if (size == 0)
            return {-1, -1};
        if (size == 1 && nums[0] != target)
            return {-1, -1};

        int first_index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();

        if (first_index == size || nums[first_index] != target)
            return {-1, -1};
        if (nums.back() == target)
            return {first_index, (int)nums.size() - 1};
        int l = first_index, r = size - 1;
        int second_index = first_index;
        while (l <= r)
        {
            const int midpoint = (l + r) / 2;
            if (nums[midpoint] < target)
            {
                l = midpoint + 1;
            }
            else if (nums[midpoint] > target)
            {
                r = midpoint - 1;
            }
            else
            {
                if (nums[midpoint] == nums[midpoint + 1])
                {
                    l = midpoint + 1;
                }
                else
                {
                    second_index = midpoint;
                    break;
                }
            }
        }
        return {first_index, second_index};
    }
};