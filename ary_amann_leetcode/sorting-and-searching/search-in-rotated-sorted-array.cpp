class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            const int midpoint = (l + r) / 2;
            if (nums[midpoint] == target)
                return midpoint;
            if (nums[l] <= nums[midpoint])
            {
                if (target >= nums[l] && target < nums[midpoint])
                    r = midpoint - 1;
                else
                    l = midpoint + 1;
            }
            else
            {
                if (target <= nums[r] && target > nums[midpoint])
                    l = midpoint + 1;
                else
                    r = midpoint - 1;
            }
        }
        return -1;
    }
};