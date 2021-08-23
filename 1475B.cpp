#include <iostream>

using namespace std;

bool return_result(int n)
{
    while (n % 2020 != 0)
    {
        if (n % 2021 == 0)
            return true;
        n -= 2021;
        if (n < 2020)
            return false;
    }

    return true;
}

int main()
{
    int tests, num;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> num;
        cout << (return_result(num) ? "YES" : "NO") << '\n';
    }

    return 0;
}