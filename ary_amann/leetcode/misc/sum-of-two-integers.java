class Solution {
    public int getSum(int x, int y) {
        while(y!=0){
            int temp=(x&y)<<1;
            x=x^y;
            y=temp;
        }
        return x;
    }
}