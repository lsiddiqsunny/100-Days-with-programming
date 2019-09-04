#include<bits/stdc++.h>
using namespace std;
#define mx 200005

vector<int>g[mx];
int vis[mx];
void dfs(int s,int c)
{
    vis[s]=c;
    for(auto v:g[s])
    {
        if(vis[v]==-1)
            dfs(v,c^1);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {

        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0; i<=n; i++)
        {
            g[i].clear();
            vis[i]=-1;
        }
        for(int i=0; i<m; i++)
        {
            int u,v;
            scanf("%d%d",&u,&v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
        dfs(1,0);
        vector<int>r,b;
        for(int i=1; i<=n; i++)
        {
            if(vis[i]==0)
            {
                r.push_back(i);
            }
            else
                b.push_back(i);
        }
        if(r.size()<b.size())
        {
            printf("%d\n",r.size());
            for(int i=0; i<r.size(); i++)
            {
                printf("%d ",r[i]);
            }
        }
        else
        {

            printf("%d\n",b.size());
            for(int i=0; i<b.size(); i++)
            {
                printf("%d ",b[i]);
            }

        }
        printf("\n");

    }


}
