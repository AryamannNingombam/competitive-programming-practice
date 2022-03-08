class Solution
{
public:
    vector<char> return_result(vector<char> &s, int index)
    {
        if (index >= s.size() / 2)
            return s;
        char temp = s[index];
        s[index] = s[s.size() - 1 - index];
        s[s.size() - 1 - index] = temp;
        return return_result(s, index + 1);
    }
    void reverseString(vector<char> &s)
    {
        s = return_result(s, 0);
    }
};