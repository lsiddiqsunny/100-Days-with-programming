#include<bits/stdc++.h>
using namespace std;
int main(){

    long long int two[32];
    two[0]=1;
    for(int i=1;i<32;i++){
        two[i]=2LL*two[i-1];
    }

    for(int i=1;i<32;i++){
        two[i]+=two[i-1];
        //cout<<two[i]<<" ";
    }
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long x;
        for(int i=1;i<32;i++){
            if(n%two[i]==0){
                x=n/two[i];
                break;
            }
        }
        cout<<x<<endl;
    }

}