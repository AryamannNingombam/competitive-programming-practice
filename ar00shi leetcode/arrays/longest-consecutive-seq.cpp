class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size=nums.size();
        
         if(size==0){
             return 0;
         }
        
        sort(nums.begin(), nums.end());
        int count=1, maxCount=1;
        
        for (int i = 1; i < size; i++) {
            if (nums[i] != nums[i-1]) {
                if (nums[i] == nums[i-1]+1) {
                    count += 1;
                }
                else {
                    maxCount = max(count, maxCount);
                    count = 1;
                }
            }
        }
        
         return max(count, maxCount);
        
        
    }
};