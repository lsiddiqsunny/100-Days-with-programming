#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long  a,b,n,s;
    cin>>a>>b>>n>>s;
    long long div=s/n;
    long long rem=s- min(div,a)*n;
    if(rem<=b){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
}