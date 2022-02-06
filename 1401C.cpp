#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int size;
        cin >> size;
        int arr[size], sorted[size];
        int min_number = INT_MAX;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            sorted[i] = arr[i];
            min_number = min(min_number, arr[i]);
        }
        sort(sorted, sorted + size);
        bool flag = true;
        for (int i = 0; i < size; i++)
        {
            if (__gcd(min_number, arr[i]) == min_number)
                continue;
            if (arr[i] == sorted[i])
                continue;
            flag = false;
            break;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}