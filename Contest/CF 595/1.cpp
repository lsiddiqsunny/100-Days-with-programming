#include<bits/stdc++.h>
using namespace std;
int main()
{
int q;
cin>>q;
while(q--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int ok=true;
    for(int i=0;i<n-1;i++){
        if(a[i]+1==a[i+1]){
            ok=false;
        }
    }
    if(ok){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }


}


}
