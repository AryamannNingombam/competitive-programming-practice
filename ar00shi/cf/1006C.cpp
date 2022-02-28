//Three Parts of the Array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unsigned long long sum1 = 0, sum2 = 0, ans = 0;
    int L = 0, R = n - 1;
    while (L - 1 <= R) {
        if (sum1 == sum2) {
            ans = sum1;
            sum1 += a[L];
            sum2 += a[R];
            L += 1;
            R -= 1;
        } else if (sum1 < sum2) {
            sum1 += a[L];
            L += 1;
        } else {
            sum2 += a[R];
            R -= 1;
        }
    }
    cout << ans << '\n';
}
