#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

bool return_result(int x1, int y1, int x2, int y2)
{
    return ((y1 == y2) && ((x1 + x2) == y2)) ||
            ((x1 == x2) && ((y1 + y2) == x2)) ||
            ((y1 == x2) && ((x1 + y2) == x2)) ||
            ((x1 == y2) && ((y1 + x2) == y2));
}

int main()
{
    int tests, x1, y1, x2, y2;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        cout << ((return_result(x1, y1, x2, y2)) ? "Yes\n" : "No\n");
    }

    return 0;
}