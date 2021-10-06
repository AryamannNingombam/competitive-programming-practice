#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int size;
        cin >> size;
        vector<int> values(size), status(size);
        vector<int> sorting_values;
        for (int i = 0; i < size; i++)
            cin >> values[i];
        for (int i = 0; i < size; i++)
        {
            cin >> status[i];
            if (!status[i])
                sorting_values.push_back(values[i]);
        }
        sort(sorting_values.begin(), sorting_values.end());

        int index = sorting_values.size()-1;
        for (int i = 0; i < size; i++)
        {
            if (!status[i])
                values[i] = sorting_values[index--];
        }
        for (int i = 0; i < size; i++)
            cout << values[i] << ' ';
        cout << '\n';
    }

    return 0;
}