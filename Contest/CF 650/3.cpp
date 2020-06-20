#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int ans = 0;
    vector<int> pos;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            pos.push_back(i + 1);
        }
    }
    if (pos.size() == 0)
    {
        for (int i = 1; i <= s.size(); i += (k + 1))
        {
            ans++;
        }
        cout << ans << endl;
        return;
    }


    for (int i = 1; i <= pos[0]-k-1; i += (k + 1))
    {
        ans++;
    }

    for(int i=0;i<pos.size()-1;i++){
        int now = pos[i]+k+1;
        int next = pos[i+1]-k-1;
       // cout<<now<<" "<<next<<endl;
        for(int j=now;j<=next;j+=(k+1)){
            ans++;
        }
    }


    for (int i = pos[pos.size()-1]+k+1; i <= n; i += (k + 1))
    {
        ans++;
    }


    // cout<<ans<<endl;
    cout << ans << endl;
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