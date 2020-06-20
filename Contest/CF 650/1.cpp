#include<bits/stdc++.h>
using namespace std;
void solve(){
    string b;
    cin>>b;
    string ans = "";
    ans+=b[0];
    for(int i=1;i<b.size()-1;i+=2){
        ans+=b[i];
    }
    ans+=b[b.size()-1];
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}