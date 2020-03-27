#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        int n,k,p;
        cin>>n>>k>>p;
        int a[n+1][k+1];
        int sum[n+1][k+1];
        for(int i=0;i<=k;i++){
            sum[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            sum[i][0]=0;
            for(int j=1;j<=k;j++){
                cin>>a[i][j];
                sum[i][j]=a[i][j]+sum[i][j-1];
            }
        }
        // for(int i=1;i<=n;i++){
        //     for(int j=1;j<=k;j++){
        //         cout<<sum[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int dp[n+1][p+1];
        for(int i=0;i<=p;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=p;j++){
                dp[i][j]=0;
                for(int x=0;x<=min(j,k);x++){
                    dp[i][j]=max(dp[i][j],sum[i][x]+dp[i-1][j-x]);
                }
            }
        }
        cout<<"Case #"<<cs<<": "<<dp[n][p]<<endl;
    }
}