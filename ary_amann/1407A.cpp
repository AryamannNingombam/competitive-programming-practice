#include <iostream>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int size, temp;
        cin >> size;
        int zeros = 0, ones = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            if (temp == 0)
                zeros++;
            else
                ones++;
        }
        if (zeros >= ones)
        {
            cout << zeros << '\n';
            for (int i = 0; i < zeros; i++)
            {
                cout << 0 << ' ';
            }
        }
        else
        {
            if (ones & 1)
            {
                cout << ones - 1 << '\n';
                for (int i = 0; i < ones - 1; i++)
                {
                    cout << 1 << ' ';
                }
            }
            else
            {
                cout << ones << '\n';
                for (int i = 0; i < ones; i++)
                {
                    cout << 1 << ' ';
                }
            }
        }
        cout << '\n';
    }

    return 0;
}