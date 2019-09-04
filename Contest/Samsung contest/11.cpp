#include<bits/stdc++.h>

using namespace std;

#define mx 15005*2

vector<int>g[mx];
int vis[mx];
int co;

void dfs(int s){
    co++;
    vis[s]=1;
    for(auto x: g[s]){
        if(vis[x]==0){
            dfs(x);
        }
    }
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<int>ans;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
                co=0;
            dfs(i);
        ans.push_back(co);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<" "<<ans[ans.size()-1]<<endl;


}


