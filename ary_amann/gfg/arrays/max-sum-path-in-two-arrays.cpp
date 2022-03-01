// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    /*You are required to complete this method*/
    int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int a = 0, b = 0;
        int total_sum = 0, sum_a = 0, sum_b = 0;
        while (a < l1 && b < l2)
        {
            if (A[a] < B[b])
            {
                sum_a += A[a++];
            }
            else if (A[a] > B[b])
            {
                sum_b += B[b++];
            }
            else
            {
                total_sum += max(sum_a, sum_b) + A[a];

                sum_a = 0;
                sum_b = 0;
                a++;
                b++;
            }
        }
        while (a < l1)
            sum_a += A[a++];
        while (b < l2)
            sum_b += B[b++];
        total_sum += max(sum_a, sum_b);
        return total_sum;
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;
        fflush(stdin);
        int a[N], b[M];
        for (int i = 0; i < N; i++)
            cin >> a[i];
        for (int i = 0; i < M; i++)
            cin >> b[i];
        Solution obj;
        int result = obj.max_path_sum(a, b, N, M);
        cout << result << endl;
    }
}

// } Driver Code Ends