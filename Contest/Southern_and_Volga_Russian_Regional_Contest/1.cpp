#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cur[n];
    map<int,pair<int,int> > mp;
    for(int i=1;i<=n;i++){
        a[i-1]=i;
        mp[i]={i-1,i-1};
        cur[i]=i-1;
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        int pos=cur[x];
        if(pos==0){
            continue;
        }
        int y=a[pos];
        int z=a[pos-1];
        swap(a[pos],a[pos-1]);
        cur[y]=pos-1;
        mp[y].first=min(mp[y].first,pos-1);
        mp[y].second=max(mp[y].second,pos-1);
        cur[z]=pos;
        mp[z].second=max(mp[z].second,pos);
        mp[z].first=min(mp[z].first,pos);
    }
    for(int i=1;i<=n;i++){
        cout<<mp[i].first+1<<" "<<mp[i].second+1<<endl;
    }


}