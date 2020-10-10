#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int one=0,two=0,three=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            one++;
        }
        else if(a[i]==2){
            two++;
        }
        else{
            three++;
        }


    }
    int maxi = max(one,max(two,three));
    cout<<n-maxi<<endl;
}