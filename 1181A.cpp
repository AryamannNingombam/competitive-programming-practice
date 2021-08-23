#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long long x, y, z;
    cin >> x >> y >> z;
    const unsigned long long bought_from_x = x / z,
              bought_from_y = y / z,
              x_remaining = x % z,
              y_remaining = y % z;

    if (x_remaining + y_remaining < z)
    {
        cout << bought_from_x + bought_from_y << ' ' << 0 << '\n';
    }
    else
    {
        const unsigned long long bought_from_extra = (x_remaining + y_remaining) / z;

        unsigned long long to_give = bought_from_extra * z - max(x_remaining, y_remaining);

        cout << bought_from_x + bought_from_y + bought_from_extra << ' ' << to_give << '\n';
    }

    return 0;
}