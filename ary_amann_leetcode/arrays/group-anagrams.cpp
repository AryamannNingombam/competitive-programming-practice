#include <vector>
#include <string>
#include <map>

using namespace std;

class Solution
{
public:
    string return_sorted(string s)
    {
        sort(s.begin(), s.end());
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<string, vector<string>> hash;
        for (string s : strs)
        {
            hash[return_sorted(s)].push_back(s);
        }
        vector<vector<string>> result;
        for (auto i = hash.begin(); i != hash.end(); i++)
        {
            result.push_back(i->second);
        };
        return result;
    }
};