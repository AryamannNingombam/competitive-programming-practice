#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const unsigned int M = 10007;
    int size;
    cin >> size;
    long long arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + size);
    unsigned long long sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = (sum + arr[i] * arr[size - i - 1]) % M;
    }
    cout << sum << '\n';

    return 0;
}