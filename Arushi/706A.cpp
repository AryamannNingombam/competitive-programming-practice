//Beru Taxi
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,x,y,n,i,v;
   double ans=10000000,dis,time;
   cin>>a;
   cin>>b;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>x>>y>>v;
       dis=(a-x)*(a-x)+(b-y)*(b-y);
       dis=sqrt(dis);
       time=dis/v;
       ans=min(ans,time);
   }
   printf("%.20lf\n",ans);
   return 0;
}
