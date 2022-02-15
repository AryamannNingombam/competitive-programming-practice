#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, bool> hash;
        for (int i : nums)
        {
            if (hash[i])
                return true;
            hash[i] = 1;
        }
        return false;
    }
};