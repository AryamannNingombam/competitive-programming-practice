class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        for (auto &i : intervals)
        {
            if (result.size() == 0)
                result.push_back(i);
            else
            {
                if (result.back()[1] > i[1])
                    continue;
                else if (result.back()[1] < i[0])
                    result.push_back(i);
                else
                    result.back()[1] = i[1];
            }
        }

        return result;
    }
};