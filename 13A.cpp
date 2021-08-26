#include <iostream>

using namespace std;

int get_gcd(int first, int second)
{
    int remainder = first % second;
    while (remainder != 0)
    {
        first = second;
        second = remainder;
        remainder = first % second;
    }
    return second;
}

int get_result_for_base(int n, int base)
{
    int sum = 0;
    while (n >= base)
    {
        sum += n % base;

        n /= base;
    }
    return sum + n;
}

int main()
{
    int n;
    cin >> n;
    int result = 0, denom = n - 2;
    for (int i = 2; i < n; i++)
    {
        result += get_result_for_base(n, i);
    };
    int gcd = get_gcd(result, denom);
    result /= gcd;
    denom /= gcd;
    cout << result << '/' << denom << '\n';
    return 0;
}