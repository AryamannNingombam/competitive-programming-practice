#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size, temp, previous = -1, max_counter = 0, temp_counter = 0;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        if (temp >= previous)
        {
            max_counter = max(max_counter, ++temp_counter);
        }
        else
        {
            temp_counter = 1;
                }
        previous = temp;
        // cout << temp_counter << '\n';
    }

    cout << max_counter;

    return 0;
}