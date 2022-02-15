class Solution
{
public:
    vector<int> twoSum(const vector<int> &nums, int target)
    {
        map<int, int> hash;
        vector<int> result;
        for (int i{}; i < nums.size(); i++)
        {
            if (hash.find(nums[i]) == hash.end())
            {
                hash[target - nums[i]] = i;
            }
            else
            {
                result.push_back(i);
                result.push_back(hash[nums[i]]);
                break;
            };
        };

        return result;
    }
};