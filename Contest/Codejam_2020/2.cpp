#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        string s;
        cin>>s;
        string ans = "";
        int open=0,close=0;
        for(int i=0;i<s.size();i++){
            int now=s[i]-'0';
            if(open<now){
                int need=now-open;
                for(int j=1;j<=need;j++){
                    ans+='(';
                }
                ans+=s[i];
                open=now;

            }else if(open>now){
                int need = open-now;
                for(int j=1;j<=need;j++){
                    ans+=')';
                }
                ans+=s[i];
                open=now;
            }
            else{
                ans+=s[i];
            }
        }
        for(int j=1;j<=open;j++){
            ans+=')';
        }
        cout<<"Case #"<<cs<<": "<<ans<<endl;
    }
}