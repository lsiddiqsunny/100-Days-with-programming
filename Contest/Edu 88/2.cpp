#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    int z=x*2;
    z=min(z,y);
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int cost=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j+1<m and s[i][j]=='.' and s[i][j+1]=='.'){
                cost+=z;
                j++;
            }
            else if(s[i][j]=='.'){
                cost+=x;
            }
           // cout<<cost<<endl;
        }
    }
    cout<<cost<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}