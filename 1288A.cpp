#include <iostream>
using namespace std;

int main()
{
    int tests, n, d;
    cin >> tests;
    while (tests--)
    {
        cin >> n >> d;
        bool printed = false;
        for (int x = 0; x <= n; x++)
        {
            int ce = (x + d) / (x + 1);
            if (x + (ce) <= n)
            {
                printed = true;
                cout << "YES\n";
                break;
            }
        }
        if (!printed)
        {
            cout << "NO\n";
        }
    }

    return 0;
}