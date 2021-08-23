#include <iostream>
using namespace std;

bool check_possibility(int total_score, int divide_limit, int subtract_limit)
{
    while (divide_limit > 0 && total_score >= 20)
    {
        total_score = total_score / 2 + 10;
        divide_limit--;
    };
    while (subtract_limit > 0)
    {
        total_score -= 10;
        subtract_limit--;
    };
    return total_score <= 0;
}

int main()
{
    int tests, total_score, divide_limit, subtract_limit;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> total_score >> divide_limit >> subtract_limit;
        cout << (check_possibility(total_score, divide_limit, subtract_limit) ? "YES" : "NO") << '\n';
    }

    return 0;
}