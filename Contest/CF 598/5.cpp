#include<bits/stdc++.h>
using namespace std;
int n;

pair<int,int> a[200005];

int f(int x){

int now=0;

for(int j=0;j<n;j=j+x){
    now+=(a[j+x-1].first-a[j].first);
}
return now;
    
}
int main(){

cin>>n;

for(int i=0;i<n;i++){
    cin>>a[i].first;
    a[i].second=i;
}
sort(a,a+n);
int ans=INT_MAX;
int lo=3,hi=n;
int mid;

while(lo<=hi){
    mid=(lo+hi)/2;
    int now=f(mid);
    cout<<mid<<" "<<now<<endl;

    if(now<=ans){
        ans=now;
        lo=mid+1;
    }
    else{
        hi=mid-1;
    }
}

cout<<ans<<endl;









}