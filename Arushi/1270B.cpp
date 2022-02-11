//Interesting Subarray
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

  int t;
  cin>>t;

  while(t--){

    int n, flag = 0;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
      cin>>a[i];
    }

    for(int i=1; i<n; i++){
      if(max(a[i], a[i-1]) - min(a[i], a[i-1]) >=2){
        cout<<"YES"<<endl;
        cout<<i<<" "<<i+1<<endl;
        flag = 1;
        break;
      }
    }

    if(!flag){
      cout<<"NO"<<endl;
    }

  }

  return 0;
}
