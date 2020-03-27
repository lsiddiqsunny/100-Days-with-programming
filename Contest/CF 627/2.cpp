#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        vector<int>mp[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]].push_back(i);
        }
        bool ok=false;
        for(int i=1;i<=n;i++){
            if(mp[i].size()>=2){
                int st=mp[i][0];
                int en=mp[i][mp[i].size()-1];
                if(en-st>1){
                    ok=true;
                }
            }
        }
        if(ok){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }


    }
}