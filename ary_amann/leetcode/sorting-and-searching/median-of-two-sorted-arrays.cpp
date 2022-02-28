#include <vector>
#include <climits>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums2.size() < nums1.size())
            return findMedianSortedArrays(nums2, nums1);
        const int n1 = nums1.size();
        const int n2 = nums2.size();
        int l = 0, r = n1;
        while (l <= r)
        {
            const int cut1 = (l + r) >> 1;
            const int cut2 = (n1 + n2 + 1) / 2 - cut1;
            const int L1 = cut1 == 0 ? INT_MIN : nums1[cut1 - 1];
            const int L2 = cut2 == 0 ? INT_MIN : nums2[cut2 - 1];
            const int R1 = cut1 == n1 ? INT_MAX : nums1[cut1];
            const int R2 = cut2 == n2 ? INT_MAX : nums2[cut2];
            if (L1 <= R2 && L2 <= R1)
            {
                if ((n1 + n2) & 1)
                {
                    return max(L1, L2);
                }
                else
                {
                    return (max(L1, L2) + min(R1, R2)) / 2.0;
                }
            }
            else if (L1 > R2)
            {
                r = cut1 - 1;
            }
            else
            {
                l = cut1 + 1;
            }
        }

        return 0;
    }
};