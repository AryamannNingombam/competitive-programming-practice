#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
int a[20][200];
int b[20][200];
int c[20][200];
int vis[200];
int n, m, k;
int cal(int x, int y)
{
    memset(vis, 0, sizeof(vis));
    int last = k, ans = 0;
    while (last)
    {
        int flag = 0;
        int maxv = 0, maxp = 0;
        for (int i = 1; i <= m; i++)
        {
            if (vis[i])
                continue;
            if (b[y][i] - a[x][i] > maxv)
            {
                maxv = b[y][i] - a[x][i];
                maxp = i;
                flag = 1;
            }
        }
        if (flag == 0)
            break;
        int num = min(last, c[x][maxp]);
        ans += num * maxv;
        vis[maxp] = 1;
        last -= num;
    }
    return ans;
}
int main()
{
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 1; j <= m; j++)
        {
            scanf("%d%d%d", &a[i][j], &b[i][j], &c[i][j]);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ans = max(ans, cal(i, j));
        }
    }
    printf("%d\n", ans);
    return 0;
}