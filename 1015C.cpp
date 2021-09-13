#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &p1, const pair<int, int> &p2)
{
    return (p1.first - p1.second) < (p2.first - p2.second);
}

int main()
{
    int n, m;
    unsigned long long temp_sum_compressed = 0;
    unsigned long long temp_sum_original = 0;
    cin >> n >> m;
    vector<pair<int, int>> pairs(n, {0, 0});
    for (int i = 0; i < n; i++)
    {
        cin >> pairs[i].first >> pairs[i].second;
        temp_sum_compressed += pairs[i].second;
        temp_sum_original += pairs[i].first;
    }
    if (temp_sum_original <= m)
    {
        cout << 0 << '\n';
        return 0;
    }

    if (temp_sum_compressed > m)
    {
        cout << -1 << '\n';
        return 0;
    }
    sort(pairs.begin(), pairs.end(), compare);

    int counter = 0;
    int i = n - 1;
    while (temp_sum_original > m)
    {
        temp_sum_original -= (pairs[i].first - pairs[i].second);
        counter++;
        i--;
    }

    cout << counter << '\n';

    return 0;
}