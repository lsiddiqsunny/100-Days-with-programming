#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>=4 || (x==1 and y==1)||(x==2 and y<=3)||(x==3 and y<=3)){
            cout<<"Yes"<<endl;
            continue;
        }
        else{
            cout<<"No\n";
        }
        
    }
}