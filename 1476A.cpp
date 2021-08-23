#include <iostream>
#include <vector>

using namespace std;
using int_vector = vector<int>;

int main()
{
    long long test_cases, n, k;
    cin >> test_cases;
    for (int _ = 0; _ < test_cases; _++)
    {
        cin >> n >> k;
        long long temp = (n + k - 1) / k;
        k *= temp;

        cout << (k + n - 1)/n << '\n';
    }

    return 0;
}