class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        int counter = 0;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '(')
            {
                counter++;
            }
            else if (s[i] == ')')
            {
                if (counter == 0)
                {
                    s[i] = '#';
                }
                else
                    counter--;
            }
        }
        counter = 0;
        for (int i = s.size() - 1; i > -1; i--)
        {
            if (s[i] == ')')
                counter++;
            else if (s[i] == '(')
            {
                if (counter == 0)
                {
                    s[i] = '#';
                }
                else
                    counter--;
            }
        }

        string new_result = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '#')
                new_result += s[i];
        }
        return new_result;
    }
};
