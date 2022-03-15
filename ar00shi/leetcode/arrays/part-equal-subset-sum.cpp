// class Solution {
// public:
//     bool canPartition(vector<int>& nums) {
//         int i=0;
//         int j=nums.size()-1;
//         int sum1=nums[i],sum2=nums[j];
//         sort(nums.begin(), nums.end());
//         i++;
//         j--;
        
//         while(i<j){
//             if(sum1<sum2){
//                 sum1+=nums[i];
//                 i++;
//             }
//             else{
//                 sum2+=nums[j];
//                 j--;
//             }
//              if(sum1==sum2){
//                 break;
//             }
//         }
        
//         if(sum1==sum2){
//             return true;
//         }
//         return false;
        
//     }
// };


// this dont work this is dp problem, badme revisit this