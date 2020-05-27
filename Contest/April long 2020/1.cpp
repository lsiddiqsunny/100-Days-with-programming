#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>pos;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x){
                pos.push_back(i);
            }
        }
        bool ok=true;
        for(int i=0;i<pos.size()-1;i++){
            if(pos[i+1]-pos[i]<6){
                ok=false;
                break;
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