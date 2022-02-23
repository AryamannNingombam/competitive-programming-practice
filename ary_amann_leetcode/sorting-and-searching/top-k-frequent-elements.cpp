class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> hash;
        for (auto &i : nums)
            hash[i]++;
        vector<int> result;
        priority_queue<pair<int, int>> heap;
        for (auto i = hash.begin(); i != hash.end(); i++)
        {
            heap.push({i->second, i->first});
        };
        for (int i = 0; i < k; i++)
            result.push_back(heap.top().second), heap.pop();
        return result;
    }
};