#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//this method is giving the incorrect fucking answer for some reason on gfg
// vector<int> subarraySum(int a[], int n, long long target)
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] + a[j] == target)
//                 return {i - 1, j};
//         }
//     }
//     return {};
// }
// this method is giving TLE

/*
int subarraySum(vector<int> &a, int k)
{

    int size = a.size();
    int ans = 0;

    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        if (a[i] + a[j] == k)
        {
            ans++;
        }
        else if (a[i] + a[j] > k)
        {
            j--;
        }
        else if (a[i] + a[j] < k)
        {
            i++;
        }
    }
    return ans;
}*/

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    subarraySum(nums, 10, 3);
    return 0;
}