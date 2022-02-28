#include <iostream>
#include <vector>

using namespace std;

ostream &operator<<(ostream &os, const vector<int> &v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}

int main()
{
    int tests, size;
    cin >> tests;
    while (tests--)
    {
        cin >> size;
        vector<int> values(size, 0);
        for (int i = 0; i < size; i++)
        {
            cin >> values[i];
            if ((i & 1) && values[i] > 0)
                values[i] = -values[i];
            else if ((!(i & 1)) && values[i] < 0)
                values[i] = -values[i];
        }

        cout << values << '\n';
    }

    return 0;
}