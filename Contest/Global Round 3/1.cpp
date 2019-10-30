#include<bits/stdc++.h>
using namespace std;
int main(){
long long a,b,c;
cin>>a>>b>>c;
long long ans=2*min(a,b);
ans+=(c*2);
if(a>min(a,b)){
    ans++;
}
else if(b>min(a,b)){
    ans++;
}
cout<<ans<<endl;

}
