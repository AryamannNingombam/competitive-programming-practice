#include <vector>

using namespace std;

class Solution
{
public:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int f = 0, s = 0;
        while (f < m && s < n)
        {
            if (nums1[f] > nums2[s])
            {
                swap(nums1[f++], nums2[s]);
            }
            else
                s++;
        }
        while (f < m)
        {
            swap(nums1[f++], nums2[s]);
        }
    }
};