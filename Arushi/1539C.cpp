//Stable Groups
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n,k,x,group=0;
    cin>>n;
    cin>>k;
    cin>>x;
    int a[n];
    int z=2*x;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a + n);

    for(int i=0;i<n;i++){
        float diff = a[i+1]-a[i];
        if(diff>x){
            k=k-(ceil(diff/x)-1);
            if(k<0){
                group++;
                k++;
            }

        }

    }

    cout<<group;

}
