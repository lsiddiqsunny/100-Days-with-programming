#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m,q;
cin>>n>>m>>q;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
sort(a,a+n);

int b[m];
for(int i=0;i<m;i++){
    cin>>b[i];
}
sort(b,b+m);
int z=q/a[0];
int x=q-z*a[0];
int r=z*b[m-1];
int ans=r+x;
cout<<max(q,ans)<<endl;

}
