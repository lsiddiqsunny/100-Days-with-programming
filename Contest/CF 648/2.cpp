#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = n-1; i >=0; i--)
    {
        for (int j = i-1; j >=0; j--)
        {
            if (a[i] < a[j] and b[i] != b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    bool issorted = true;
    for (int i = 0; i < n - 1; i++)
    {
       cout<<a[i]<<endl;
        if (a[i] > a[i + 1])
        {
            issorted = false;
            break;
        }
    }
    if (issorted)
    {
        cout << "Yes\n";
    }
    else
        cout << "No\n";
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