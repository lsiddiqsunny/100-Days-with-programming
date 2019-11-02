#include<bits/stdc++.h>
using namespace std;
#define mx 2000*2000+5
typedef pair<long long int,int> PII;
vector<PII>g[mx];
bool marked[mx];
int parent[mx];
vector<int>power;
vector<pair<int,int> > edge;
long long key[mx];
long long prim(int x)
{
	priority_queue<PII, vector<PII>, greater<PII> > Q;
	int y;
	long long minimumCost = 0;
	PII p;
	Q.push(make_pair(0, x));
    key[0]=0;
    long long w;
	while(!Q.empty())
   {
    	
        p = Q.top();
    	Q.pop();
    	x = p.second;
    	minimumCost += p.first;
    	marked[x] = true;
    	for(int i = 0; i < g[x].size(); ++i)
    	{
        	y = g[x][i].second;
            w = g[x][i].first;
            

        	if(marked[y] == false and key[y]>w){
                parent[y]=x;
                key[y]=w;
            	Q.push(make_pair(w,y));
            }
    	}
	}
	return minimumCost;
}
int main(){

    int n;
    cin>>n;
    pair<long long int,long long int> v[n];
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    long long int cost[n+1];
    for(int i=1;i<=n;i++){
        cin>>cost[i];
    }
    long long int k[n+1];
    for(int i=1;i<=n;i++){
        cin>>k[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                g[0].push_back(make_pair(cost[i],i));
                g[i].push_back(make_pair(cost[i],0));
            }
            else{
                long long  dist=abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
                dist*=(k[i]+k[j]);
                g[i].push_back(make_pair(dist,j));
                g[j].push_back(make_pair(dist,i));
            }
        }
    }
    memset(parent,-1,sizeof(parent));
    for(int i=1;i<=n;i++){
        key[i]=INT_MAX;
    }
    prim(0);
    long long ans=0;
    for(int i=1;i<=n;i++){
        if(parent[i]==0){
            power.push_back(i);
            ans+=cost[i];
        }
        else{
            long long  dist=abs(v[parent[i]].first-v[i].first)+abs(v[parent[i]].second-v[i].second);
            dist*=(k[parent[i]]+k[i]);
            ans+=dist;
            edge.push_back(make_pair(parent[i],i));
        }
    }
    cout<<ans<<endl;
    cout<<power.size()<<endl;
    for(int i=0;i<power.size();i++){
        cout<<power[i]<<" ";
    }
    cout<<endl;
    cout<<edge.size()<<endl;
    for(int i=0;i<edge.size();i++){
        cout<<edge[i].first<<" "<<edge[i].second<<endl;
    }
}