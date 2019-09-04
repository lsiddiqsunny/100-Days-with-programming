#include<bits/stdc++.h>
using namespace std;
int main(){
int test;
cin>>test;
while(test--){
    int n;
    cin>>n;
    long long a[n],b[n];
    long long c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        c[i]=max(0LL,a[i]*20LL-b[i]*10LL);
    }
    cout<<*max_element(c,c+n)<<endl;


}

}
