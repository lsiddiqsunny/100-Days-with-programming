#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int co[10];
        for(int i=0;i<10;i++){
            cin>>co[i];
        }
        int ans=-1;
        for(int i=1;i<10;i++){
            if(co[i]==0){
                ans=i;
                break;
            }
        }
        if(ans!=-1){
            cout<<ans<<endl;
            continue;
        }
        if(co[0]==0){
            cout<<10<<endl;
            continue;
        }
        int pos=1;
        int maxi=co[1];
        for(int i=1;i<10;i++){
            if(co[i]<maxi){
                maxi=co[i];
                pos=i;
            }
        }
       // cout<<co[0]<<" "<<maxi<<endl;
        if(maxi<=co[0]){
            for(int i=1;i<=maxi+1;i++){
                cout<<pos;
            }
            cout<<endl;
            continue;
        }
        else{
            cout<<1;
            for(int i=1;i<=co[0]+1;i++){
                cout<<0;
            }
            cout<<endl;
            continue;
        }
    }

}