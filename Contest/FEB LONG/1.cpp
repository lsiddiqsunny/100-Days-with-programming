#include<bits/stdc++.h>
using namespace std;
int main(){

    int test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int a[m];
        int check[m];
        int bus[n],price[n];
        for(int i=0;i<n;i++){
            cin>>bus[i];
            
        }
        for(int i=0;i<n;i++){
            cin>>price[i];
        }
        for(int i=0;i<m;i++){
            a[i]=0;
            check[i]=0;
        }

        for(int i=0;i<n;i++){
            a[bus[i]-1]+=price[i];
            check[bus[i]-1]=1;
        }
        
        vector<int>ans;
        for(int i=0;i<m;i++){
            if(check[i]==0){
                continue;
            }
            ans.push_back(a[i]);
        }
        sort(ans.begin(),ans.end());
        cout<<ans[0]<<endl;
    }
}