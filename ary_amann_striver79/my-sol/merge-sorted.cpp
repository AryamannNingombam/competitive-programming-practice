
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
        int f = m - 1, s = n - 1, index = m + n - 1;
        while (f > -1 && s > -1)
        {
            if (nums1[f] > nums2[s])
                nums1[index--] = nums1[f--];
            else
                nums1[index--] = nums2[s--];
        }
        while (f > -1)
            nums1[index--] = nums1[f--];
        while (s > -1)
            nums1[index--] = nums2[s--];
    }
};