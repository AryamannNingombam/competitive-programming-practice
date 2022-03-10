class Solution
{
    vector<int> merge(vector<int> l, vector<int> r)
    {
        vector<int> res;
        int i = 0, j = 0;
        while (i < l.size() && j < r.size())
        {
            if (l[i] <= r[j])
            {
                res.push_back(l[i]);
                i++;
            }
            else
            {
                res.push_back(r[j]);
                j++;
            }
        }
        while (i < l.size())
        {
            res.push_back(l[i]);
            i++;
        }
        while (j < r.size())
        {
            res.push_back(r[j]);
            j++;
        }
        return res;
    }
    vector<int> sort_vector(vector<int> nums)
    {
        if (nums.size() <= 1)
            return nums;
        int mid = nums.size() / 2;
        vector<int> l = vector<int>(nums.begin(), nums.begin() + mid);
        vector<int> r = vector<int>(nums.begin() + mid, nums.end());
        return merge(sort_vector(l), sort_vector(r));
    }

public:
    vector<int> sortArray(vector<int> &nums)
    {
        return sort_vector(nums);
    }
};