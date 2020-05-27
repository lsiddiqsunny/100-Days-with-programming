#include<bits/stdc++.h>
using namespace std;
int main(){
    
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);

    int i=n-1;
    int j=0;
    vector<int>ans;
    for(int i=0;i<n/2;i++){
        //cout<<a[n-i-1]<<" "<<a[i]<<endl;
        ans.push_back(a[n-i-1]);
        ans.push_back(a[i]);
        
    }
    if(n%2){
        ans.push_back(a[n/2]);
    }
    for(int i=n-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
}