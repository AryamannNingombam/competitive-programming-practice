#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;
using string_map = map<string, string>;

int main()
{
    string_map mapping;
    int m, n;
    cin >> m >> n;
    vector<string> values(m), result(m);
    string temp1, temp2;
    for (int i = 0; i < n; i++)
    {
        cin >> temp1 >> temp2;
        mapping[temp1] = temp2;
    }
    for (int i = 0; i < m; i++)
        cin >> values[i];
    int counter = 0;
    for (auto i : values)
    {
        string temp = mapping[i];
        result[counter++] = (temp.length() >= i.length() ? i : temp);
    }
    for (auto i : result)
    {
        cout << i << ' ';
    };
    cout << '\n';

    return 0;
}