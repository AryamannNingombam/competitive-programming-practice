
class Solution
{
public:
    int fourSumCount(vector<int> &nums1, vector<int> &nums2, vector<int> &nums3, vector<int> &nums4)
    {
        map<int, int> hash;
        for (auto &i : nums1)
        {
            for (auto &j : nums2)
            {
                hash[i + j]++;
            }
        }
        int counter = 0;
        for (auto &i : nums3)
        {
            for (auto &j : nums4)
            {
                counter += hash[0 - i - j];
            }
        }

        return counter;
    }
};