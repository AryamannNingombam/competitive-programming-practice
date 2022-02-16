#include <bits/stdc++.h>
using namespace std;

//logic is correct but chal nahi raha idk why, will c l8r
class Solution {
public:
    void setZeroes(vector<vector<int> >& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        // int r=3;
        // int c=3;
        bool extra=false;
        int i,j;

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(matrix[r][c]==0){
                    matrix[0][c]=0;
                    if(r>0){
                        matrix[r][0]=0;
                    }
                    else{
                        extra=true;
                    }
                }
            }
        }

        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if( matrix[0][c]==0 ||  matrix[r][0]==0){
                    matrix[r][c]=0;

                }
            }}

        if( matrix[0][0]==0 ){
            for(i=0;i<r;i++){
                    matrix[r][0]=0;

            }
        }

        if(extra){
            for(i=0;i<c;i++){
                matrix[0][c]=0;
            }
        }


    }
    int main() {

       vector<vector<int> > matrix={{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    //int n = matrix.size();
    //int m = matrix[0].size();
    setZeroes(matrix);
    }
};
