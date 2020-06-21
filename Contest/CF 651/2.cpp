#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> odd;
    vector<int> even;
    for (int i = 1; i <= 2 * n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    int co = 0;

    for (int i = 0; i < ((int)odd.size() - 1); i += 2)
    {
        co++;
        if (co == n)
        {
            break;
        }
        cout << odd[i] << " " << odd[i + 1] << endl;
    }
    
    for (int i = 0; i < ((int)even.size() - 1); i += 2)
    {
        co++;
        if (co == n)
        {
            break;
        }
        cout << even[i] << " " << even[i + 1] << endl;
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