#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int a[200];
string s;

int main()
{
    //freopen("F:\\rush.txt", "r", stdin);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    getchar();
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        int len = s.size();
        int num = 0;
        for (int i = 0; i <= len - 1; i++)
            if (s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
                num++;
        if (num != a[i])
        {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}