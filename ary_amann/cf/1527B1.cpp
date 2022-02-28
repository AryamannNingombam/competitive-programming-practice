#include <iostream>
#include <string>

using namespace std;

int main()
{
    int tests, size;
    string s;
    cin >> tests;
    while (tests--)
    {
        cin >> size >> s;
        int number_of_zeros = 0;
        for (int i = 0; i < size; i++)
        {
            if (s[i] == '0')
                number_of_zeros++;
        }
        if (number_of_zeros == 1 || number_of_zeros%2==0){
            cout << "BOB\n";
        }else{
            cout << "ALICE\n";
        }
    }

    return 0;
}