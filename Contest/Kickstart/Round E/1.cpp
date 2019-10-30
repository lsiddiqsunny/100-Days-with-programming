#include<bits/stdc++.h>
using namespace std;
#define mx 100005

vector<int>g[mx];
int vis[mx];
int co1;
void dfs(int s)
{
    vis[s]=1;
    co1++;

    for(auto v: g[s])
    {
        if(vis[v]==0)
        {
            dfs(v);
        }

    }

}
int main()
{

    int test;
    cin>>test;
    for(int cs=1; cs<=test; cs++)
    {
        int n,m;
        cin>>n>>m;
        for(int i=0;i<=n;i++){
            g[i].clear();
            vis[i]=0;
        }
        for(int i=0; i<m; i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int co=0;
        int ans=0;
        for(int i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                co++;
                co1=0;
                dfs(i);
                ans+=(co1-1);
            }
        }
        cout<<"Case #"<<cs<<": "<<ans+(co-1)*2<<endl;

    }


}
