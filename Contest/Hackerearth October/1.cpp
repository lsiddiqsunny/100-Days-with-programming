#include<bits/stdc++.h>
using namespace std;
long long int per(long long int n){
long long int now=1;
for(int i=2;i<=n;i++){
    now*=i;
}
return now;
}
int main(){
int t;
cin>>t;
while(t--){
    long long int n;
    cin>>n;
    long long int ans=0;
    ans=per(n)*((n*(n-1LL))/2LL);
    cout<<ans<<endl;
}

}
