#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int tests, size;
    cin >> tests;
    string s;
    while (tests--)
    {
        cin >> size;
        cin >> s;
        int first_pointer = 0, second_pointer = size - 1;
        bool printed = false;
        while (first_pointer <= second_pointer)
        {
            if (s[first_pointer] != s[second_pointer])
            {
                if (abs(s[first_pointer] - s[second_pointer]) != 2)
                {
                    cout << "NO\n";
                    printed = true;
                    break;
                }
            }

            first_pointer++;
            second_pointer--;
        }
        if (!printed)
        {
            cout << "YES\n";
        }
    }

    return 0;
}