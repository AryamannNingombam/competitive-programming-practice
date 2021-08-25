#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    int values[200001];
    int indexes[200001] = {0};
    cin >> size;

    for (int i = 0; i < size; i++)
        cin >> values[i];
    int temp;
    vector<int> results;

    for (int i = size - 1; i > -1; i--)
    {
        temp = values[i];
        indexes[temp]++;
        if (indexes[temp] == 1)
        {
            results.push_back(temp);
        }
    }

    cout << results[results.size() - 1] << '\n';

    return 0;
}
