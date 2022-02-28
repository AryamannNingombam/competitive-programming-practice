#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int forces;
    cin >> forces;
    int x, y, z, x_sum = 0, y_sum = 0, z_sum = 0;

    for (int i = 0; i < forces; i++)
    {
        cin >> x >> y >> z;
        x_sum += x;
        y_sum += y;
        z_sum += z;
    }
    cout << (((x_sum == 0) && (y_sum == 0) && (z_sum == 0)) ? "YES\n" : "NO\n");

    return 0;
}