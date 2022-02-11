#include <iostream>

using namespace std;

int main()
{
    int tests, n, k;
    cin >> tests;
    while (tests--)
    {
        cin >> n >> k;
        int x = k / (n - 1);
        int temp = k - (x * (n - 1));
        if (!temp)
            cout << n * x - 1 << '\n';
        else
            cout << n * x + temp << '\n';
    }

    return 0;
}