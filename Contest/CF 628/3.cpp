#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
vector<int>g[mx];
int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > edge;
    for(int i=1;i<n;i++){
        int x,y;
        cin>>x>>y;
        edge.push_back({x,y});
        g[x].push_back(y);
        g[y].push_back(x);
    }
    vector<int>leaf;
    for(int i=1;i<=n;i++){
        if(g[i].size()==1){
            leaf.push_back(i);
        }
    }
    if(leaf.size()<=2){
        for(int i = 1; i < n; i++) {
            cout << i-1 <<endl;
        }
        return 0;
    }
    int co=3;
    for(int i=0;i<n-1;i++){
        if(edge[i].first==leaf[0] || edge[i].second==leaf[0]){
            cout<<0<<endl;
        }
        else if(edge[i].first==leaf[1] || edge[i].second==leaf[1]){
            cout<<1<<endl;
        }
        else if(edge[i].first==leaf[2] || edge[i].second==leaf[2]){
            cout<<2<<endl;
        }else{
            cout<<co<<endl;
            co++;
        }
    }


}