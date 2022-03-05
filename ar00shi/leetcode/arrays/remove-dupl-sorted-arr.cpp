class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    set <int> hash;
      for (int i = 0; i < nums.size(); i++) {
        hash.insert(nums[i]);
      }
      int k = hash.size();
      int j = 0;
      for (int i: hash) {
        nums[j] = i;
          j++;
      }
      return k;
    }
};