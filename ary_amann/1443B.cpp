#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int tests, a, b;
    string s;
    cin >> tests;
    while (tests--)
    {
        cin >> a >> b >> s;
        const int length = s.length();
        int first = -1, last = -1;
        for (int i = 0; i < length; i++)
        {
            if (s[i] == '1')
            {
                first = i;
                break;
            }
        }

        for (int i = length - 1; i > -1; i--)
        {
            if (s[i] == '1')
            {
                last = i;
                break;
            }
        }
        if (first == -1 && last == -1)
        {
            cout << 0 << '\n';
            continue;
        }
        int ans = a;
        for (int i = first; i <= last; i++)
        {
            int temp = 0;
            while (s[i] == '0')
                temp++, i++;
            ans += min(a, b * temp);
        }
        cout << ans << '\n';
    }

    return 0;
}