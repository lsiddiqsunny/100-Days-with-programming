#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;
    string s;
    cin>>s;
    string ans="";
    for(int i=0;i<s.size();i++){
        ans+="X";
    }
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='S' and a){
            a--;
            ans[i]='R';
        }
        if(s[i]=='R' and b){
            b--;
            ans[i]='P';
        }
        if(s[i]=='P' and c){
            c--;
            ans[i]='S';
        }
    }
    int co=0;
    for(int i=0;i<s.size();i++){
        if(ans[i]=='X'){
            co++;
        }
    }
    co=n-co;

    if(co>=(int)((n+1)/2)){
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            if(ans[i]=='X'){
                if(a){
                    a--;
                    ans[i]='R';
                }
                else if(b){
                    b--;
                    ans[i]='P';
                }
                else if(c){
                    c--;
                    ans[i]='S';
                }
            }
        }
        cout<<ans<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
    
}