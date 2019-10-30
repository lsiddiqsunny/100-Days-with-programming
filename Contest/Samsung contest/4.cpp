#include<bits/stdc++.h>
using namespace std;
int main(){

    multiset<int>mp;
    int q;
    cin>>q;
    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int x;
            cin>>x;
            mp.insert(x);
        }
        else if(t==2){
            int x;
            cin>>x;
            mp.erase(mp.find(x));
        }
        else{
            cout<<*mp.begin()<<endl;
        }
    }


}
