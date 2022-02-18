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
