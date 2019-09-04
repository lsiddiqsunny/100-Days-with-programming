#include<bits/stdc++.h>
using namespace std;
#define mx 55
#define Max 1000000
long long g[mx][mx];
long long dist[mx][mx];
vector<pair<pair<int,int>,long long> > edge;


void solve(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dist[i][j]=g[i][j];
        }
    }

    for (int k = 1; k <=n; k++)
    {
        for (int i = 1; i <=n; i++)
        {

            for (int j = 1; j <=n; j++)
            {

                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }





}
int main()
{

    freopen("graphs_as_a_service.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int test;
    cin>>test;
    for(int cs=1; cs<=test; cs++)
    {
        int n,m;
        cin>>n>>m;
        edge.clear();
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                g[i][j]=dist[i][j]=Max;

                ///cout<<dist[i][j]<<endl;
            }
        }
        for(int i=0; i<m; i++)
        {
            int x,y;
            long long z;
            cin>>x>>y>>z;
            g[x][y]=z;
            g[y][x]=z;
            edge.push_back(make_pair(make_pair(x,y),z));
        }
        solve(n);
        bool ok=true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dist[i][j]>Max){
                    ok=false;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(dist[edge[i].first.first][edge[i].first.second]!=edge[i].second){
                ok=false;
            }
        }
        cout<<"Case #"<<cs<<": ";
        if(!ok){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<(n*(n-1))/2<<endl;
            for(int i=1;i<=n;i++){
                for(int j=i+1;j<=n;j++){
                    cout<<i<<" "<<j<<" "<<dist[i][j]<<endl;
                }
            }
        }

    }

}


