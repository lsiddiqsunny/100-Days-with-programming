#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;

        long long ans=(2*x*y)/(x+y) +30;
        cout<<ans<<endl;
    }
}