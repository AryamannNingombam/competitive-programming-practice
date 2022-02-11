#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
    long long a, x, b, y;
    map<long long, long long> values;
    cin >> a;
    for (long long i = 0; i < a; i++)
    {
        cin >> x >> y;
        values[x] = max(values[x], y);
    }

    cin >> b;
    for (long long i = 0; i < b; i++)
    {
        cin >> x >> y;
        values[x] = max(values[x], y);
    }

    unsigned long long sum = 0;

    map<long long , long long >::iterator it;

    for (it = values.begin(); it != values.end(); it++)
        sum += it->second;
    cout << sum << '\n';
    return 0;
}