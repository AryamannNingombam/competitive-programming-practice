#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int c, m, x;
        cin >> c >> m >> x;
        int min_ = min(c, m);
        if (min_ <= x)
        {
            cout << min_ << '\n';
        }
        else
        {
            min_ = min(min_, (x + c + m) / 3);
            cout << min_ << '\n';
        }
        
    }

    return 0;
}