#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        long long int w[n];
        long long W=0;
        for(int i=0;i<n;i++){
            cin>>w[i];
            W+=w[i];
        }
        long long now=W+k;
        for(int i=0;i<n;i++){
            printf("%.10lf ",now*(w[i]/(1.0*W)));
        }
        cout<<"\n";
    }
}