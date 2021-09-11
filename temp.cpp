#include <iostream>

using namespace std;

int findOnce(int arr[], int n)
{
    int first_pointer = 0, second_pointer = n - 1;
    while (first_pointer <= second_pointer)
    {
        const int midpoint = first_pointer + (second_pointer - first_pointer) / 2;

        if (midpoint != 0 && midpoint < n - 1)
        {
            //odd;
            if (midpoint & 1)
            {

                if (arr[midpoint] == arr[midpoint + 1])
                {
                    second_pointer = midpoint - 1;
                }
                else if (arr[midpoint] == arr[midpoint - 1])
                {
                    first_pointer = midpoint + 1;
                }
                else
                {
                    return arr[midpoint];
                }
            }
            else
            {
                if (arr[midpoint] == arr[midpoint + 1])
                {
                    first_pointer = midpoint + 1;
                }
                else if (arr[midpoint] == arr[midpoint - 1])
                {

                    second_pointer = midpoint - 1;
                }
                else
                {
                    return arr[midpoint];
                }
            }
        }
        else if (midpoint == 0)
        {
            if (arr[midpoint] == arr[midpoint + 1])
                first_pointer = midpoint + 1;

            else
            {
                return arr[midpoint];
            }
        }
        else
        {
            if (arr[midpoint] == arr[midpoint - 1])
                second_pointer = midpoint - 1;
            else
            {
                return arr[midpoint];
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "RESULT : " << findOnce(arr, n) << '\n';
    return 0;
}