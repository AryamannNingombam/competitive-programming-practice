#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<long long, long long> &l, pair<long long, long long> &r)
{
    if (l.second == r.second)
        return l.first < r.first;
    return l.second < r.second;
}

int main()
{
    long long n, r;
    long long avg;
    cin >> n >> r >> avg;
    avg *= n;
    vector<pair<long long, long long>> v(n);
    long long average = 0;
    for (long long i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second, average += v[i].first;

    if (average >= avg)
    {
        cout << 0 << '\n';
        return 0;
    }
    sort(v.begin(), v.end(), compare);
    long long index = 0;
    long long needed = avg - average;
    long long result = 0;
    while (needed > 0 && index < n)
    {
        if (v[index].first < r)
        {
            if (needed > r - v[index].first)
            {
                result += (v[index].second) * (r - v[index].first);
                needed -= (r - v[index].first);
            }
            else
            {
                result += v[index].second * needed;
                needed = 0;
            }
        }

        index++;
    }
    cout << result << '\n';

    return 0;
}