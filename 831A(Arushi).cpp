#include <iostream>
using namespace std;

int main()
{
    int n,flag=1;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int ptr1=0;
    for(int i=0;i+1<n;i++){
        if(arr[i]<arr[i+1]){
            ptr1++;
            continue;
        }
        break;
    }

    int ptr2=n-1;
    for(int i=n-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            ptr2--;
            continue;
        }
        break;
    }

    for(int i =ptr1; i<ptr2; i++){
        if(arr[i]==arr[i+1] || ptr1==ptr2 ){
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }

    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}
