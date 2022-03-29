class Solution
{
public:
    int titleToNumber(string columnTitle)
    {

        int col = 0;
        int size = columnTitle.size();
        for (int i = size - 1; i > -1; i--)
        {
            col += (columnTitle[i] - 'A' + 1) * pow(26, size - i - 1);
        }
        return col;
    }
};