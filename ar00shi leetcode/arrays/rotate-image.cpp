class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n=m.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int tmp = m[j][i];
                m[j][i] = m[i][j];
                m[i][j] = tmp;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int tmp = m[i][j];
                m[i][j] = m[i][n - j - 1];
                m[i][n - j - 1] = tmp;
            }
        }


        //for qs like this think if a combination of reverse and
        //transpose etc etc can arrive us at a solution


    }
};
