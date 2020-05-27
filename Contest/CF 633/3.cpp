#include<bits/stdc++.h>
using namespace std;
int main(){
    
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    long long int a[n];
    long long int maxi = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>=1){
            if(a[i]<a[i-1]){
                long long int now = a[i-1]-a[i];
               // cout<<now<<" "<<log2(now*1.0)<<endl;
                a[i]=a[i-1];
                maxi = max(maxi,1+(long long int) floor(log2(now*1.0)));
            }
        }
    }
    cout<<maxi<<endl;
}
}