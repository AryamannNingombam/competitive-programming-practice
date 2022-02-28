#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> m;
    if (s.size() % 2 != 0)
    {
        cout << -1 << '\n';
        return 0;
    };
    for (auto &i : s)
    {
        m[i]++;
    }
    int left = m['L'], right = m['R'], up = m['U'], down = m['D'];
    if (left == right && up == down)
    {
        cout << 0 << '\n';
        return 0;
    }
    const int num1 = max(up, down) + max(left, right);
    const int num2 = min(up, down) + min(left, right);

    cout << (num1 - num2) / 2 << '\n';

    return 0;
}