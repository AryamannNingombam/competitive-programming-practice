#include <iostream>
#include <string>

using namespace std;

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int test_cases, length, different = 0;
    pair<int, int> indexes = {-1, -1};
    cin >> test_cases;
    string s1, s2;
    while (test_cases--)

    {
        indexes = {-1, -1};
        different = 0;
        cin >> length;
        cin >> s1 >> s2;
        for (int i = 0; i < length; i++)
        {
            bool temp = (s1[i] != s2[i]);
            different += temp;
            if (temp)
            {
                if (indexes.first == -1)
                    indexes.first = i;
                else
                    indexes.second = i;
            }
        }

        if (different != 1 && different != 2)
        {
            cout << "No\n";
        }
        else if (different == 1)
        {
            swap(s1[indexes.first], s2[indexes.first]);
            if (s1 == s2)
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else
        {
            string temp_s1 = s1, temp_s2 = s2;
            swap(temp_s1[indexes.first], temp_s2[indexes.second]);
            if (temp_s1 == temp_s2)
            {
                cout << "Yes\n";
            }
            else
            {
                temp_s1 = s1, temp_s2 = s2;
                swap(temp_s1[indexes.second], temp_s2[indexes.first]);
                if (temp_s1 == temp_s2)
                {
                    cout << "Yes\n";
                }
                else
                {
                    cout << "No\n";
                }
            }
        }
    }

    return 0;
}