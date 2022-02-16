class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<int, int> count;
        if (s.size() == 0)
            return 0;
        count[s[0]]++;
        class Solution
        {
        public:
            vector<vector<int>> merge(vector<vector<int>> &intervals)
            {
                int pointer = 1;
                sort(intervals.begin(), intervals.end());
                vector<vector<int>> result;
                result.push_back(intervals[0]);
                while (pointer < intervals.size())
                {
                    if (result.back()[1] >= intervals[pointer][0])
                    {
                        if (result.back()[1] < intervals[pointer][1])
                            result.back()[1] = intervals[pointer][1];
                    }
                    else
                    {
                        result.push_back(intervals[pointer]);
                    }
                    pointer++;
                }
                return result;
            }
        };
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