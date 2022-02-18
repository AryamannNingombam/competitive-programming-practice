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