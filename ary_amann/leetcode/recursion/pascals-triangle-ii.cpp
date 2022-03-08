class Solution
{
    map<int, vector<int>> hash;

public:
    vector<int> getRow(int rowIndex)
    {
        if (hash.find(rowIndex) != hash.end())
            return hash[rowIndex];
        if (rowIndex == 0)
            return {1};
        vector<int> previous = getRow(rowIndex - 1);
        vector<int> result;
        result.push_back(1);
        for (int i = 0; i < rowIndex - 1; i++)
            result.push_back(previous[i] + previous[i + 1]);
        result.push_back(1);
        hash[rowIndex] = result;
        return result;
    }
};