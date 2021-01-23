#include <bits/stdc++.h>
using namespace std;
int dp[1005][3];
bool f(int n)
{
    if (n < 3 || n == 4)
    {
        dp[n][0] = dp[n][1] = dp[n][2] = 0;
        return false;
    }

    if (dp[n][0] != -1 and dp[n][1] != -1 and dp[n][2] != -1)
    {
        return true;
    }
    if (n % 3 == 0)
    {
        dp[n][0] = n / 3;
        dp[n][1] = 0;
        dp[n][2] = 0;
        return true;
    }
    if (n % 5 == 0)
    {
        dp[n][0] = 0;
        dp[n][1] = n / 5;
        dp[n][2] = 0;
        return true;
    }
    if (n % 7 == 0)
    {
        dp[n][0] = 0;
        dp[n][1] = 0;
        dp[n][2] = n / 7;
        return true;
    }
    if (f(n - 3))
    {
        dp[n][0] = 1 + dp[n - 3][0];
        dp[n][1] = dp[n - 3][1];
        dp[n][2] = dp[n - 3][2];
        return true;
    }
    else if (f(n - 5))
    {
        dp[n][0] = dp[n - 5][0];
        dp[n][1] = 1 + dp[n - 5][1];
        dp[n][2] = dp[n - 5][2];
        return true;
    }
    else if(f(n - 7))
    {
        dp[n][0] = dp[n - 7][0];
        dp[n][1] = dp[n - 7][1];
        dp[n][2] = 1 + dp[n - 7][2];
        return true;
    }
    dp[n][0] = dp[n][1] = dp[n][2] = 0;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 3 || n == 4)
        {
            cout << -1 << endl;
            continue;
        }
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = dp[i][1] = dp[i][2] = -1;
        }
        f(n);
        cout << dp[n][0] << " " << dp[n][1] << " " << dp[n][2] << endl;
    }
}