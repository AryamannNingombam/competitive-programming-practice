#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>
#include <string>
using namespace std;

string get_result(int number)
{
    if (number < 10)
        return to_string(number);
    string result = "";
    int temp = 9;
    while (number > temp)
    {
        result = to_string(temp) + result;
        number -= (temp--);
        if (temp<0)return "-1";
    }
    result = to_string(number) + result;
    return result;
}

int main()
{
    int tests, number;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> number;
        cout << get_result(number) << '\n';
    }

    return 0;
}