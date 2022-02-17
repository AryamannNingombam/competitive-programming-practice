class Solution
{
public:
    int helper(string s, int first_pointer, int second_pointer)
    {
        while (first_pointer > -1 && second_pointer < s.size() &&
               s[first_pointer] == s[second_pointer])
        {
            first_pointer--;
            second_pointer++;
        }
        return second_pointer - first_pointer - 1;
    }
    string longestPalindrome(string s)
    {
        int start = 0, end = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int first_length = helper(s, i, i);
            int second_length = helper(s, i, i + 1);
            int temp = max(first_length, second_length);
            if (temp > end - start)
            {
                start = i - ((temp - 1) / 2);
                end = i + (temp / 2);
            };
        }
        return s.substr(start, end - start + 1);
    }
};