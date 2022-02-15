//Vasya and Books
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,j=0;
    cin>>n;
    int a[n],b[n],u[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    for(int i=0; i<n; i++){
        int x = b[i];
        if(u[x]==true){
            cout<<"0"<<" ";
            continue;
        }
        int count=0;
        while(true){
            ++count;
            u[a[j]]=true;
            if(a[j] == x) break;
			++j;
        }

        ++j;

        cout<<count<<" ";


    }
}
