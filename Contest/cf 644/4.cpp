#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    if(n<=k){
        cout<<1<<endl;
        return;
    }

    int ans = INT_MAX;
    for(int i=1;i<=sqrt(n);i++){
        if(i>k){
            break;
        }
        if(n%i==0){
            int now = n/i;
            ans = min(ans,now);

            if(now<=k){
                ans = min(ans,i);
            }
        }
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