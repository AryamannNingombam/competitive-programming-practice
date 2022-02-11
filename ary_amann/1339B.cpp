#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long tests, size;
    cin >> tests;
    while (tests--)
    {
        cin >> size;
        long long arr1[size], arr2[size];
        for (long long i = 0; i < size; i++)
            cin >> arr1[i];
        sort(arr1, arr1 + size);
        int index = size - 1;
        if (size & 1)
        {
            arr2[0] = arr1[size / 2];
        }
        for (int i = 0; i < size / 2; i++)
        {
            arr2[index--] = arr1[size - i - 1];
            arr2[index--] = arr1[i];
        }

        for (long long i = 0; i < size; i++)
            cout << arr2[i] << ' ';
        cout << '\n';
    }

    return 0;
}