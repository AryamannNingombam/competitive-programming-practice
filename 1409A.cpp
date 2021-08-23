#include <iostream>
#include <vector>

using namespace std;

int get_min_(int current, int target)
{
    if (current == target)
        return 0;
    int total_steps = 0;
    bool add = false;
    if (current < target)
    {
        total_steps = (target - current) / 10;
    }
    else
    {
        total_steps = (current - target) / 10;
    }
    add = (target - current) % 10 != 0;
    return total_steps + add;
}

int main()
{
    int tests, current, target;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> current >> target;
        cout << get_min_(current, target) << '\n';
    }

    return 0;
}