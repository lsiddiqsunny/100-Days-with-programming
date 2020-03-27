#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y,p,q;
    cin>>x>>y>>p>>q;
    for(int i=1;i<=100000000;i++){
        long long a = i*p;
        long long b = i*q;
        if(a%x==0 and b%y==0){
            cout<<a/x<<" "<<b/y<<" "<<i<<endl;
            return 0;
        }
    }

}