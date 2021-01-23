#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    double drunk=0.0;
    for(int i=0;i<n;i++){
        int v,p;
        cin>>v>>p;
        drunk+=((v*p)/100.0);
        //cout<<drunk<<endl;
        if(drunk>x){
            cout<<(i+1);
            return 0;
        }
    }
    cout<<-1<<endl;

}