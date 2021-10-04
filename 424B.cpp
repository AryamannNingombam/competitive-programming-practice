#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

 long double return_distance(long double x, long double y)
{
    return sqrtl(powl(x, 2) + powl(y, 2));
}

int main(){
    cout<< setprecision(6);
    long long size,current,x,y,pop;
    cin >> size >> current;
    vector<pair<long double,long>> arr(size);
    for (int i=0;i<size;i++){
        cin>>x>>y>>pop;
        arr[i] = {return_distance(x,y),pop};
        
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<size;i++){
        current += arr[i].second;
        if (current>=1000000){
            cout << arr[i].first << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';

    return 0;
}