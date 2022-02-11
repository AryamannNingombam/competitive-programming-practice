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

bool check_for_magic_number(string &s)
{
    int current_index = 0;
    const int size = s.size();
    while (current_index < size)
    {
        if (s[current_index] != '1')
            return false;
        //we can keep a check for next two;
        if (current_index < size - 2)
        {
            if (s[current_index + 1] == '4' && s[current_index + 2] == '4')
            {
                current_index += 3;
            }
            else if (s[current_index + 1] == '4')
            {
                current_index += 2;
            }
            else
            {
                current_index++;
            }
        }
        //we can keep a check for next
        else if (current_index < size - 1)
        {
            if (s[current_index + 1] == '4')
                current_index += 2;
            else
            {
                current_index++;
            }
        }
        else
        {
            current_index++;
        }
    }

    return true;
}

int main()
{
    string input;
    cin >> input;
    cout << (check_for_magic_number(input) ? "YES" : "NO") << '\n';

    return 0;
}