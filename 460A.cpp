#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int get_days(int n, int m)
{
    int socks_left = n, day = 1;
    while (socks_left > 0)
    {
        socks_left--;
        if (day % m == 0)
            socks_left++;
        if (socks_left == 0)
            break;

        day++;
    }

    return day;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << get_days(n, m);

    return 0;
}