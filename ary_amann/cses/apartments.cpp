#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long m, n, k;
    cin >> m >> n >> k;
    vector<long> a(m);
    for (long i = 0; i < m; i++)
        cin >> a[i];
    vector<long> b(n);
    for (long i = 0; i < n; i++)
        cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long first_polonger = 0, second_polonger = 0;
    long result = 0;
    while (first_polonger < m && second_polonger < n)
    {
        if (a[first_polonger] >= b[second_polonger] - k && a[first_polonger] <= b[second_polonger] + k)
        {
            result++;
            first_polonger++;
            second_polonger++;
        }
        else if (a[first_polonger] < b[second_polonger] - k)
            first_polonger++;
        else
            second_polonger++;
    };

    cout << result << '\n';
    return 0;
}