#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<long long > po;
        long long now=1;
        for(int i=0;now<=10000000000000000;i++){
            po.push_back(now);
            now*=k;
        }
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok=true;
        for(int i=po.size()-1;i>=0;i--){
            int pos=-1;
            int co=0;
            for(int j=0;j<n;j++){
                if(a[j]>=po[i]){
                    pos=j;
                    co++;
                }
            }
            if(co==0){
                continue;
            }
            if(co>1){
                ok=false;
            }
            a[pos]-=po[i];
        }
        cout<<endl;
        if(ok){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}