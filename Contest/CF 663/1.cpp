#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int now = n;
        for(int i=n;i>n/2;i--){
            a[i]=now-1;
            a[n-i+1]=now;
            now-=2;

        }
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}