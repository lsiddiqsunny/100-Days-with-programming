#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    char now = s[0];
    int co=0;
    for(int i=1;i<s.size();i++){
        if(now=='x' and s[i]=='y'){
            co++;
            if(i+1<s.size()){
                now=s[i+1];
                i++;
            }else{
                break;
            }
        }
        else if(now=='y' and s[i]=='x'){
            co++;
            if(i+1<s.size()){
                now=s[i+1];
                i++;
            }else{
                break;
            }
        }
        else{
            now=s[i];
        }
    }
    cout<<co<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}