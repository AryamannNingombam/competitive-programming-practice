#include <iostream>
#include <string>

using namespace std;

int return_size(string &s)
{
    int zero_counter = 0, one_counter = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            zero_counter++;
        else
            one_counter++;
    };
    return abs(zero_counter - one_counter);
}

int main()
{
    int size;
    string s;
    cin >> size;
    cin >> s;
    cout << return_size(s) << '\n';
}