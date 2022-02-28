#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    arr[0] = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] == arr[i - 1])
            continue;
        else
        {
            arr[i] = arr[i - 1] + 1;
        }
    }
    int mex = size - 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] - arr[i - 1] > 1)
        {
            mex = arr[i] - 1;
        }
    }
    if (mex == size - 1)

    {
        cout << arr[size - 1] + 1 << '\n';
    }
    else
    {
        cout << mex << '\n';
    }
    return 0;
}