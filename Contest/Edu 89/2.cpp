#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,m;
    cin>>n>>x>>m;
    int l=x,r=x;
    while(m--){
        int a,b;
        cin>>a>>b;
        if (b < l || r < a){
            continue;
        }
        l = min(l,a);
        r = max(r,b);
    }
    cout<<r-l+1<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}