#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int odd=0,even=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if( i%2 == a[i]%2){
            continue;
        }

        if(a[i]%2==1){
            odd++;
        }
        else even++;
    }
    if(odd!=even){
        cout<<-1<<endl;
        return;
    }
    cout<<odd<<endl;
    

}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}