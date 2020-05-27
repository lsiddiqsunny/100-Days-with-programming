#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        int n;
        cin>>n;
        int a[n][n];
        int trace=0,row=0,col=0;
        for(int i=0;i<n;i++){
            int mark[n+1]={0};
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(i==j){
                    trace+=a[i][j];
                }
                mark[a[i][j]]++;
            }
            for(int j=1;j<=n;j++){
                if(mark[j]>1){
                    row++;
                    break;
                }
            }
        }

        for(int i=0;i<n;i++){
            int mark[n+1]={0};
            for(int j=0;j<n;j++){
                mark[a[j][i]]++;
            }
            for(int j=1;j<=n;j++){
                if(mark[j]>1){
                    col++;
                    break;
                }
            }
        }
        cout<<"Case #"<<cs<<": "<<trace<<" "<<row<<" "<<col<<endl;
    }
}