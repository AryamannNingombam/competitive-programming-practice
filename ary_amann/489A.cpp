#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    vector<pair<int, int>> indexes;
    for (int i = 0; i < size; i++)
    {
        int j = i;
        for (int k = i; k < size; k++)
        {
            if (arr[k] < arr[j])
                j = k;
        }
        indexes.push_back(make_pair(i, j));
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << indexes.size() << '\n';
    for (int i = 0; i < indexes.size(); i++)
    {
        cout << indexes[i].first << ' ' << indexes[i].second << '\n';
    }
    return 0;
}