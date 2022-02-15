//Perfect Team
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q,c,m,x,t,ans;
    cin >> q;
    for(int i=0;i<q;i++){
        cin>>c;
        cin>>m;
        cin>>x;
        t=min(c,m);
        if(t<=x)ans=t;
        else {
            ans=(x+c+m)/3;
            if(ans>t)ans=t;
        }
        cout<<ans<<endl;
    }

}
