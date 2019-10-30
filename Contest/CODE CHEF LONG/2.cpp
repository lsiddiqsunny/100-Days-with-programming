#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
cin>>test;
while(test--){
    long long int x,y;
    cin>>x>>y;


    long long z=__gcd(x,y);
    x/=z;
    y/=z;
    long long ans=min(x,y);
    if(ans%2==1){
        cout<<"Ari"<<endl;
    }
    else cout<<"Rich"<<endl;

}

}
