

vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
{
    vector<vector<int>> result;
    sort(intervals.begin(), intervals.end());
    for (int i = 0; i < intervals.size(); i++)
    {
        if (result.size() == 0)
        {
            result.push_back(intervals[i]);
        }
        else
        {
            if (result.back()[1] >= intervals[i][1])
                continue;
            else if (result.back()[1] < intervals[i][1] && result.back()[1] >= intervals[i][0])
            {
                result.back()[1] = intervals[i][1];
            }
            else
            {
                result.push_back(intervals[i]);
            }
        }
    }

    return result;
}