#include <iostream>
#include <vector>

using namespace std;

long long get_sum(long long n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    long long n, k;
    cin >> n >> k;
    long long i;
    
    long long temp_sum = 0;
    for (i = 1; i < n; i++)
    {
        temp_sum += i;
        if (temp_sum - (n - i) == k)break;
    };
    cout << n - i << '\n';

    return 0;
}