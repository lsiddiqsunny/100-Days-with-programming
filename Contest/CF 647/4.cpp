#include <bits/stdc++.h>
using namespace std;
#define mx 500005
vector<int> g[mx], container[mx];
int topic[mx];
set<int> neighbour[mx];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> topic[i];
        container[topic[i]].push_back(i);
        for (int u : g[i])
            neighbour[u].insert(topic[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int u : container[i])
        {
            if (neighbour[u].count(topic[u]))
            {
                cout << "-1";
                return 0;
            }
            for (int t = 1; t < topic[u]; t++)
                if (neighbour[u].count(t) == 0)
                {
                    cout << "-1";
                    return 0;
                }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int u : container[i])
        {
            cout << u << " ";
        }
    }
    return 0;
}
