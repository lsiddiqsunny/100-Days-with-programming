#include <bits/stdc++.h>
using namespace std;
#define mx 100005
int vis[mx];
int dis[mx];
vector<int> g[mx];

void dfs(int s)
{
    vis[s] = 1;
    for (auto u : g[s])
    {
        if (vis[u] == 0)
        {
            dis[u] = 1 + dis[s];
            dfs(u);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, da, db;
        cin >> n >> a >> b >> da >> db;
        for (int i = 0; i <= n; i++)
        {
            vis[i] = 0;
            dis[i] = 0;
            g[i].clear();
        }
        for (int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(a);
        if (dis[b] <= da)
        {
            cout << "Alice\n";
            continue;
        }
        int maxi = 0, max_node = a;
        for (int i = 1; i <= n; i++)
        {
            if (maxi <= dis[i])
            {
                maxi = dis[i];
                max_node = i;
            }
        }
        for (int i = 0; i <= n; i++)
        {
            vis[i] = 0;
            dis[i] = 0;
        }
        dfs(max_node);
        maxi = 0;
        for (int i = 1; i <= n; i++)
        {
            if (maxi <= dis[i])
            {
                maxi = dis[i];
            }
        }
        int dia = maxi;
       // cout<<"Diameter: " <<dia<<endl;
        if (2 * da >= min(dia,db))
        {
            cout << "Alice\n";
            continue;
        }
        if (db > 2 * da)
        {
            cout << "Bob\n";
            continue;
        }

    }
}