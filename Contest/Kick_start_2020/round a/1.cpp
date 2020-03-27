#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int cs=1;cs<=t;cs++){
        int n,b;
        cin>>n>>b;
        int a[n];;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int total=0;
        for(int i=0;i<n;i++){
            if(a[i]>b){
                break;
            }
            b-=a[i];
            total++;
        }
        cout<<"Case #"<<cs<<": "<<total<<endl;
    }
}