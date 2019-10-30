#include<bits/stdc++.h>
using namespace std;
#define mx 200005
vector<int>g[mx];
int vis[mx];
vector<int>now;

void dfs(int s)
{
    vis[s]=1;

    now.push_back(s);
    for(auto x:g[s])
    {
        if(vis[x]==0)
        {
            dfs(x);
        }
    }
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<mx; i++)
        {
            g[i].clear();
            vis[i]=0;
        }
        int co=0;
        int ans[n+1];
        for(int i=1; i<=n; i++)
        {
            if(a[i]==i)
            {
                continue;
            }
            g[i].push_back(a[i]);
            g[a[i]].push_back(i);
        }
        vector<pair<int,vector<int> > > v;
        for(int i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                co=0;
                now.clear();
                dfs(i);
                v.push_back(make_pair(now.size(),now));

            }
        }
        for(int i=0; i<v.size(); i++)
        {
            for(int j=0; j<v[i].second.size(); j++)
            {
                ans[v[i].second[j]]=v[i].first;
            }
        }
        for(int i=1; i<=n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}
