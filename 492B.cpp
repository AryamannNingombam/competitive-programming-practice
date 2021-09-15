#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    vector<double> values(n, -1);
    for (int i = 0; i < n; i++)
        cin >> values[i];
    sort(values.begin(), values.end());
    double max_result = max(values[0], l - values[n-1]);
    for (int i = 1; i < n; i++)
    {
        max_result = max(max_result, (values[i] - values[i - 1]) / 2);
    }

    cout << fixed  <<  setprecision(9) <<  max_result << '\n';

    return 0;
}