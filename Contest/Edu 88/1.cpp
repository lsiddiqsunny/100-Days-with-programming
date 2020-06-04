#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    int get=n/k;
    if(get>=m){
        cout<<m<<endl;
    }
    else{
        m-=get;
        int now = (int)ceil(m/(k-1.0));
       //cout<<now<<endl;
        cout<<get-now<<endl;

    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}