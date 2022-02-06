#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int size;
        cin >> size;
        vector<int> a(size, 0), b(size, 0);
        for (int i = 0; i < size; i++)
            cin >> a[i];
        for (int i = 0; i < size; i++)
            cin >> b[i];
        unordered_map<int, int> m;
        int j = 1;
        for (int i = 0; i < size; i++)
        {
            while (j < b[i])
                m[j] = i, j += 2;
        }
        int result = INT_MAX;
        for (int i = 0; i < size; i++)
            result = min(result, i + m[a[i]]);
        cout << result << '\n';
    }
    return 0;
}