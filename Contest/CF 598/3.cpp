#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,d;
    cin>>n>>m>>d;
    int a[m+1];
    int tot=0;
    for(int i=1;i<=m;i++){
        cin>>a[i];
        tot+=a[i];
    }
    int ans[n+1];
    for(int i=1;i<=n;i++){
        ans[i]=0;
    }
    int now=0;
    int w=1;
    int cur=0;
    while(cur!=n ){
        
        int x=cur+d+a[w]-1;
        int y=n-x;
        if(y<tot-a[w]){
            int z=tot-a[w]-y;
            x-=z;
            for(int j=x;j>=x-a[w]+1;j--){
                ans[j]=w;
            }
            for(int j=x-a[w];j>cur;j--){
                ans[j]=0;
            }
            cur=x;
        }else{
            for(int j=x;j>=x-a[w]+1;j--){
                ans[j]=w;
            }
            for(int j=x-a[w];j>cur;j--){
                ans[j]=0;
            }
            cur=x;
        }
        tot-=a[w];
        w++;
        if(w>m){
            break;
        }
        
        
    }

    if(cur+d>n){
        cout<<"Yes"<<endl;
        for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    }else{
        cout<<"No"<<endl;
    }

    
    
}