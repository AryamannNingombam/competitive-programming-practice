#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    unordered_map<char, int> m;
    int max_result = -1, left = 0, right = 0;
    while (right < n)
    {
        if (s[right] == 'b' && m['b'] < k)
            m[s[right++]]++;
        else if (s[right] == 'a')
            right++;
        else
            m[s[left++]]--;
        max_result = max(max_result, right - left);
    }
    right = 0;
    left = 0;
    m.clear();
    while (right < n)
    {
        if (s[right] == 'a' && m['a'] < k)
            m[s[right++]]++;
        else if (s[right] == 'b')
            right++;
        else
            m[s[left++]]--;
        max_result = max(max_result, right - left);
    }
    cout << max_result << '\n';

    return 0;
}
