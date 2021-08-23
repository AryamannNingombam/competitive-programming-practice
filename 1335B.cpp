#include <iostream>
#include <string>
using namespace std;

string all_alphabets = "abcdefghijklmnopqrstuvwxyz";

string return_result(int a, int b, int c)
{
    string first_string = all_alphabets.substr(0, c);
    int quotient = b / c;
    int remainder = b % c;
    string temp = first_string;
    for (int i = 1; i < quotient; i++)
        first_string += temp;
    first_string += temp.substr(0, remainder);
    quotient = a / b;
    remainder = a % b;
    temp = first_string;
    for (int i = 1; i < quotient; i++)
        first_string += temp;
    first_string += temp.substr(0, remainder);

    return first_string;
}

int main()
{
    int tests, a, b, c;
    cin >> tests;
    for (int i = 0; i < tests; i++)
    {
        cin >> a >> b >> c;
        cout << return_result(a, b, c) << '\n';
    }
    return 0;
}