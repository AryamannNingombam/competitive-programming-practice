#include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &a , int m , vector <int> &b , int n)
{
    int i = m - 1 , j = n - 1 , idx = m + n - 1;
    while(i >= 0 && j >= 0)
    {
        if(a[i] >= b[j])
        {
            a[idx] = a[i];
            i--;
        }
        else
        {
            a[idx] = b[j];
            j--;
        }
        idx--;
    }
    while(i >= 0)
        a[idx--] = a[i--];
    while(j >= 0)
        a[idx--] = b[j--];
    return;
}
int main()
{
    vector <int> a = {1 , 2 , 3};
    vector <int> b = {2 , 6 , 7};
    int m = 3 , n = 3;
    a.resize(m + n);
    merge(a , m , b , n);
    for(int &x : a)
        cout << x << " ";
    return 0;
}


/*

class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {

        vector<int> ans;
        int i=0,j=0;

        if(n==0){
            for(i=0;i<n;i++){
                cout<<nums1[i];
            }
        }

        if(m==0){
            for(i=0;i<n;i++){
                cout<<nums2[i];
            }
        }

        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<n){
            ans.push_back(nums1[i--]);
        }

        while(j<m){
            ans.push_back(nums2[j--]);
        }


        for(i=0;i<n;i++){
            cout<<ans[i];
        }

        return;

    }
};
*/

