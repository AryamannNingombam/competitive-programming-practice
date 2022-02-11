#include <iostream>

using namespace std;

int main()
{
    int tests, n;
    cin >> tests;
    while (tests--)
    {
        cin >> n;
        int b = n % 11;
        int a = n - b * 111;
        if (a >= 0 && a % 11 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}