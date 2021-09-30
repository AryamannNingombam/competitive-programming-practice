#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int tests, size;
    cin >> tests;
    while (tests--)
    {
        cin >> size;
        vector<int> arr(size, 0);
        for (int i = 0; i < size; i++)
            cin >> arr[i];
        vector<vector<int>> result;
        for (int i = 0; i < size; i++)
        {
            int max_index = max_element(arr.begin(), arr.end()) - arr.begin();
            if (max_index != (size - i - 1))
            {
                result.push_back({max_index + 1, size - i, 1});
            }
            arr.erase(arr.begin() + max_index);
        }
        cout << result.size() << '\n';
        for (int i = 0; i < result.size(); i++)
            cout << result[i][0] << ' ' << result[i][1] << ' ' << result[i][2] << '\n';
    }

    return 0;
}