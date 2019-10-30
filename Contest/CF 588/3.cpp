#include<bits/stdc++.h>
using namespace std;
#define mx 10
vector<int>g[mx];
int vis[mx];
int co1[mx];
void dfs(int s,int now)
{
//   cout<<s<<" "<<now<<endl;
//co=max(co,now);
    vis[s]=now;
    co1[now]++;


    for(int i=0; i<g[s].size(); i++)
    {
        int v=g[s][i];

        if(vis[v]==0)
        {
            dfs(v,vis[s]+i);
        }
    }



}
int main()
{

    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {

        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int maxi=0;
    int start=1;
    vector<pair<int,int> >v;
    for(int i=1; i<=n; i++)
    {
        v.push_back(make_pair((int)g[i].size(),i));
    }
    sort(v.rbegin(),v.rend());
    cout<<endl;

    for(int i=1; i<=min(n,6); i++)
    {

        vis[v[i-1].second]=i;
        cout<<v[i-1].second<<" "<<vis[v[i-1].second]<<endl;
    }
    int co=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<g[i].size(); j++)
        {
            int u=g[i][j];
            if(vis[u]==0 || vis[i]==0)
            {
                continue;
            }
            co++;
        }
    }

    cout<<co<<endl;


}
