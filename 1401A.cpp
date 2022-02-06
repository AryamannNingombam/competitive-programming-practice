
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int get_result(int n, int k)
{
    int total = 0;
    total += max(0, k - n);
    n += total;
    if ((!(n % 2) && (k % 2)) || ((n % 2) && !(k % 2)))
        total++;
    return total;
}

int main()
{
    int tests, n, k;
    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        cin >> n >> k;
        cout << get_result(n, k) << '\n';
    }

    return 0;
}