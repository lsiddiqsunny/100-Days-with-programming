#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        long long int k,n,a,b;
        cin>>k>>n>>a>>b;
        long long lo=0;
        long long hi=n;
        long long mid;
        long long ans=-1;
        while(lo<=hi){
            mid=(lo+hi+1)/2;

            if((((mid*a)+(n-mid)*b)<=k) and (mid*a)<=k-a and (n-mid)*b<k-mid*a ){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi= mid-1;
            }
        }
        cout<<ans<<endl;
    }

}
