class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j != i + 1 && nums[j] == nums[j - 1])
                    continue;
                const int temp_target = target - nums[i] - nums[j];
                int l = j + 1, r = nums.size() - 1;
                while (l < r)
                {
                    const int temp_target_2 = nums[l] + nums[r];
                    if (temp_target == temp_target_2)
                    {
                        s.push_back({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        while (l < r && nums[l] == nums[l - 1])
                            l++;
                    }
                    else if (temp_target > temp_target_2)
                        l++;
                    else
                        r--;
                }
            }
        }
        return s;
    }
};
