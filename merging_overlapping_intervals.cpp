#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

ostream &operator<<(ostream &os, const vector<vector<int>> &intervals)
{
    for (const auto &i : intervals)
    {
        os << '[' << i.front() << ',' << i.back() << ']';
    };
    return os;
}

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

int main()
{
    int total_intervals, first, second;
    cin >> total_intervals;
    vector<vector<int>> values(total_intervals);
    for (int i = 0; i < total_intervals; i++)
    {
        cin >> first >> second;
        values[i] = {first, second};
    }
    cout << values << '\n';
    cout << merge(values) << '\n';
}