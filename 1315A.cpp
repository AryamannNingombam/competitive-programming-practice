#include <iostream>
#include <algorithm>

using namespace std;
bool is_valid(int x, int y, int cols, int rows)
{
    return x > -1 && y > -1 && x < cols && y < rows;
}

int main()
{
    int tests, a, b, x, y;
    cin >> tests;

    while (tests--)
    {
        cin >> a >> b >> x >> y;
        int max_area = 1;
        //left area;
        if (is_valid(x - 1, y, a, b))
        {
            max_area = max(max_area, x * b);
        }
        // right area;
        if (is_valid(x + 1, y, a, b))
        {
            max_area = max(max_area, (a - x - 1) * b);
        }
        //upper area;
        if (is_valid(x, y - 1, a, b))
        {
            max_area = max(max_area, (y) * (a));
        }
        //bottom area;
        if (is_valid(x, y + 1, a, b))
        {
            max_area = max(max_area, (a) * (b - y - 1));
        }
        cout << max_area << '\n';
    }

    return 0;
}