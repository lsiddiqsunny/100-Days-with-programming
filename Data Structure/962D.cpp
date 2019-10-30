#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int mark[n];
    long long int arr[n];
    memset(mark,0,sizeof(mark));
    set<pair<long long,int> > a;
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        arr[i]=x;
        a.insert({x,i});
    }
    int co=0;
    while(a.size()>=1){

        set<pair<long long,int> >::iterator it = a.begin();

        pair<long long,int> x=*it;
        if(a.size()==1){
            a.erase(x);
            continue;
        }
        it++;
        pair<long long,int> y=*it;
        a.erase(x);
        if(x.first!=y.first){
            continue;
        }
        else{
            co++;
            mark[x.second]=1;
            a.erase(y);
            arr[y.second]=y.first*2;
            a.insert({y.first*2,y.second});
        }
    }
    cout<<n-co<<endl;
    for(int i=0;i<n;i++){
        if(mark[i]==1){
            continue;
        }
        cout<<arr[i]<<" ";
    }

}