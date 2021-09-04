#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    map<char, int> index;
    int first_pointer = 0;
    int max_result = 0;
    for (int second_pointer = 0; second_pointer < s.size(); second_pointer++)
    {

        if (index.find(s[second_pointer]) != index.end())
        {
            first_pointer = max(first_pointer,index[s[second_pointer]] + 1);
        }

        index[s[second_pointer]] = second_pointer;
        max_result = max(max_result, second_pointer - first_pointer + 1);
    }

    return max_result;
}

int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s) << '\n';
    return 0;
}
