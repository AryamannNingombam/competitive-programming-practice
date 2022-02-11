#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

int get_min_divisor(int n)
{

    if (n % 2 == 0)
        return 2;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return i;
    }

    return n;
}

int get_result(int number, int iterations)
{
    int min_diviser = get_min_divisor(number);
    if (min_diviser == number)
    {
        number *= 2;
        number += (2 * (iterations - 1));
    }
    else
    {
        number += min_diviser + (2 * (iterations - 1));
    }
    return number;
}

int main()
{
    int tests, number, iterations;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> number >> iterations;
        cout << get_result(number, iterations) << '\n';
    }

    return 0;
}