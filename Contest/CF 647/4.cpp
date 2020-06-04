#include <bits/stdc++.h>
using namespace std;
#define mx 500005

vector<int> g[mx];
int vis[mx];
int solution[mx];
int desier[mx];
vector<int> ans;
vector<pair<int, int>> a;
int co;
void dfs(int s, int now)
{
    ans.push_back(s);
    vis[s] = 1;
    solution[s] = now;
    for (int u : g[s])
    {
        if (vis[u] || desier[u]>=solution[u])
        {
            continue;
        }
        
        dfs(u, now + 1);
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        solution[i+1]=INT_MAX;
        int x;
        cin >> x;
        desier[i + 1] = x;
        a.push_back({x, i + 1});
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (vis[a[i].second] == 0)
        {
            dfs(a[i].second, a[i].first);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (desier[i] < solution[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int t;
    t = 1;
    while (t--)
    {
        solve();
    }
}