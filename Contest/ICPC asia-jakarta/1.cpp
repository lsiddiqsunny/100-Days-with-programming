#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=n-a[i]+1;
    cout<<b[i]<<" ";
}


}
