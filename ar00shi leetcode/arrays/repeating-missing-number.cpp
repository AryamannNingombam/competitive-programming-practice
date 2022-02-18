vector<int> find_missing_repeating(vector<int> n)
{
    int size = n.size() + 1;

    vector<int> n2(size, 0);
    vector<int> ans;

    for (int i = 0; i < n.size(); i++)
    {
        n2[n[i]]++;
    }

    for (int i = 1; i <= n.size(); i++)
    {
        if (n2[i] == 0 || n2[i] > 1)
        {
            ans.push_back(i);
        }
    }

    return ans
}
