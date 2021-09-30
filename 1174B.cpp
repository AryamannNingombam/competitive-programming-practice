#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];
    bool has_odd = false, has_even = false;
    for (int i = 0; i < size; i++)
        cin >> arr[i], has_odd = has_odd || (arr[i] & 1), has_even = has_even || !(arr[i] & 1);
    if (has_odd && has_even)
        sort(arr, arr + size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << '\n';

    return 0;
}