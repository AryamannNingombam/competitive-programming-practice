#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int test_cases, first_pointer, second_pointer;
    vector<int> F(s.size() + 1);
    int counter = 0;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            counter++;
        F[i] = counter;
    }
    cin >> test_cases;
    while (test_cases--)
    {   
        cin >> first_pointer >> second_pointer;
        cout << F[second_pointer - 1] - F[first_pointer - 1] << '\n';
    }

    return 0;
}
