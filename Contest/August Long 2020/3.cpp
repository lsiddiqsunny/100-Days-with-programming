#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        int d1=(int)(a/9)+(a%9!=0);
        int d2=(int)(b/9)+(b%9!=0);
        if(d1<d2){
            cout<<0<<" "<<d1<<endl;
        }
        else{
            cout<<1<<" "<<d2<<endl;
        }
    }
}