#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

bool return_result(int num)
{
    for (auto i : arr)
    {
        if (num % i == 0)
            return true;
    };
    return false;
}

int main()
{
    int num;
    cin >> num;
    cout << (return_result(num) ? "YES" : "NO") << '\n';

    return 0;
}