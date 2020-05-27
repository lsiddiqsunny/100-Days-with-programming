#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        long long sum=0;
        long long co=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.rbegin(),a.rend());
        for(int i=0;i<a.size();i++){
            sum+=(max(0ll,a[i]-co));
            co++;
        }        
               
        
        cout<<sum%1000000007<<endl;
    }
}