#include <bits/stdc++.h>

using namespace std;

#define MX 20
vector<int>g[MX];
bool vis[MX];

void dfs(int s) {
    vis[s]=1;
    for (auto u: g[s]) {
        if (!vis[u]) {
            dfs(u);
        }
    }
}


int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        for (int i=0;i<MX;i++) {
            g[i].clear();
            vis[i]=false;
        }
        int n;
        string a, b;
        cin >> n >> a >> b;

        bool ok = false;

        for (int i = 0; i < n; ++i)
            if (a[i] != b[i])
            {
                if (a[i] > b[i])
                {
                    ok = true;
                    cout << "-1\n";
                    break;
                }

                g[a[i]-'a'].push_back(b[i]-'a');
                g[b[i]-'a'].push_back(a[i]-'a');
            }

        if (ok) continue;



        int ans = MX;
        for (int i = 0; i < MX; ++i)
            if (!vis[i])
                dfs(i), --ans;
        cout << ans << "\n";
    }

    return 0;
}