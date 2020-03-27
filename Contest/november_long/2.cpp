#include<bits/stdc++.h>
using namespace std;
long long int seq[200];
int main(){
int t;
cin>>t;
seq[1]=0;

for(int i=2;i<200;i++){
    long long int now=seq[i-1];
    int pos=-1;
    
    for(int j=i-2;j>=1;j--){
        if(seq[j]==now){
            pos=j;
            break;
        }
    }
   // cout<<now<<" "<<i<<" "<<pos<<endl;
    if(pos==-1){
        seq[i]=0;
    }
    else{
        seq[i]=i-pos-1;
    }
   // cout<<seq[i]<<" ";
}
while(t--){
    int n;
    cin>>n;
    int now=seq[n];
    int co=0;
    for(int i=1;i<=n;i++){
        if(seq[i]==now){
            co++;
        }
    }
    cout<<co<<endl;
}


}