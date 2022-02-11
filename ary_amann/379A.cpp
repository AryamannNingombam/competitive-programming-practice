#include <iostream>
#include <string>

using namespace std;

int get_result(int a, int b)
{
    int div, rem;
    int result = a;
    while (a >= b)
    {
        div = a / b;
        result += div;
        rem = a % b;
        a = div + rem;
    }

    return result;
};

int main()
{
    int a, b;

    cin >> a >> b;

    cout << get_result(a, b) << '\n';

    return 0;
}