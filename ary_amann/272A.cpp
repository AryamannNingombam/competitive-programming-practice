#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int number_of_friends;
    cin >> number_of_friends;
    int sum = 0, temp;
    for (int i = 0; i < number_of_friends; i++)
    {
        cin >> temp;
        sum += temp;
    }
    //test cases;
    int result = 0;
    for (int i = 1; i < 6; i++)
    {
        int temp_sum = sum + i;
        if (temp_sum % (number_of_friends+1) != 1)
            result++;
    }
    cout << result << '\n';

    return 0;
}