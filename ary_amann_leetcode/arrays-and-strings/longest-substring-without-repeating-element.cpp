class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<int, int> count;
        if (s.size() == 0)
            return 0;
        count[s[0]]++;
        int answer{1};
        int i{}, j{};
        while (j != s.size() - 1)
        {
            if (count[s[j + 1]] == 0)
            {
                count[s[j + 1]]++;
                j++;
                answer = max(answer, j - i + 1);
            }
            else
            {
                count[s[i]]--;
                i++;
            };
        };
        return answer;
    }
};