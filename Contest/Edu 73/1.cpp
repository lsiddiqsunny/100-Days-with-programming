#include<bits/stdc++.h>
using namespace std;
int getId(long long num){
    int id=0;
    while(num%2==0){
        id++;
        num/=2;
    }
    return id;
}
int main(){

int q;
cin>>q;
while(q--){
    int power[32];
    int n;
    cin>>n;
    memset(power,0,sizeof(power));
    bool isWin=false;
    long long a[n];
    for(int i=0;i<n;i++){
        long long x;
        cin>>x;
        a[i]=x;
        if(x==2048){
            isWin=true;
        }

    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        power[getId(a[i])]++;

    }
    for(int i=0;i<12;i++){
        if(power[11]!=0){
            isWin=true;
        }


        power[i+1]+=power[i]/2;
     //   cout<<power[i]<<" "<<power[i+1]<<endl;
    }
    if(isWin){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}
}
