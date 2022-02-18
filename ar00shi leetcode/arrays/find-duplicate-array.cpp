class Solution {
public:
    int findDuplicate(vector<int>& n) {
        int size=n.size();
        sort(n.begin(),n.end());
        for(int i=0;i<size;i++){
            if(n[i]==n[i+1]){
                return n[i];
            }
        }
        return 0;
    }
};
/*
#include<bits/stdc++.h>

using namespace std;
int findDuplicate(vector < int > & arr) {
  int n = arr.size();
  int freq[n + 1] = {
    0
  };
  for (int i = 0; i < n; i++) {
    if (freq[arr[i]] == 0) {
      freq[arr[i]] += 1;
    } else {
      return arr[i];
    }
  }
  return 0;
}
*/
//lmao im dumb just use another array to store freq
