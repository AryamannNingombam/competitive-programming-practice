class Solution
{
public:
    vector<vector<string>> res;
    void recurs(int n, int m, vector<string> curr)
    {
        if (n == 0)
        {
            res.push_back(curr);
            return;
        }

        for (int i = 0; i < m; i++)
        {
            int x = curr.size(), y = i, flag = 1; // checking this location is safe or not

            // checking in all 8 direction for queen
            int x1[8] = {1, -1, -1, 1, 0, 0, 1, -1};
            int y1[8] = {1, -1, 1, -1, 1, -1, 0, 0};

            int a = curr.size(), b = m;

            for (int j = 0; j < 8; j++)
            {
                int l = x + x1[j], p = y + y1[j];

                while (l < a && p < b && l >= 0 && p >= 0)
                {
                    if (curr[l][p] == 'Q')
                    {
                        flag = 0;
                        break;
                    }
                    l += x1[j];
                    p += y1[j];
                }
                if (!flag)
                    break;
            }

            if (flag)
            {
                string s(m, '.');
                s[y] = 'Q';

                curr.push_back(s);

                recurs(n - 1, m, curr);

                curr.pop_back(); // back track;
            }
        }
        return;
    }

    int totalNQueens(int n)
    {
        recurs(n, n, {});
        return res.size();
        // for N-Queens 1 return res
    }
};