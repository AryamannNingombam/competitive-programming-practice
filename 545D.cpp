#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

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
    long sum = arr[0];
    int counter = 1; // 1
    sum = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] >= sum)
        {
            ++counter;
            sum += arr[i];
        }
    }
    cout << counter;

    return 0;
}