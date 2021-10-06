#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int tests, a, b;
    cin >> tests;
    while (tests--)
    {
        cin >> a >> b;
        int smaller = min(a, b), larger = max(a, b);
        int sum = smaller + larger;
        if (sum % 3 == 0 && larger <= 2 * smaller)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }

    return 0;
}