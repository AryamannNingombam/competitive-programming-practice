// @LINK: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        const int size = nums.size();

        if (size == 0)
            return {-1, -1};
        if (size == 1 && nums[0] != target)
            return {-1, -1};

        int first_index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (first_index == size || nums[first_index] != target)
            return {-1, -1};
        int second_index = first_index;
        while (second_index < size && nums[second_index] == target)
            second_index++;
        return {first_index, second_index - 1};
    }
};

int main()
{
    int size;
    cin >> size;
    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    vector<int> result = Solution().searchRange(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}