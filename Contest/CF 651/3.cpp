#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "FastestFinger\n";
        return;
    }

    if (n == 2 or n %2==1 )
    {
        cout << "Ashishgup\n";
        return;
    }

    if ((n & n - 1) == 0)
    {
        cout << "FastestFinger\n";
        return;
    }

    int co = 0;
    int rem = n;

    while (rem % 2 == 0)
    {
        rem /= 2;
        co++;
    }

    if (co > 1)
    {
        cout << "Ashishgup\n";
        return;
    }

    for (int d = 3; d  <= sqrt(rem); d += 2)
    {
        if (rem % d == 0)
        {
            cout << "Ashishgup\n";
            return;
        }
    }

    cout << "FastestFinger\n";
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