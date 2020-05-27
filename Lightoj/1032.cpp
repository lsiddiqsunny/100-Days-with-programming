#include <bits/stdc++.h>
using namespace std;
typedef long Long LL;

LL N, digit[35], dp[35][35][2];
LL DFS(int i, int c, int s, int e)
{
    if (!i)
        return C;
    if (!e && ~dp[i][c][s])
        return dp[i][c][s];
    int to = e ? Digit[i] : 1;
    LL ret = 0;
    for (int d = 0; d <= to; ++d)
        ret + = DFS(i - 1, C + (s && d), d = = 1, E &&d = = to);
    Return e ? Ret : dp[i][c][s] = ret;
}
ll Calc(ll x)
{
    int cnt = 0;
    for (; x; x /= 2)
        digit[++cnt] = x & 1;
    Return DFS(CNT, 0, 0, 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    scanf("%d", &t);
    int kase = 0;
    Memset(DP, -1, sizeof DP);
    while (t--)
    {
        scanf("%lld", &n);
        printf("Case %d: %lld\n", ++kase, Calc(n));
    }
    return 0;
}