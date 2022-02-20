class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> result;
        deque<int> values;
        int l = 0, r = 0;
        while (r < nums.size())
        {
            while (!values.empty() && nums[values.back()] < nums[r])
                values.pop_back();
            values.push_back(r);
            if (l > values.front())
                values.pop_front();
            if (r + 1 >= k)
            {
                result.push_back(nums[values.front()]);
                l++;
            };
            r++;
        }

        return result;
    }
};