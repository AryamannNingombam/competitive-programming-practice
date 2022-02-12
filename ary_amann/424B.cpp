#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

bool sort_pair(pair<pair<long double,long double>,long> &left,
pair<pair<long double,long double>,long> &right){
    return sqrtl(powl(left.first.first, 2) + powl(left.first.second, 2))
     < sqrtl(powl(right.first.first, 2) + powl(right.first.second, 2));
}

int main()
{
    long long size, current, x, y, pop;
    cin >> size >> current;
    vector<pair<pair<long double, long double>, long>> arr(size);
    unsigned long long temp_sum = current;
    for (int i = 0; i < size; i++)
    {
        cin >> x >> y >> pop;
        arr[i] = {{x, y}, pop};
        temp_sum += pop;
    }
    if (temp_sum < pow(10, 6))
    {
        cout << -1 << '\n';
        return 0;
    }
    sort(arr.begin(), arr.end(),sort_pair);
    temp_sum = current;
    for (int i = 0; i < size; i++)
    {
        temp_sum += arr[i].second;
        if (temp_sum >= pow(10, 6))
        {
            cout << setprecision(8) << sqrtl(powl(arr[i].first.first, 2) + powl(arr[i].first.second, 2)) << '\n';
            return 0;
        }
    }

    return 0;
}