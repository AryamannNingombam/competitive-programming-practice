#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int max_length = 0;
    stack<char> stck;
    for (char c : s)
    {
        if (c == '(')
            stck.push('(');
        else
        {
            if (stck.empty())
                continue;
            if (stck.top() == '(')
                max_length+=2, stck.pop();
        }
    }
    cout << max_length << '\n';

    return 0;
}