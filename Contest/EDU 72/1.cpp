#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int s,i,e;
        cin>>s>>i>>e;
        
        int ans=max(0,(e+i-s+2)/2);
        ans=max(0,e-ans+1);
        cout<<ans<<endl;
    }
}