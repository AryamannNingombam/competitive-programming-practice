#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests, size;
    cin >> tests;

    while (tests--)
    {
        cin >> size;
        vector<int> values(size);
        vector<int> forward(size + 1, -1), backward(size + 1, -1);
        for (int i = 0; i < size; i++)
        {
            cin >> values[i];
            if (forward[values[i]] == -1)
            {
                forward[values[i]] = i;
            }
        }
        for (int i = size - 1; i >0; i--)
        {
            if (backward[values[i]] == -1)
                backward[values[i]] = i;
        }
        bool printed = false;
        for (int i = 1; i < size + 1; i++)
        {
            if ((backward[i] != -1) && (forward[i] != -1) && (backward[i] - forward[i] > 1))
            {
                cout << "YES\n";
                printed = true;
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
