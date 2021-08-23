#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int result = a * b * c;
    result = max(result, a * b + c);
    result = max(result, a * (b + c));
    result = max(result, a + b * c);
    result = max(result, (a + b) * c);
    result = max(result, a + b + c);
    cout << result << '\n';
    return 0;
}