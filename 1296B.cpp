#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int return_max(int n)
{
    int counter = 0;
    while (n >= 10)
    {
        n -= 9;
        counter += 10;
    };
    return counter + n;
}

int main()
{
    int tests, temp;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> temp;
        cout << return_max(temp) << '\n';
    }

    return 0;
}