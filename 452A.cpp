#include <iostream>
#include <string>
#include <vector>

using namespace std;

const vector<string> chars = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

int main()
{
    int size;
    string input;
    cin >> size;
    vector<string> reduced, temp;
    for (string s : chars)
    {
        if (s.size() == size)
            reduced.push_back(s);
    };

    cin >> input;
    string result;
    if (size == 6)
        result = chars[3];
    else if (size == 8)
        result = chars[0];
    else
    {
        int max_matching = -1, temp_counter = 0;
        for (auto &s : chars)
        {
            if (s.size() == size)
            {
                for (int c = 0; c < size; c++)
                {
                    if (s[c] == input[c])
                        temp_counter++;
                }
                if (temp_counter > max_matching)
                {
                    max_matching = temp_counter;
                    result = s;
                }
                temp_counter = 0;
            }
        }
    }
    cout << result << '\n';

    return 0;
}