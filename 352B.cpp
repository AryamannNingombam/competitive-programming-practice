#include <iostream>
#include <map>
#include <vector>
using namespace std;

int check_ap(const vector<int> &v)
{
    if (v.size() == 0)
        return -1;
    if (v.size() == 1)
        return 0;
    if (v.size() == 2)
        return v[1] - v[0];

    int difference = v[1] - v[0];
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] != difference)
            return -1;
    }
    return difference;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    map<int, vector<int>> m;
    for (int i = 0; i < size; i++)
        m[arr[i]].push_back(i);
    map<int, vector<int>>::iterator it;
    vector<pair<int, int>> result;
    for (it = m.begin(); it != m.end(); it++)
    {
        int dif = check_ap(it->second);
        if (dif != -1)
        {
            result.push_back({it->first, dif});
        }
    }
    cout << result.size() << '\n';
    for (auto &i : result)
        cout << i.first << ' ' << i.second << '\n';

    return 0;
}