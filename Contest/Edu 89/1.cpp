#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long a,b;
    cin>>a>>b;
    long long z = min(min(a,b),(a+b)/3);
    cout<<z<<endl;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}