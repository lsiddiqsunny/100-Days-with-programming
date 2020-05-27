#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    vector<int>even,odd;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2){
            odd.push_back(a[i]);
        }
        else{
            even.push_back(a[i]);
        }
    }
    bool ok = false;
    if(odd.size()%2==0 and even.size()%2==0){
        ok = true;
    }
    else{
        for(int i=0;i<odd.size();i++){
            int x = odd[i];
            for(int j=0;j<even.size();j++){
                int y = even[j];
                if(abs(x-y)==1){
                    ok=true;
                    break;
                }
                
            }
            if(ok){
                break;
            }
        }

    }
    if(ok){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}