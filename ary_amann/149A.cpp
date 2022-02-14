#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_results(int k, vector<int> &values)
{
    if (k == 0)
        return 0;
    sort(values.begin(), values.end());
    int sum = 0, i;
    for (i = 11; i > -1; i--)
    {
        if (sum >= k)
            break;
        sum += values[i];
    };
    if (sum < k)
        return -1;
    return 11 - i;
}

int main()
{
    int k, sum = 0;
    cin >> k;
    vector<int> values(12);
    for (int i = 0; i < 12; i++)
    {
        cin >> values[i];
        sum += values[i];
    };

    cout << get_results(k, values) << '\n';
}