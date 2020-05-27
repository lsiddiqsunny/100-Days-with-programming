#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int cs = 1; cs <= t; cs++)
    {
        int n,total=0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total+=a[i];
        }
        long long int dp[100005];
        memset(dp,0,sizeof(dp));
        
        dp[0] = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = total; j >= 0; j--)
                if (dp[j])
                    dp[j + a[i]] |= (dp[j] << 1);
        }

        long long int  check = 1;
        check = check << (n / 2);
        int ans1 = 0, ans2 = total;

        for (int j = total; j >= 0; j--)
        {
            if ((dp[j] & check))
            {
                int temp1 = min(j, total - j), temp2 = max(j, total - j);
                if (temp2 - temp1 < ans2 - ans1)
                    ans1 = temp1, ans2 = temp2;
            }
        }
        cout << "Case " << cs << ": ";
        cout << ans1 << " "<< ans2 << endl;
    }
    return 0;
}