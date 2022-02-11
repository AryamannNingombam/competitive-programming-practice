
//Two Cakes
#include <iostream>
using namespace std;

int main()
{
    int n, a, b, count=0;
    cin>>n>>a>>b;

        count  = 0;
        for(int i=1;i<n;i++)
            count = max(min(a/i,b/(n-i)),count);
        cout<<count<<endl;

}
