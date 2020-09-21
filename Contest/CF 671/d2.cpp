#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ans[n];
    int j=1;
    for(int i=0;i<n/2;i++){
        ans[j]=a[i];
        j+=2;
    }
    j=0;
    for(int i=n/2;i<n;i++){
        ans[j]=a[i];
        j+=2;
    }
    int co=0;
    for(int i=1;i<n-1;i++){
        if(ans[i]<ans[i-1] and ans[i]<ans[i+1]){
            co++;
        }
    }
    cout<<co<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    
}