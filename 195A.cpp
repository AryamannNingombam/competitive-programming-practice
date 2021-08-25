#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    const int total = a * c;
    const int can_come = b * c;
    const int needed = total - can_come;

    const int time_required = (needed + b - 1) / b;
    cout << time_required << '\n';

    return 0;
}