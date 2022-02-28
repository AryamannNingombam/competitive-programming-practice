#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        int size;
        cin >> size;
        vector<int> previous(size), result;
        for (int i = 0; i < size; i++)
            cin >> previous[i];
        result.push_back(previous[0]);
        for (int i = 1; i < size - 1; i++)
        {
            if ((previous[i - 1] <= previous[i] && previous[i] <= previous[i + 1])
             || (previous[i - 1] >= previous[i] && previous[i] >= previous[i + 1]))
                continue;
            result.push_back(previous[i]);
        }
        result.push_back(previous.back());
        cout << result.size() << '\n';
        for (auto i : result)
            cout << i << ' ';
        
        cout << '\n';
    }

    return 0;
}