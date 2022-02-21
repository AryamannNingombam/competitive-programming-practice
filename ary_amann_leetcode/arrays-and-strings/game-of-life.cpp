class Solution
{
public:
    void gameOfLife(vector<vector<int>> &board)
    {
        int n = board.size(), m = board[0].size();

        int dx[] = {0, 0, -1, 1, 1, -1, 1, -1};
        int dy[] = {1, -1, 0, 0, 1, -1, -1, 1};

        // Traverse mark as such that, you can identify the changed ones
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int cnt = 0;
                for (int k = 0; k < 8; k++)
                {
                    int nxr = i + dx[k], nxc = j + dy[k];
                    if (nxr < 0 || nxc < 0 || nxr >= n || nxc >= m)
                        continue;
                    // if marked as 3, means this is changed from 0->1, so count it
                    if (board[nxr][nxc] == 3 || board[nxr][nxc] == 1)
                        cnt++;
                }

                // Mark as 2 if 0 -> 1 state change
                if (board[i][j] == 0 && cnt == 3)
                    board[i][j] = 2;
                // Mark as 3 if 1 -> 0 state change
                else if (board[i][j] && (cnt > 3 || cnt < 2))
                    board[i][j] = 3;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            { // 2 means it should be 1 , similarly for 3 it sould be 0
                if (board[i][j] == 2)
                    board[i][j] = 1;
                else if (board[i][j] == 3)
                    board[i][j] = 0;
            }
        }
    }
};