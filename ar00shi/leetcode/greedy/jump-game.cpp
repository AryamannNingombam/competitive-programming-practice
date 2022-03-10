class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int max_reach = nums[0];
        for(int i=1; i<n; i++){
            max_reach--;
            if(max_reach<0) return false; 
            if(max_reach<nums[i]) max_reach = nums[i];
        }
		return true;
    }
};

//very very iffy bro dont 100% geddit