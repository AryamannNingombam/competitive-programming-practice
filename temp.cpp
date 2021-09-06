#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    vector<int> arr1 = {-1, 0, 1, 3, 5}, arr2 = {-2, 1, 6, 7};
    vector<int> arr3;
    int first_pointer = 0, second_pointer = 0;
    while (first_pointer < arr1.size() && second_pointer < arr2.size())
    {
        if (arr1[first_pointer] < arr2[second_pointer])
        {
            arr3.push_back(arr1[first_pointer]);
            first_pointer++;
        }
        else
        {
            arr3.push_back(arr2[second_pointer]);
            second_pointer++;
        }
    }
    while (first_pointer < arr1.size())
    {
        arr3.push_back(arr1[first_pointer++]);
    }
    while (second_pointer < arr2.size())
    {
        arr3.push_back(arr2[second_pointer++]);
    }
    for (auto i : arr3)
        cout << i << ' ';
    cout <<'\n';
    deque<int> arr4;
    first_pointer = 0, second_pointer = arr3.size() - 1;
    while (first_pointer <= second_pointer)
    {
        if (abs(arr3[first_pointer]) > abs(arr3[second_pointer]))
        {
            arr4.push_front(arr3[first_pointer++]);
        }
        else
        {
            arr4.push_front(arr3[second_pointer--]);
        }
    }

    for (auto i : arr4)
        cout << pow(i, 2) << ' ';

    return 0;
}