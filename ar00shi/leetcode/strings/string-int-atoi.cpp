class Solution {
public:
    int myAtoi(string s) {
        int i=0, flag=0;
        int ans=0, mini=INT_MIN, maxi=INT_MAX;
        while(s[i]==' ') i++;
        if(s[i]=='+' || s[i]=='-')
        {
            if(s[i]=='-')
                flag=1;
            i++;
        }
        
        while(s[i]>='0' && s[i]<='9')
            ans=min(maxi+1,((ans*10)+(s[i++]-'0')));
        if(flag==1)
        {
            ans*=-1;
            ans=max(mini,ans);
        }
        else
            ans=min(maxi,ans);
        return ans;
        
    }
};