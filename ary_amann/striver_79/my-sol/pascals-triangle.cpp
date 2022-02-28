#include <vector>

using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        if (numRows == 1)
            return {
                {1}};
        if (numRows == 2)
            return {
                {1},
                {1, 1}};
        vector<vector<int>> result = {
            {1},
            {1, 1}};
        for (int i = 2; i < numRows; i++)
        {
            result.push_back({1});
            for (int j = 1; j < i; i++)
            {
                result[i].push_back(result[i - 1][j - 1] + result[i - 1][j]);
            }
            result[i].push_back(1);
        }

        return result;
    }
};