class Solution {
public:
    int trap(vector<int>& nums) {
      int n = nums.size();
      int ans = 0;
      for (int i = 0; i < n; i++) {
        int j = i;
        int leftMax = 0, rightMax = 0;
        while (j >= 0) {
          leftMax = max(leftMax, nums[j]);
          j--;
        }
        j = i;
        while (j < n) {
          rightMax = max(rightMax, nums[j]);
          j++;
        }
        ans += min(leftMax, rightMax) - nums[i];
      }
      return ans;
    }
};

//not my code and i honestly dont get it,
//will try to figure out some other day when i have more patience