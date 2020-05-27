#include<bits/stdc++.h>
using namespace std;
int main(){

    
    int t;
    cin>>t;
    while(t--){
        int n;

        cin>>n;

        int x=n/2;
        if(x%2==1){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        long long sum=0;
        for(int i=1;i<=x;i++){
            cout<<i*2<<" ";
            sum+=(i*2LL);
        }
        for(int i=1;i<x;i++){
            cout<<2*i-1<<" ";
            sum-=(2LL*i-1LL);
        }
        cout<<sum<<endl;

    }

}