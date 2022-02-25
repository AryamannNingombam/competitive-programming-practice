class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        const int m = matrix.size();
        const int n = matrix[0].size();
        int i = 0, j = n - 1;
        while (i < m && j > -1)
        {
            if (matrix[i][j] == target)
                return true;
            if (matrix[i][j] > target)
                j--;
            else
                i++;
        }

        return false;
    }
};