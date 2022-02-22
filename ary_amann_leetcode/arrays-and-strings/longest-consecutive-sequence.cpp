class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_map<int, bool> exists;
        for (auto &i : nums)
            exists[i] = true;
        int result = 0, counter = 0;
        for (auto &j : nums)
        {
            int i = j;
            counter = 0;
            if (exists[i - 1])
                continue;
            while (exists[i++])
                counter++;
            result = max(result, counter);
        }
        return result;
    }
};