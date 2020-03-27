#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];

    }
    int co=0;
    for(int i=0;i<10;i++){
        int now=0;
        for(int j=0;j<n;j++){
            if(s[j][i]=='1'){
                now++;
            }
        }
        if(now%2==1){
            co++;
        }
    }
    cout<<co<<endl;
}


}