#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int mini=min(x,y);
    int maxi = max(x,y);
    int ans = max(mini*2,maxi);
    cout<<ans*ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}