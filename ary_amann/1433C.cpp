#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
using namespace std;

int get_result(vector<int> &elements, int size, int max_number)
{

    bool all_equal = true;
    for (int i = 1; i < size; i++)
    {
        if (elements[i - 1] != elements[i])
        {
            all_equal = false;
            break;
        }
    }
    if (all_equal)
        return -2;
    if (elements[0] == max_number && elements[1] != max_number)
        return 0;
    if (elements[size - 1] == max_number && elements[size - 2] != max_number)
        return size - 1;
    for (int i = 1; i < size - 1; i++)
    {
        if (elements[i] == max_number)
        {
            if ((elements[i - 1] != max_number) || (elements[i + 1] != max_number))
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int tests, size, max_number = -1;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> size;
        vector<int> elements(size);

        for (int i = 0; i < size; i++)
        {
            cin >> elements[i];
            max_number = max(max_number, elements[i]);
        }

        cout << get_result(elements, size, max_number) + 1 << '\n';
        max_number = -1;
    }

    return 0;
}