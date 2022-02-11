#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int size, k;
    cin >> size >> k;
    long long arr[size], sums[size - 1];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    for (int i = 0; i < size - 1; i++)
        sums[i] = arr[i + 1] - arr[i];
    sort(sums, sums + size - 1);
    long long sum = 0;
    for (int i = size - k - 1; i > -1; i--)
        sum += sums[i];
    cout << sum << '\n';

    return 0;
}