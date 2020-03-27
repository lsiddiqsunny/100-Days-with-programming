#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>pos;
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            pos.push_back(i);
        }
    }
    for(int i=0;i<pos.size();i++){
        int need=pos[i]-i;
        if(need<=k){
            k-=need;
            swap(s[i],s[pos[i]]);
        }
        else{
            swap(s[pos[i]-k],s[pos[i]]);
            k=0;
        }
        //cout<<k<<endl;
        if(k==0){
            break;
        }
    }
    cout<<s<<endl;

}
}