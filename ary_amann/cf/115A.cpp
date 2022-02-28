#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int dfs(vector<int> &values,
        int current_index = 0, int current_height = 0)
{
    if (values[current_index] == -2)
        return current_height + 1;
    return dfs(values, values[current_index], current_height + 1);
}

int main()
{
    int size, temp;
    cin >> size;
    vector<int> values(size), height(size, -1);
    if (size == 1)
    {
        cout << 1 << '\n';
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        temp--;
        values[i] = temp;
    }
    int max_height = -1;
    for (int i = 0; i < size; i++)
    {
        max_height = max(max_height, dfs(values, i, 0));
    }
    cout << max_height << '\n';
    return 0;
}