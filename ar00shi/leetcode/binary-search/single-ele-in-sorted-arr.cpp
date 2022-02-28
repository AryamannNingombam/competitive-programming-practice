// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int size = nums.size();
//         int ans;
//         for (int i = 0; i < size; i += 2) {
//             if (nums[i] != nums[i + 1]) {
//                 ans = nums[i];
//                 return ans;
//             }
//         }
        
//         if (nums[size - 2] != nums[size - 1]){
//             ans = nums[size-1];
//         }
        
//         return ans;
        
//     }
// };
//ghatiya method but still wont work some heap buffer overflow


//XOR bc gg tere code ws me yeh qs tha bhi jinit ne sikhaya lmao

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size();
        int XOR = 0;
        for (int i = 0; i < size; i++) {
            XOR = XOR ^ nums[i];
        }
        
        return XOR;

        
    }
};

//binary search method for this is gg, i was thinking on the right track it has to do with mid ke left me same hai ki right me
