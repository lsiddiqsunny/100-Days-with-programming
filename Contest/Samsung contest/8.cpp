#include <bits/stdc++.h>

using namespace std;

vector<int> g[10001];
int vis[10001], dis[10001] ;

int main()
{
    int n;
    cin>>n;

    string v[n];
    for(int i =  0; i < n ; i++)
    {
        cin>>v[i];
    }
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n; j++)
        {
            if(v[i][j] == '.')
            {
                int cur = i*n + j;
                for(int k = i-1; k >= 0; k--)
                {
                    if(v[k][j] == '.')
                    {
                        int now = k*n + j;
                        g[cur].push_back(now);
                    }
                    else
                        break;
                }
                for(int k = i+1; k < n; k++)
                {
                    if(v[k][j] == '.')
                    {
                        int now = k*n + j;
                        g[cur].push_back(now);
                    }
                    else
                        break;
                }
                for(int k = j-1; k >= 0; k--)
                {
                    if(v[i][k] == '.')
                    {
                        int now = i*n + k;
                        g[cur].push_back(now);
                    }
                    else
                        break;
                }
                for(int k = j+1; k < n; k++)
                {
                    if(v[i][k] == '.')
                    {
                        int now = i*n + k;
                        g[cur].push_back(now);
                    }
                    else
                        break;
                }
            }
        }
    }
    int start_pos = x1*n + y1;


    queue<int> q;
    q.push(start_pos);
    vis[start_pos] = 1;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        for(int i = 0 ; i < g[now].size(); i++)
        {
            int nxt = g[now][i];
            if(!vis[nxt])
            {
                vis[nxt] = 1;
                dis[nxt] = dis[now]+1;
                q.push(nxt);
            }
        }
    }
    cout<<dis[x2*n + y2]<<endl;
    return 0;
}
