#include <iostream>

using namespace std;

int get_sum(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    int number_of_candies;
    cin >> number_of_candies;
    int num = 0;
    while (++num)
    {
        if (get_sum(num) > number_of_candies)
            break;
    }
    int sum = get_sum(num);
    int difference = sum - number_of_candies;
    cout << num-1 << '\n';
    for (int i = 1; i <= num; i++)
    {
        if (difference != i)
            cout << i << ' ';
    }
    cout << '\n';
}