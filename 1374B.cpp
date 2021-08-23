#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int get_result(int n)
{
    int result = 0;
    while (n % 6 == 0)
    {
        n /= 6;
        result++;
    }
    while (n % 3 == 0)
    {
        n /= 3;
        result += 2;
    }
    return (n == 1 ? result : -1);
}

int main()
{
    unsigned long long tests, num;
    cin >> tests;
    for (unsigned long long i = 0; i < tests; i++)
    {
        cin >> num;
        cout << get_result(num) << '\n';
    }
    return 0;
}