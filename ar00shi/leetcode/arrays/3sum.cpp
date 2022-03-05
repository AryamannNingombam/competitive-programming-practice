//  #include <bits/stdc++.h>
// using namespace std;
//         vector<vector<int>> threeSum(vector<int>& A) {

//         vector<vector<int>> ans;

//         if(A.size()==0){
//             cout<<"[]";
//         }

//         for(int i=0;i<A.size();i++){

//             int x=A[i];
//             int one = 0;
//             int two = A.size() - 1;


//             while (one < two) {
//                 if (A[one] + A[two] == (x*-1)){
//                     ans[i].push_back(one);
//                     ans[i].push_back(two);
//                     ans[i].push_back(x);
//                 }
//                 else if (A[one] + A[two] < x)
//                     one++;
//                 else
//                     two--;
//             }
//          }
//         return ans;

//     }

//     int main(){
//         vector<int> vect;
//         vect.push_back(-1);
//         vect.push_back(0);
//         vect.push_back(1);
//         vect.push_back(2);
//         vect.push_back(-1);
//         vect.push_back(-4);
//         threeSum(vect);
//     }

//ningo's code works as below mine above is same logic but some problems lol
//think i was drunk when i wrote that also alove gives index as result i think

// @LINK: https://leetcode.com/problems/3sum/
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        if (nums.size() < 3)
            return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        int first_pointer, second_pointer;
        const int size = nums.size();
        for (int i = 0; i < size; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            first_pointer = i + 1;
            second_pointer = size - 1;
            while (first_pointer < second_pointer)
            {
                const int sum = nums[i] + nums[first_pointer] + nums[second_pointer];
                if (sum < 0)
                    first_pointer++;
                else if (sum > 0)
                    second_pointer--;
                else
                {
                    result.push_back({nums[i], nums[first_pointer], nums[second_pointer]});
                    second_pointer -= 1;
                    while (first_pointer < second_pointer && nums[second_pointer] == nums[second_pointer + 1])
                        second_pointer--;
                }
            }
        }
        return result;
}
};
