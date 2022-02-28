class Solution {
public:
    void nextPermutation(vector<int>& v) {


            cout <<"[";

            next_permutation(v.begin(),v.end());
            for(int i=0;i<v.size();i++){
            cout<<v[i]<<",";
            }
            cout <<"]";
    }

};

//this solution is lowkey a scam cause i be using ext function
