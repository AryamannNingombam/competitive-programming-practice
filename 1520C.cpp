#include <iostream>
 
using namespace std;
 
int main()
{
    int tests, input;
    cin >> tests;
    while (tests--)
    {
        cin >> input;
        int print_value = 1;
        int power = input * input;
        if (input == 2)
        {
            cout << -1 << '\n';
            continue;
        }
        if (input == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        for (int i = 0; i < input; i++)
        {
            for (int j = 0; j < input; j++)
            {
                
                cout << print_value << ' ';
                if (print_value == power || print_value == power -1)
                {
                    print_value = 0;
                }
                print_value += 2;
            }
            cout << '\n';
        }
    }
 
    return 0;
}