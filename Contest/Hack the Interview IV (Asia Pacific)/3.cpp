#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    memset(a,0,sizeof(a));
    int path[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            path[i][j]=a[i][j];
        }
    }
    


}