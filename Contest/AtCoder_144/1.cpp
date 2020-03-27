#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a>=1 and a<=9){
    if(b>=1 and b<=9){
        cout<<a*b<<endl;
        return 0;
    }
}

cout<<-1<<endl;
}