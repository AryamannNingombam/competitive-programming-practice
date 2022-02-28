#include <iostream>
#include <string>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    string s1, s2;
    while (test_cases--)
    {
        cin >> s1 >> s2;
        bool found[26] = {false};
        for (auto &i : s1)
        {
            found[i - 97] = true;
        }
        bool found_common = false;
        for (auto &i : s2)
        {
            if (found[i - 97])
            {
                found_common = true;
                cout << "YES\n";
                break;
            }
        }
        if (!found_common)
        {
            cout << "NO\n";
        }
    }

    return 0;
}