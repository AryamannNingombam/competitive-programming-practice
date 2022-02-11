#include <iostream>

using namespace std;

long long odd_sum(long long n)
{
    return n * n;
}

int main()
{
    long long tests, first, second;
    cin >> tests;
    while (tests--)
    {
        cin >> first >> second;
        long long temp = odd_sum(second - 1);
        const long long temp2 = first - temp;
        if (((temp2)&1) && temp2 > 2 * (second - 1) - 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}