#include <iostream>
#include <vector>

using namespace std;

bool all_filled(vector<pair<int, int>> &tap_range, int size, int n)
{
    //check for first;
    if (tap_range[0].first > 0)
        return false;
    //check for last
    if (tap_range[size - 1].second < n - 1)
        return false;
    int previous_second, next_first;
    for (int i = 1; i < size - 1; i++)
    {
        previous_second = tap_range[i - 1].second;
        next_first = tap_range[i + 1].first;
        if (previous_second < tap_range[i].first)
            return false;
        if (next_first > tap_range[i].second)
            return false;
    }

    return true;
}

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n, k, temp_index;
        cin >> n >> k;
        vector<pair<int, int>> tap_range;

        for (int i = 0; i < k; i++)
        {
            cin >> temp_index;
            temp_index--;
            tap_range.push_back({temp_index + 1, temp_index - 1});
        }
        int iterations = 0;
        while (1)
        {

            for (auto &i : tap_range)
            {
                i.first--;
                i.second++;
            }
            iterations++;
            if (all_filled(tap_range, k, n))
                break;
        }
        cout << iterations << '\n';
        }

    return 0;
}