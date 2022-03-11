class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> hash;
        hash.insert({'I', 1});
        hash.insert({'V', 5});
        hash.insert({'X', 10});
        hash.insert({'L', 50});
        hash.insert({'C', 100});
        hash.insert({'D', 500});
        hash.insert({'M', 1000});
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (hash[s[i]] < hash[s[i + 1]])
            {
                ans -= hash[s[i]];
            }
            else
            {
                ans += hash[s[i]];
            }
        }
        return ans;
    }
};

// the hash[s[i]]<hash[s[i+1]] is gg, should have been obv to me brdr