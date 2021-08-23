#include <iostream>
#include <string>

using namespace std;

void flip(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        else
        {
            s[i] = toupper(s[i]);
        }
    }

    return;
}

bool first_check(const string &s)
{
    for (auto &i : s)
    {
        if (!isupper(i))
            return false;
    }
    return true;
}

bool second_check(const string &s)
{
    if (isupper(s[0]))
        return false;
    for (int i = 1; i < s.size(); i++)
    {
        if (!isupper(s[i]))
            return false;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (s.size() == 1 || first_check(s) || second_check(s))
        flip(s);
    cout << s << '\n';
    return 0;
}