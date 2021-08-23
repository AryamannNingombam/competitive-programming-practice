#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm>

using namespace std;

void return_result(int n, int t, vector<int> &values, vector<bool> &visited,
                   bool &flag, int current_index = 0)
{
    if (current_index >= n)
        return;
    if (visited[current_index])
        return;
    visited[current_index] = true;
    if (current_index == t)
    {
        flag = true;
        cout << "YES\n";
        return;
    }
    return return_result(n, t, values, visited, flag, current_index + values[current_index]);
}

int main()
{
    int n, t, temp;
    cin >> n >> t;
    vector<int> values;
    t--;
    vector<bool> visited(n, 0);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        values.push_back(temp);
    }
    bool flag = false;
    return_result(n, t, values, visited, flag);
    if (!flag)
    {
        cout << "NO\n";
    }

    return 0;
}