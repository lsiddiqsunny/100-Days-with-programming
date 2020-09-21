#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        swap(a[i],a[i+1]);
        i++;
    }
    int co=0;
    for(int i=1;i<n-1;i++){
        if(a[i]<a[i-1] and a[i]<a[i+1]){
            co++;
        }
    }
    cout<<co<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}