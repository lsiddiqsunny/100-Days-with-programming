#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n <= k)
    {
        while (k % n != 0)
        {
            n--;
        }
        cout << n << endl;
    }
    int a[26] = {0};
    for (int i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    vector<int> div;
    for (int i = 1; i <= k; i++)
    {
        if (k % i == 0)
        {
            div.push_back(i);
        }
    }
    int maxi = k;
    for(int i=k;i<=n;i++){
         
    }
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