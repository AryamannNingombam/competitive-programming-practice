//Little Pony and Sort by Shift
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    bool increasing = true;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            increasing = false;
            break;
        }
    }
    if (increasing)
    {
        cout << 0 << '\n';
        return 0;
    }
    int break_point = -1;
    int done = false;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            if (done)
            {
                cout << "-1\n";
                return 0;
            }
            done = true;
            break_point = i;
        }
    }
    if (arr[break_point] > arr[0] || arr[0] < arr[size - 1])

    {
        cout << -1 << '\n';
        return 0;
    }

    cout << size - break_point << '\n';
    return 0;
}