#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <map>
#include <cmath>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;

bool return_result(string &s, int lower_bound, int upper_bound)
{
    const char first_target = s[lower_bound];
    const char second_target = s[upper_bound];
    for (int i = 0; i < lower_bound; i++)
    {
        if (s[i] == first_target)
            return true;
    }
    for (int i = upper_bound + 1; i < s.size(); i++)
    {
        if (s[i] == second_target)
            return true;
    }

    return false;
}

int main()
{
    int tests, tests2, size, lower_bound, upper_bound;
    cin >> tests;
    string s;
    for (int i = 0; i < tests; i++)
    {
        cin >> size >> tests2 >> s;

        for (int i = 0; i < tests2; i++)
        {
            cin >> lower_bound >> upper_bound;
            cout << (return_result(s, --lower_bound, --upper_bound) ? "YES" : "NO") << '\n';
        }
    }

    return 0;
}