#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    long long sum = 0;
    for (int i = 0; i < size; i++)
        cin >> arr[i], sum += arr[i];
    if (sum & 1)
    {
        cout << 0 << '\n';
        return 0;
    }
    long long current_sum = 0;
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        current_sum += arr[i];
        if (current_sum == sum / 2)
            result++;
    }
    cout << ((sum == 0) ? result - 1 : result) << '\n';

    return 0;
}