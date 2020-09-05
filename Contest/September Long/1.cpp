#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        set<int>s;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x>0)
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
}