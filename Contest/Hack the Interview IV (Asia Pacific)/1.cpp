#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int d;
    cin>>d;
    int ans= 0;
    int co=0;
    for(int i=0;i<s.size();i++){
        co=0;
        if(s[i]=='1'){
            continue;
        }
        while(i<s.size() and s[i]=='0'){
            i++;
            co++;
        }
        //cout<<co<<endl;
        ans+=(co/d);
    }
    //ans+=(co/d);
    cout<<ans<<endl;

}