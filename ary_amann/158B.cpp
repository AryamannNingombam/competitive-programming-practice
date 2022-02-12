#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int groups, temp;
    cin >> groups;
    int arr[5]= {0};
    for (int i = 0; i < groups; i++)
    {
        cin >> temp;
        arr[temp]++;
    }
    int total = arr[4] + arr[3] + arr[2] / 2;
    arr[1] -= arr[3];
    if (arr[2] & 1)
    {
        total += 1;
        arr[1] -= 2;
    }
    if (arr[1] > 0)
    {
        total += (arr[1] + 3) / 4;
    }
    cout << total << '\n';

    return 0;
}
