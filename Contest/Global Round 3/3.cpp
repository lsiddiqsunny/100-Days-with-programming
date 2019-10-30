#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=i;
    }
    vector<pair<int,int> > ans;
    for(int i=n;i>=1;i--){
        if(i-1==mp[i]){
            continue;
        }
        int x=mp[i];
        int z=a[x];
        int org=a[i-1];
        mp[org]=x;
        swap(a[i-1],a[x]);
        ans.push_back({x+1,i});

    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }


}
