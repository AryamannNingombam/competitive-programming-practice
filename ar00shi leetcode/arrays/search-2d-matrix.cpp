class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {

        vector<int> v;

        int col = m.size()-1;
        int row =m[0].size()-1;

        // cout<<row;
        // cout<<col;

        if(row<2 || col<2){
            return false;
        }

        for(int i=0;i<=col;i++){

            if(m[i][0]<=t && m[i][row]>=t){
                v=m[i];
            }


        }


        for(int i=0;i<=row;i++){
            if(v[i]==t){
                return true;
            }
        }

        return false;


    }
};//iska binary search wala method is op logic think about how the segregation (high/n and high%n wali cheez
