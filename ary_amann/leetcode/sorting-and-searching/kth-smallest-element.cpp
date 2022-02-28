int kthSmallest(vector<vector<int>> &matrix, int k)
{
    priority_queue<int> q;
    k = matrix.size() * matrix[0].size() - k;
    for (auto &v : matrix)
        for (auto &e : v)
            q.push(e);
    while (--k >= 0)
        q.pop();
    return q.top();
}