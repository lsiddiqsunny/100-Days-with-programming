#include <bits/stdc++.h>
using namespace std;
long long int two[32];
map<pair<pair<long long int, long long int>, int>, int> mp;
#define mx 1000000
vector<int> g[mx];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
map<int, pair<pair<long long int, long long int>, int>> mp1;
int co = 0;
void build(int po, vector<pair<pair<long long int, long long int>, int>> last)
{
    if (po >= 31)
    {
        return;
    }
    if (last.size() == 0)
    {
        return;
    }
    // cout<<co<<" ";

    long long int step = two[po];
    for (int j = 0; j < last.size(); j++)

    {
        pair<long long int, long long int> p = last[j].first;
        int now = mp[last[j]];
        //cout<<now<<endl;
        vector<pair<pair<long long int, long long int>, int>> new_list;
        for (int k = 0; k < 4; k++)
        {
            long long x = p.first + dx[k] * step;
            long long y = p.second + dy[k] * step;
            if (x > 100 || x < -100)
            {
                continue;
            }
            if (y > 100 || y < -100)
            {
                continue;
            }
            pair<long long, long long> q = make_pair(x, y);
            if (mp.find(make_pair(q, k)) == mp.end())
            {
                mp[make_pair(q, k)] = co++;
                mp1[co - 1] = make_pair(q, k);
                g[now].push_back(co - 1);
            }
            
            // if(mp[make_pair(q,k)]==1){
            //     cout<<mp1[now].first.first<<" "<<mp1[now].first.second<<" "<<step<<endl;
            // }
            new_list.push_back(make_pair(q, k));
        }
        build(po + 1, new_list);
    }
    return;
}
int BFS(pair<pair<long long int, long long int>, int> src, pair<pair<long long int, long long int>, int> dest,
        int pred[], int dist[])
{

    queue<int> queue;

    bool visited[co];

    for (int i = 0; i < co; i++)
    {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    visited[mp[src]] = true;
    dist[mp[src]] = 0;
    queue.push(mp[src]);

    while (!queue.empty())
    {
        int u = queue.front();
        queue.pop();
        for (int i = 0; i < g[u].size(); i++)
        {
            if (visited[g[u][i]] == false)
            {
                visited[g[u][i]] = true;
                dist[g[u][i]] = dist[u] + 1;
                pred[g[u][i]] = u;
                queue.push(g[u][i]);

                if (mp1[g[u][i]].first == dest.first)
                    return g[u][i];
            }
        }
    }

    return -1;
}
void printShortestDistance(pair<pair<long long int, long long int>, int> s,
                           pair<pair<long long int, long long int>, int> dest)
{

    int pred[co], dist[co];
    int u = BFS(s, dest, pred, dist);
    if (u == -1)
    {
        cout << "IMPOSSIBLE\n";
        return;
    }

    // vector path stores the shortest path
    vector<int> path;
    int crawl = u;
    path.push_back(crawl);
    while (pred[crawl] != -1)
    {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

    // printing path from source to destination
    string ans = "";
    for (int i = path.size() - 1; i >= 0; i--)
    {
       //cout<<"("<<mp1[path[i]].first.first<<","<<mp1[path[i]].first.second<<")"<<endl;
        if (mp1[path[i]].second == 0)
        {
            ans += "N";
        }
        else if (mp1[path[i]].second == 1)
        {
            ans += "S";
        }
        else if (mp1[path[i]].second == 2)
        {
            ans += "E";
        }
        else if (mp1[path[i]].second == 3)
        {
            ans += "W";
        }
    }
    cout << ans << endl;
}
int main()
{
    two[0] = 1;
    for (int i = 1; i < 31; i++)
    {
        two[i] = 2LL * two[i - 1];
        //cout<<two[i]<<" ";
    }

    pair<long long int, long long int> p;
    p = make_pair(0, 0);
    mp[make_pair(p, -1)] = co++;
    mp1[co - 1] = make_pair(p, -1);
    vector<pair<pair<long long int, long long int>, int>> last;
    last.push_back(make_pair(p, -1));
    build(0, last);
    //cout << co << endl;

    int t;
    cin >> t;
    // for (int i = 0; i < co; i++)
    // {
    //     cout << i << ": ";
    //     for (int j = 0; j < g[i].size(); j++)
    //     {
    //         cout << "("<<mp1[g[i][j]].first.first << ","<<mp1[g[i][j]].first.second<<") ";
    //     }
    //     cout << endl;
    // }
    
    // for(int i=-4;i<=4;i++){
    //     for(int j=-4;j<=4;j++){
    //         int x, y;
    //         x=i;
    //         y=j;
    //     //cin >> x >> y;
    //         cout << "Case # (" << i << ":"<<j<<") :";
    //         if(x==0 and y==0){
    //             cout<<endl;
    //             continue;
    //         }
    //         printShortestDistance(make_pair(p, -1), make_pair(make_pair(x, y), -1));
    //     }
    // }

    for (int cs = 1; cs <= t; cs++)
    {
        int x, y;
        cin >> x >> y;
        cout << "Case #" << cs << ": ";
        printShortestDistance(make_pair(p, -1), make_pair(make_pair(x, y), -1));
    }
}