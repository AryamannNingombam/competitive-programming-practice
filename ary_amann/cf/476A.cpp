#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    if (n == 0)
    {
        cout << 0 << '\n';
    }

    int two_counter, one_counter, result, counter = 1;
    while (1)
    {
        two_counter = m * counter;
        one_counter = 0;
        if (two_counter > n)
        {
            result = -1;
            break;
        }
        bool broken = false;
        while (one_counter <= m * counter){
            int sum = two_counter  * 2 + one_counter;
            if (sum == n){
                result = m * counter;
                broken = true;
                break;
            }

            two_counter--;
            one_counter++;
        }
        if (broken)break;
        
        


        counter++;
    }
    cout << result << '\n';

    return 0;
}