#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int five = 0;
    int ten = 0;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 5)
        {
            five++;
        }
        else if (x == 10)
        {
            if (five == 0)
            {
                ok = false;
            }
            else
            {
                five--;
                ten++;
            }
        }
        else
        {
            if (ten == 0)
            {
                if (five < 2)
                {
                    ok = false;
                }
                else
                {
                    five -= 2;
                }
            }
            else
            {
                ten--;
            }
        }
    }
    if (!ok)
    {
        cout << "NO\n";
    }
    else
        cout << "YES\n";
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