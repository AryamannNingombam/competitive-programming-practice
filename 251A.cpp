#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
vector<ll> v;

int main()
{
    ll n, elm, d, res, rng;
    cin >> n >> d;
    for (int i = 0; i < n; ++i)
    {
        cin >> elm;
        v.push_back(elm);
    }
    res = 0;
    for (int i = 0; i + 2 < n; ++i)
    {
        rng = lower_bound(v.begin(), v.end(), v[i] + d) - v.begin();
        if (rng == n || v[rng] != v[i] + d)
            rng--;
        const ll between = rng - i - 1;
        res += ((between) * (between + 1)) / 2;
    }
    cout << res << endl;
    return 0;
}