#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("alchemy_input.txt","r",stdin);
    freopen("output","w", stdout);

    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='A'){
                a++;
            }
            else{
                b++;
            }
        }
        if(abs(a-b)==1){
            cout<<"Case #"<<cs<<": Y\n";
        }
        else{
            cout<<"Case #"<<cs<<": N\n";
        }
    }
}