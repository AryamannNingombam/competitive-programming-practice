class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // sort(strs.begin();strs.end());
        string x=strs[0];
        for(int i=1; i< strs.size();i++){
            while(strs[i].find(x)!=0){
                x=x.substr(0,x.length()-1);
                if(x.empty()){
                    return "";
                }
            }
            
        }
        
        return x;
        
    }
};