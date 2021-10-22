#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size, max_length, max_pieces;
    cin >> size >> max_length >> max_pieces;
    int arr[size], distance[size - 1];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (i != 0)
            distance[i - 1] = arr[i] - arr[i - 1];
    }
    sort(distance, distance + size - 1);
    int min_distance = arr[size - 1] - arr[0] + 1;
    int i = size - 2;
    for (int j = 1; j < max_pieces; j++)
    {
        min_distance -= (distance[i--] - 1);
    }
    cout << min_distance << '\n';
    return 0;
}