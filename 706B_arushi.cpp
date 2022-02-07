#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    int x[n];

    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    cin>>q;
    int m[q],count[q];

    for(int i=0;i<q;i++){
        cin>>m[i];
    }

    for(int i=0;i<q;i++){
        count[i]=0;
    }

    //sort(x,x+n);


    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            if(m[j]>=x[i])
                count[j]++;
        }
    }

    for(int i=0;i<q;i++){
        cout<<count[i]<<endl;
    }

}
