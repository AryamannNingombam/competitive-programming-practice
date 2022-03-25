class Solution
{
    bool checkValidity(int row, int col, int rows, int cols)
    {
        return row >= 0 && row < rows && col >= 0 && col < cols;
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        const int rows = grid.size();
        const int cols = grid[0].size();
        int row_inc[] = {-1, 0, 0, 1};
        int col_inc[] = {0, -1, 1, 0};
        int counter = 0;
        int row = 0, col = 0;
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (grid[i][j] == '1' && !visited[i][j])
                {
                    visited[i][j] = true;
                    counter++;
                    queue<pair<int, int>> q;
                    q.push(make_pair(i, j));
                    while (!q.empty())
                    {
                        row = q.front().first;
                        col = q.front().second;
                        q.pop();
                        for (int k = 0; k < 4; k++)
                        {
                            int new_row = row + row_inc[k];
                            int new_col = col + col_inc[k];
                            if (checkValidity(new_row, new_col, rows, cols) && grid[new_row][new_col] == '1' && !visited[new_row][new_col])
                            {
                                visited[new_row][new_col] = true;
                                q.push(make_pair(new_row, new_col));
                            }
                        }
                    }
                }
            }
        }

        return counter;
    }
};