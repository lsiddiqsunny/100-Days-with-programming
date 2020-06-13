#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, p;
    scanf("%d%d", &n, &p);
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("1 %d %d %d %d\n", i, j, i, j);
            fflush(stdout);
            int x;
            scanf("%d", &x);
            if (x == -1)
            {
                exit(0);
            }
            a[i][j] = x;
        }
    }
    printf("2\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d", a[i][j]);
            if (j != n)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    fflush(stdout);
    int x;
    scanf("%d", &x);
    if (x == -1)
    {
        exit(0);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        solve();
    }
}