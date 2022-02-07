#include <iostream>
#include <algorithm>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n, l;
    float dist=0;
    float max_dist=-1;
    cin>>n;
    cin>>l;
    int lant[n];

    for(int i=0;i<n;i++){
        cin>>lant[i];
    }

    sort(lant,lant + n);

    for(int i=0;i<n-1;i++){
        dist = lant[i+1]-lant[i];
        max_dist = fmax(max_dist,dist);
    }

    max_dist=fmax(max_dist/2,fmax(lant[0],l-lant[n]));
    cout << fixed << setprecision(10)<< max_dist;

}
