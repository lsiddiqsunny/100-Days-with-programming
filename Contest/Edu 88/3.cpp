#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int hot, cold, target;
    cin >> hot >> cold >> target;

    if (target * 2 <= (hot + cold))
    {
        cout << 2 << endl;
        return;
    }
    long long lo = 1, hi = 1e12;
    long long mid;
    while (lo<hi)
    {
        mid = (lo + hi+1) /2;
        long long now = hot * mid + cold * (mid - 1);
        long long need = target * (2 * mid - 1);
        if (now >= need)
        {
            lo = mid;
        }
        else
        {
            hi = mid - 1;
        }
    }
    long long ans1 = target * (2 * lo - 1) - (hot * lo + cold * (lo - 1));
    long long ans2 = (hot * (lo + 1) + cold * lo) - target * (2 * lo + 1);
    if (ans1 * (2 * lo + 1) < ans2 * (2 * lo - 1))
    {
        lo++;
    }
    cout << 2 * lo - 1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}