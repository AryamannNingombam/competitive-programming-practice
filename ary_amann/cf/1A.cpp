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

long long return_result(long long n, long long m, long long a)
{
    long long units_length = ((n + a - 1) / a);

    long long units_breadth = ((m + a - 1) / a);
    return units_breadth * units_length;
}

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    cout << return_result(n, m, a);

    return 0;
}