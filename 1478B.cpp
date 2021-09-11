#include <iostream>

using namespace std;

bool solve(int d)
{

    int num;
    cin >> num;
    if (num > d * 10)
        return true;
    while (num >= d)
    {
        if (num % d == 0)
            return true;
        num -= 10;
    }

    return false;
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int d, size;
        cin >> size >> d;
        for (int i = 0; i < size; i++)
        {
            cout << (solve(d) ? "YES\n" : "NO\n");
        }
    }

    return 0;
}