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

int get_num(char c)
{
    return c - '0';
}

string return_result(string &s, int size)
{
    int number_of_odd = 0;
    for (auto i : s)
        number_of_odd += (get_num(i) % 2);
    if (number_of_odd < 2)
        return "-1";
    int total_odd_yet = 0;
    int cap = 0;
    while (cap < size)
    {
        if (get_num(s[cap]) % 2)
            total_odd_yet++;
        if (total_odd_yet == 2)
            break;
        cap++;
    }

    return s.substr(0, cap + 1);
}

int main()
{
    int tests, size;
    string s;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> size;
        cin >> s;
        cout << return_result(s, size) << '\n';
    }

    return 0;
}