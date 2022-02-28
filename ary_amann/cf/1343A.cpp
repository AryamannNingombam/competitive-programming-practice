#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int return_x(int num)
{
    int power = 1, sum = 1;
    while (1)
    {
        sum += pow(2, power++);
        if (num % sum == 0)
            break;
    }

    return num / sum;
}

int main()
{
    int tests, num;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> num;
        cout << return_x(num) << '\n';
    }

    return 0;
}
// 5 7 10 10 12 22