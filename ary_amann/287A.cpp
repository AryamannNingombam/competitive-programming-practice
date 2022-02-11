#include <iostream>

using namespace std;

bool check_valid(int row, int col)
{
    return row >= 0 && row < 4 && col >= 0 && col < 4;
}

bool check_from_top_left(char arr[4][4], int row, int col)
{
    //right, bottom, bottom right
    if (check_valid(row, col + 1) && check_valid(row + 1, col) && check_valid(row + 1, col + 1))
    {
        return (arr[row][col + 1] == arr[row + 1][col]) && (arr[row + 1][col] == arr[row + 1][col + 1]);
    }
    return false;
}
bool check_from_top_right(char arr[4][4], int row, int col)
{
    //left, bottom, bottom left
    if (check_valid(row, col - 1) && check_valid(row + 1, col) && check_valid(row + 1, col - 1))
    {
        return (arr[row][col - 1] == arr[row + 1][col]) && (arr[row + 1][col] == arr[row + 1][col - 1]);
    }
    return false;
}

int main()
{
    char arr[4][4] = {'.'};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool flag = 0;
    for (int i = 0; i < 4; i++)
    {
        bool flag_2 = 0;
        for (int j = 0; j < 4; j++)
        {
            if (check_from_top_left(arr, i, j) || check_from_top_right(arr, i, j))
            {
                flag = 1, flag_2 = 1;
                cout << "YES\n";
                break;
            }
        }
        if (flag_2)
            break;
    }
    if (!flag)
    {
        cout << "NO\n";
    }
}
