#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    scanf("%d", &t);
    for (int cs = 1; cs <= t; cs++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        int cvalue[n];
        int cnum[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &cvalue[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &cnum[i]);
        }

        int dp[m + 1];
        int co[m + 1];
        for (int i = 0; i <= m; i++)
        {
            dp[i] = 0;
            co[i] = 0;
        }
        int ans = 0;
        dp[0] = 1;
        co[0] = 0;
        for (int i = 0; i < n; i++)
        {
            int now = cvalue[i];
            for (int j = now; j <= m; j++)
            {
                if (dp[j] == 0 and dp[j - now] == 1 and co[j - now] + 1 <= cnum[i])
                {
                    dp[j] = 1;
                    co[j] = co[j - now] + 1;
                    ans++;
                }
            }
            memset(co, 0, sizeof(co));
        }

        printf("Case %d: %d\n", cs, ans);
    }
}