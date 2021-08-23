#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
string check(int);
 
 
int main(){
    int weight{};
    
    cin >> weight;
    cout <<check(weight) << endl;
 
 
return 0;
 
 
}
 
 
string check(int weight){
    if (weight<3) return "NO";
        
        
    return ((weight%2==0) ? "YES" : "NO" );
    
}