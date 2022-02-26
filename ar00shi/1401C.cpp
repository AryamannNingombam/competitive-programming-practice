#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    
    vector<int> b= a;
    sort(b.begin(), b.end());
    int g = b[0];
    
    bool flag = true;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        if (a[i] % g >0) {
          flag = false;
          break;
        }
      }
    }
    
    cout << (flag ? "YES" : "NO") << '\n';
  }
}
 
 
//bhai kya op logic pls worship this qs