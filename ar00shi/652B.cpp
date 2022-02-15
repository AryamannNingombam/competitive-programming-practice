//Z-Sort
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k = n-1, j =0;
    int arr[n];
    int arr2[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr + n);

    for(int i = 0; i < n; i++)
    {

        if(i%2==0){
           arr2[i]=arr[j];
            j++;
        }
        else{
            arr2[i]=arr[k];
            k--;
        }
    }



    for (int i = 0; i < n; i++)
      cout << arr2[i]<<" ";

}
