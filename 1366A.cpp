#include <iostream>

using namespace std;

int main()
{
    int tests, first, second;
    cin >> tests;
    while (tests--)
    {
        cin >> first >> second;
        if (first * 2 <= second)
        {
            cout << first << '\n';
        }
        else if (second * 2 <= first)
        {
            cout << second << '\n';
        }
        else
        {
            cout << (first + second) / 3 << '\n';
        }
    }

    return 0;
}