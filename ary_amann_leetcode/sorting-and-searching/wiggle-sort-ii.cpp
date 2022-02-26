#include <queue>
#include <vector>

using namespace std;

class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        priority_queue<int> q;
        for (auto &i : nums)
            q.push(i);
        const int size = nums.size();
        int i;
        for (i = 1; i < size; i += 2)
        {
            nums[i] = q.top();
            q.pop();
        }
        if (i == size)
            i--;
        else
            i -= 3;
        for (int j = 0; j <= i; j += 2)
        {
            nums[j] = q.top();
            q.pop();
        }
    }
};