#include<bits/stdc++.h>

using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){

        int n;cin>>n;
        string s,t;
        cin>>s>>t;
        int one=0,zero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zero++;
            }
            else one++;
        }
        for(int i=0;i<n;i++){
            if(t[i]=='0'){
                zero--;
            }
            else one--;
        }
        if(!zero and !one){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

}
