#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"NO"<<endl;
        return 0;
    }
    int ans[2*n+1];
    for(int i=1;i<=2*n;i=i+2){
        ans[i]=i;
    }
    int x=2;
    for(int i=n+1;i<=2*n;i=i+2){
        ans[i]=x;
        x=x+2;
    }
    for(int i=2;i<=n;i=i+2){
        ans[i]=x;
        x=x+2;
    }
    cout<<"YES\n";
    for(int i=1;i<=2*n;i++){
        cout<<ans[i]<<" ";
    }


}
