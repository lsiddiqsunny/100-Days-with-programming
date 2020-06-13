#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    int s1=0,s2=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s1+=x;
        s2+=min(k,x);
    }
    cout<<s1-s2<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}