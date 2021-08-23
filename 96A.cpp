#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;
    int counter = 1;
    bool printed = false;
    char current = input[0];

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == current)
        {
            counter++;
            if (counter >= 7)
            {
                printed = true;
                cout << "YES\n";
                break;
            }
        }
        else
        {
            counter = 1;
            current = input[i];
        }
    }

    if (!printed)
    {
        cout << "NO\n";
    }

    return 0;
}