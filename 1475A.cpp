#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool check_odd_divisor(unsigned long long n)
{
    return n & (n - 1);
}

int main()
{
    unsigned long long tests, num;
    cin >> tests;
    for (unsigned long long i = 0; i < tests; i++)
    {
        cin >> num;
        cout << (check_odd_divisor(num) ? "YES" : "NO") << endl;
    }
    return 0;
}