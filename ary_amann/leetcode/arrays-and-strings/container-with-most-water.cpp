class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        const int size = height.size();
        int l = 0, r = size - 1;
        int result = -1;
        while (l < r)
        {
            int temp = min(height[l], height[r]) * (r - l);
            result = max(result, temp);
            if (height[l] > height[r])
                r--;
            else
                l++;
        }

        return result;
    }
};