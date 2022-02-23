class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        map<int, int> hash;
        for (auto &i : nums)
            hash[i]++;
        int result;
        auto i = hash.end();
        while (i != hash.begin())
        {
            i--;
            k -= i->second;
            if (k <= 0)
            {
                result = i->first;
                break;
            }
        }

        return result;
    }
};