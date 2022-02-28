#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size, k;
    cin >> size >> k;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    sort(arr, arr + size);
    if (k == size)
    {
        cout << arr[size - 1] << '\n';
    }
    else if (k == 0)
    {
        if (arr[0] != 1)
        {
            cout << arr[0] - 1 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    else
    {
        if (arr[k - 1] == arr[k])
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << arr[k - 1] << '\n';
        }
    }

    return 0;
}
