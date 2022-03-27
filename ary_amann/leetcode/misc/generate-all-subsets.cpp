class Solution
{
public:
    string return_binary(int n, int size)
    {
        string s = "";
        while (n > 0)
        {
            s = (n % 2 == 0 ? "0" : "1") + s;
            n /= 2;
        }
        if (s.size() < size)
        {
            s = string(size - s.size(), '0') + s;
        }
        return s;
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        int n = nums.size();
        int total_length = pow(2, n);
        vector<vector<int>> result(total_length);
        for (int i = 0; i < total_length; i++)
        {
            string s = return_binary(i, n);
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == '0')
                    continue;
                result[i].push_back(nums[j]);
            }
        }
        return result;
    }
};