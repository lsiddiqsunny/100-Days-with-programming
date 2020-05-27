#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = INT_MAX;
        int lo = 2, hi = 2 * k;
        int mid;
        while (lo <= hi)
        {
            mid = (lo + hi) / 2;
            int x = mid;
            int z = 0;
            //cout << x << " ";
            for (int i = 0; i < n / 2; i++)
            {
                int now = a[i] + a[n - i - 1];
                if (x == now)
                {
                    //ans++;
                    continue;
                }
                int need = x - now;
                if (need < 0)
                {
                    need *= -1;
                    need = max(0, need - (a[i] - 1));
                }
                //cout << need << endl;
                else
                {
                    need = max(0, need - (k - a[i]));
                }
                if (need == 0)
                {
                    z++;
                }
                else
                {
                    int need = x - now;
                    if (need < 0)
                    {
                        need *= -1;
                        need = max(0, need - (a[n - i - 1] - 1));
                    }
                    else
                    {
                        need = max(0, need - (k - a[n - i - 1]));
                    }
                    if (need == 0)
                    {
                        z++;
                    }
                    else
                    {
                        z += 2;
                    }
                }
                //cout<<z<<endl;
            }
            if (z <= ans)
            {

                hi = mid - 1;
                ans = z;
            }
            else
            {
                lo = mid + 1;
            }
        }

        cout << ans << endl;
    }
}