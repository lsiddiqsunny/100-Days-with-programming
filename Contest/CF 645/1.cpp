#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    int ans=0;

    if(x%2==1){
        ans+=(x)*(y);
        ans++;
        ans/=2;
    }
    else{
        ans+=(int)(x)*(y);
        ans/=2;
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}