#include <iostream>
#include <vector>

using namespace std;

int main()
{

#ifndef INPUT_OUPUT
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int size, temp;
    cin >> size;
    vector<vector<int>> indexes(5001);
    for (int i = 0; i < size * 2; i++)
        cin >> temp, indexes[temp].push_back(i + 1);
    for (int i = 0; i < 5001; i++)
    {
        if (indexes[i].size() & 1)
        {
            cout << -1 << '\n';
            return 0;
        }
    }
    for (int i = 0; i < 5001; i++)
    {
        if (indexes[i].size() == 0)
            continue;
        for (int j = 0; j < indexes[i].size(); j += 2)
        {
            cout << indexes[i][j] << ' ' << indexes[i][j + 1] << '\n';
        }
    }
    return 0;
}