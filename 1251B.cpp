#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int number_of_strings;
        cin >> number_of_strings;
        string s;
        int imbalanced = 0;
        bool t = false;
        for (int i = 0; i < number_of_strings; i++)
        {
            cin >> s;
            if (s.size() & 1)
            {
                t = true;
                imbalanced++;
                continue;
            }
            int ones = 0, zeros = 0;
            for (char c : s)
            {
                if (c == '1')
                    ones++;
                else
                    zeros++;
            }
            if (ones & 1 || zeros & 1)
            {
                imbalanced++;
            }
        }

        if (t || !(imbalanced & 1))
        {
            cout << number_of_strings << '\n';
        }
        else
            cout << number_of_strings - 1 << '\n';
    }

    return 0;
}