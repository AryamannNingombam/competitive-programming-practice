#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

bool solve(string &s, string &t, string &p)
{
    int mapping[30] = {0};
    for (auto i : p)
        mapping[i - 'a']++;
    int index_s = 0, index_t = 0;
    while (index_s < s.size())
    {
        if (index_t == t.size())
            return false;
        if (t[index_t] == s[index_s])
        {
            index_t++;
            index_s++;
            continue;
        }
        mapping[t[index_t++] - 'a']--;
    }
    while (index_t<t.size())mapping[t[index_t++] - 'a']--;
    for (int i = 0; i < 30; i++)
    {
        if (mapping[i] < 0)
            return false;
    }

    return true;
}

int main()
{
    int tests;
    cin >> tests;
    while (tests--)
    {
        string s, t, p;
        cin >> s >> t >> p;
        cout << (solve(s, t, p) ? "YES" : "NO") << '\n';
    }

    return 0;
}