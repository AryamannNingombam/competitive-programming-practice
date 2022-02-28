#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

long long return_result(long long a, long long b, long long c, long long d)
{

    if (a <= b)
        return b;
    if (d >= c)
        return -1;
     long long num = a - b;
    long long  den = c - d;
    long long  x = (num + den - 1) / den;
    return x * c + b;
}

int main()
{
    long long tests, a, b, c, d;
    cin >> tests;
    for (long long i = 0; i < tests; i++)
    {
        cin >> a >> b >> c >> d;
        cout << return_result(a, b, c, d) << '\n';
    }

    return 0;
}