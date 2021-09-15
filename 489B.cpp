#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int boys, girls;
    cin >> boys;
    int boys_list[boys];
    for (int i = 0; i < boys; i++)
        cin >> boys_list[i];
    sort(boys_list, boys_list + boys);
    cin >> girls;
    int girls_list[girls];
    for (int i = 0; i < girls; i++)
        cin >> girls_list[i];
    sort(girls_list, girls_list + girls);
    int boys_pointer = 0, girls_pointer = 0;
    int counter = 0;
    while (boys_pointer < boys && girls_pointer < girls)
    {
        if (abs(boys_list[boys_pointer] - girls_list[girls_pointer]) <2)
        {
            boys_pointer++;
            girls_pointer++;
            counter++;
        }
        else if (boys_list[boys_pointer] < girls_list[girls_pointer])
        {
            boys_pointer++;
        }
        else
            girls_pointer++;
    }
    cout << counter << '\n';

    return 0;
}