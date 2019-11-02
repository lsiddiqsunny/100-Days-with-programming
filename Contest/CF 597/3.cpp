#include<bits/stdc++.h>
using namespace std;
int main(){
long long int fib[1000005];
fib[2]=2;
fib[3]=3;
for(int i=4;i<100005;i++){
    fib[i]=fib[i-1]+fib[i-2];
    fib[i]%=1000000007;
}
string s;
cin>>s;
long long ans=1;
int co1=0;
int ok=1;
for(int i=0;i<s.size();i++){
    if(s[i]=='m'|| s[i]=='w'){
        cout<<0<<endl;
        return 0;
    }
    if(s[i]=='n'){
        
        int co=0;
        int j=i;
        for(j=i;j<s.size();j++){
            if(s[j]!='n'){
                break;
            }
            co++;
        }
        if(co!=1){
            j--;
            i=j;
            
            ans*=(fib[co]);
            ans%=1000000007;
        }
    }
    if(s[i]=='u'){
        int co=0;
        int j=i;
        for(j=i;j<s.size();j++){
            if(s[j]!='u'){
                break;
            }
            co++;
        }
        if(co!=1){
            j--;
            i=j;
            
            ans*=(fib[co]);
            ans%=1000000007;
        }
    }
}

cout<<ans<<endl;
}