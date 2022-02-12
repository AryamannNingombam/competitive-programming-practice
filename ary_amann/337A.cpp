#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int return_min_difference(vector<int> &values, int size, int required)
{
    sort(values.begin(), values.end());
    int iterator = 1, min_current = INT_MAX, min_overall = values[required-1] - values[0];

    while (iterator + required <= size)
    {
        min_current = values[iterator + required - 1] - values[iterator];
        min_overall = min(min_overall, min_current);
        iterator++;
    };
    return min_overall;
}

int main()
{
    int required, size;
    cin >> required >> size;
    vector<int> values(size);
    for (int i = 0; i < size; i++)
        cin >> values[i];
    cout << return_min_difference(values, size, required) << '\n';
    return 0;
}
// 5 7 10 10 12 22