#include <iostream>
#include <string>

using namespace std;

void remove_beginning_WUB(string &s)
{
    while (s.size() >= 3 && s.substr(0, 3) == "WUB")
        s = s.substr(3);
    return;
}

void remove_ending(string &s)
{
    while (s.size() >= 3 && s.substr(s.size() - 3) == "WUB")
    {
        s = s.substr(0, s.size() - 3);
    }
    return;
}

void remove_middle(string &s)
{
    int first_pointer = 0;

    bool added = false;
    while (first_pointer + 3 < s.size())
    {
        // cout << s.substr(first_pointer,3) << '\n';
        if (s.substr(first_pointer, 3) == "WUB")
        {
            if (!added)
            {
                s = s.substr(0, first_pointer) + " " + s.substr(first_pointer + 3);
                added = true;

                first_pointer++;
            }
            else
                s = s.substr(0, first_pointer) + s.substr(first_pointer + 3);
        }
        else
        {

            first_pointer++;
            added = false;
        }
    }
    return;
}

int main()
{
    string input;
    cin >> input;
    remove_beginning_WUB(input);
    remove_ending(input);
    remove_middle(input);
    cout << input;
    return 0;
}