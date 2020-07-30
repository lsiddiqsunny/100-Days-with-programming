#include<bits/stdc++.h>
using namespace std;
#define mx 55
vector<int>g[mx];
int vis[mx];

void clear(){
    for(int i=0;i<mx;i++){
        g[i].clear();
        vis[i]=0;
    }
}

void dfs(int s){

    vis[s]=1;
    for(int u:g[s]){
        if(vis[u]==0){
            dfs(u);
        }
    }

}
int main(){
    freopen("travel_restrictions_input.txt","r",stdin);
    freopen("output","w", stdout);

    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        clear();
        int n;
        cin>>n;
        string in,out;
        cin>>in>>out;
        for(int i=1;i<=n;i++){
            int op1=i-1;
            int op2=i+1;
            if(out[i-1]=='N'){
                continue;
            }
            if(op1>=1){
                if(in[op1-1]=='Y'){
                    g[i].push_back(op1);
                }
            }
            if(op2<=n){
                if(in[op2-1]=='Y'){
                    g[i].push_back(op2);
                }
            }
        }
        int mat[n+1][n+1];
        cout<<"Case #"<<cs<<": \n";
        for(int i=1;i<=n;i++){
            memset(vis,0,sizeof(vis));
            dfs(i);
            for(int j=1;j<=n;j++){
                

                if(vis[j]){
                    cout<<"Y";
                }
                else{
                    cout<<"N";
                }
            }
            cout<<endl;
        }
        
    }
}