#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k;
cin>>n>>k;
string s;
cin>>s;
if(k==0){
    cout<<s<<endl;
    return 0;
}
if(n==1){
    if(k==1){
        cout<<"0"<<endl;
    }
    else{
        cout<<s<<endl;
    }
    return 0;
}
if(s[0]!='1'){
    s[0]='1';
    k--;
}
for(int i=1;i<n;i++){
    if(s[i]=='0'){
        continue;

    }
    if(k==0){
        break;
    }
    s[i]='0';
    k--;
}
cout<<s<<endl;
}
