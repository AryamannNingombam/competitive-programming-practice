#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
using namespace std;

string get_result(string &s, int length)
{
    map<string, int> counter;
    string current_max_string, temp;

    int current_max_count = -1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        string temp = s.substr(i, 2);
        counter[temp]++;
        if (current_max_count < counter[temp])
        {
            current_max_count = counter[temp];
            current_max_string = temp;
        }
    }
    return current_max_string;
}

int main()
{
    int length;
    string s;

    cin >> length >> s;
    cout << get_result(s, length) << '\n';
    return 0;
}