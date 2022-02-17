#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";
        int counter = 0;
        string s = "";
        while (n--)
        {
            if (s.size() == 0)
            {
                s = "1";
                continue;
            }
            string temp_result = "";
            char current = s[0];
            for (int i = 0; i < s.size();)
            {

                while (i < s.size() && s[i] == current)
                    i++, counter++;
                temp_result += to_string(counter) + current;
                current = s[i];
                counter = 0;
            }
            s = temp_result;
        }
        return s;
    }
};

int main()
{
    int num;
    cin >> num;
    cout << Solution().countAndSay(num) << endl;
    return 0;
}