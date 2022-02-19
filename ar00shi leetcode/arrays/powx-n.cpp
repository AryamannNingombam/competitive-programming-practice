class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;

        if(n<0){
            n=n*-1;
            while(n>0){
            ans=ans*x;
            n--;
            }
            return (1/ans);
        }

        while(n>0){
            ans=ans*x;
            n--;
        }

        return ans;
    }
};
