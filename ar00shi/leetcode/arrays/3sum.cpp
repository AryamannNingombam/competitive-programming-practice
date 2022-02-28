 #include <bits/stdc++.h>
using namespace std;
        vector<vector<int>> threeSum(vector<int>& A) {

        vector<vector<int>> ans;

        if(A.size()==0){
            cout<<"[]";
        }

        for(int i=0;i<A.size();i++){

            int x=A[i];
            int one = 0;
            int two = A.size() - 1;


            while (one < two) {
                if (A[one] + A[two] == (x*-1)){
                    ans[i].push_back(one);
                    ans[i].push_back(two);
                    ans[i].push_back(x);
                }
                else if (A[one] + A[two] < x)
                    one++;
                else
                    two--;
            }
         }
        return ans;

    }

    int main(){
        vector<int> vect;
        vect.push_back(-1);
        vect.push_back(0);
        vect.push_back(1);
        vect.push_back(2);
        vect.push_back(-1);
        vect.push_back(-4);
        threeSum(vect);
    }

