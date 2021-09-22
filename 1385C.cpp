#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int check_increasing(int arr[], int size)
{
    int counter = 1;
    for (int i = size - 1; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
            break;
        counter++;
    }
    return counter;
}

int check_decreasing(int arr[], int size)
{
    int counter = 1;
    for (int i = size - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
            break;
        counter++;
    }
    return counter;
}

int check_hill(int arr[], int size)
{
    int counter = 1;
    int i;
    //should be decreasing;
    for (i = size - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
            break;
        counter++;
    }

    //should be increasing;
    for (i; i > 0; i--)
    {
        if (arr[i] < arr[i - 1])
            break;
        counter++;
    }
    return counter;
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        const int result = max(check_increasing(arr, size), max(check_decreasing(arr, size), check_hill(arr, size)));
        cout << size-result << '\n';
    }

    return 0;
}