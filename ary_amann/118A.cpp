#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (unsigned int i = 0; i < s.size(); ++i)
    {   s[i] = tolower(s[i]);
        if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
            s[i] = '0';
    }
    for (unsigned int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
            cout << '.' << s[i];
    }


return 0;
}