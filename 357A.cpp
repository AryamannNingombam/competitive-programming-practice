#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, x, y;
    cin >> m;
    int total_students = 0, temp;
    vector<int> students(m);
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        total_students += temp;
        students[i] = temp;
    }
    cin >> x >> y;
    int temp_sum = 0, index = 0;
    int result = -1;
    while (index < m)
    {
        temp_sum += students[index++];
        temp = total_students - temp_sum;
        if ((temp_sum >= x) && (temp_sum <= y) && (temp >= x) && (temp <= y))
            result = index;
    }
    cout << result + 1 << '\n';
    return 0;
}