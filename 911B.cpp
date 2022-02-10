#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int count = 0;
    for (int i = 1; i < n; i++)
        count = max(min(a / i, b / (n - i)), count);
    cout << count << endl;
    return 0;
}