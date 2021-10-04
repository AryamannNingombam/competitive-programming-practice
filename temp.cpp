#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int p,q;
	cin >> p >> q;
	int result =0;
	int arr[p];
	long long sum=0;
	for (int i=0;i<p;i++){
		cin >> arr[i];
	}
	for (int i=0;i<p;i++){
		if (arr[i]/q>0)result+=arr[i]/q;
		sum+=arr[i]%q;
		
	}
	result += ceil((float)(sum))/q;
 	
	cout << result << '\n';
	return 0;
}