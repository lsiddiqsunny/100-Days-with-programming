#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int co=0;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(s[i][j]=='C'){
                    continue;
                }
                if(s[i][j]=='D'){
                    if(i<n-1){
                        if(s[i+1][j]=='C'){
                            s[i][j]='C';
                            continue;
                        }
                    
                    }
                    co++;
                }
                else if(s[i][j]=='R'){
                    if(j<m-1){
                        if(s[i][j+1]=='C'){
                            s[i][j]='C';
                            continue;
                        }
                        
                    }
                    co++;
                }
                s[i][j]='C';
            }
        }
        cout<<co<<endl;
    }
}