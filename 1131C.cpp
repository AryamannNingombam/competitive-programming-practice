#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr_original[size], arr_2[size];
    for (int i = 0; i < size; i++)
        cin >> arr_original[i];
    sort(arr_original, arr_original + size);

    bool insert_beginning = true;
    int first_pointer = 0, second_pointer = size - 1;
    for (int i = 0; i < size; i++)
    {
        if (insert_beginning)
        {
            arr_2[first_pointer++] = arr_original[i];
        }
        else
        {
            arr_2[second_pointer--] = arr_original[i];
        }
        insert_beginning = !insert_beginning;
    }
    //getting the cost;
    int cost_first = abs(arr_original[size - 1] - arr_original[0]), cost_second = abs(arr_2[size - 1] - arr_2[0]);

    for (int i = 0; i < size - 1; i++)
    {
        cost_first = max(cost_first, abs(arr_original[i + 1] - arr_original[i]));
        cost_second = max(cost_second, abs(arr_2[i + 1] - arr_2[i]));
    };
    for (int i = 0; i < size; i++)
    {
        cout << ((cost_first > cost_second) ? arr_2[i] : arr_original[i]) << ' ';
    }
    cout << '\n';

    return 0;
}
