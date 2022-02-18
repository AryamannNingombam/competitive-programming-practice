class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int number_of_zeroes = 0;
        int total_without_zero_mult = 1;
        for (auto i : nums)
        {
            number_of_zeroes += (i == 0);
            if (i == 0)
                continue;
            total_without_zero_mult *= i;
        };
        vector<int> result;
        for (auto i : nums)
        {
            if (i == 0)
            {
                if (number_of_zeroes == 1)
                    result.push_back(total_without_zero_mult);
                else
                    result.push_back(0);
            }
            else
            {
                if (number_of_zeroes > 0)
                    result.push_back(0);
                else
                    result.push_back(total_without_zero_mult / i);
            }
        }
        return result;
    }
};