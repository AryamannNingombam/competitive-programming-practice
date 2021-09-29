#include <iostream>
#include <string>

using namespace std;
void solve(string s, int a, int b)
{
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == '0')
            a--;
        if (s[i] == '1')
            b--;
        else
            c++;
    }
    if (c == 0)
    {
        for (int i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[s.size() - 1 - i])
            {
                cout << -1 << '\n';
                return;
            }
        }
        if (a > 0 || b > 0)
        {
            cout << -1 << '\n';
            return;
        }
    }

    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] == '?' && s[s.size() - 1 - i] != '?')
        {
            if (s[s.size() - 1 - i] == '0' && a > 0)
            {
                s[i] = '0';
                a--;
            }
            else if (s[s.size() - 1 - i] == '1' && b > 0)
            {
                s[i] = '1';
                b--;
            }
            else
            {
                cout << -1 << '\n';
                return;
            }
        }
        else if (s[s.size() - 1 - i] == '?' && s[i] != '?')
        {
            if (s[i] == '0' && a > 0)
            {
                s[s.size() - 1 - i] = '0';
                a--;
            }
            else if (s[i] == '1' && b > 0)
            {
                s[s.size() - 1 - i] = '1';
                b--;
            }
            else
            {
                cout << -1 << '\n';
                return;
            }
        }
    }
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] == '?' && s[s.size() - i - 1] == '?')
        {
            if (a >= 2)
                s[i] = '0', s[s.size() - i - 1] = '0', a -= 2;
            else if (b >= 2)
                s[i] = '1', s[s.size() - i - 1] = '1', b -= 2;
            else
            {
                cout << -1 << "\n";
                return;
            }
        }
    }
    if (s.size() % 2 == 1 && s[s.size() / 2] == '?')
    {
        if (a > 0)
            s[s.size() / 2] = '0', a--;
        else if (b > 0)
            s[s.size() / 2] = '1', b--;
        else
        {
            cout << -1 << "\n";
            return;
        }
    }
    if (a > 0 || b > 0)
    {
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i < s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
        {
            cout << -1 << "\n";
            return;
        }
    }
    cout << s << "\n";
    return;
}

int main()
{
    int tests, a, b;
    string s;
    cin >> tests;
    while (tests--)
    {
        cin >> a >> b >> s;
        solve(s, a, b);
    }

    return 0;
}