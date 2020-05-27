#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n][n];
    int co=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            a[i][j]=s[j]-'0';
            if(a[i][j]==0){
                co++;
            }
        }
    }
    if(co==n*n){
        cout<<"Yes\n";
        return;
    }
    bool ok =true;
    co=0;
    for(int i=0;i<n;i++){
        if(a[n-1][i]==1){
            co++;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i][n-1]==1){
            co++;
        }
    }

    if(co==0){
        cout<<"No\n";
        return ;
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[i][j]==1){
                if(a[i+1][j]==0 && a[i][j+1]==0){
                    ok=false;
                    break;
                }
            }
        }
        if(!ok){
            break;
        }
    }
    

    
    if(ok){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}