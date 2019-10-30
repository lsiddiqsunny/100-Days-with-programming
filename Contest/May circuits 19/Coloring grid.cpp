#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,k;
    cin>>n>>k;
    if(n==2 )
    {
        long long ans=k;
        ans+=(k*(k-1));
        cout<<ans<<endl;
        return 0;
    }
    if(n==3 and k>=3){
        long long ans=k;
        ans+=(k*(k-1)*(k-2));
        cout<<ans<<endl;
        return 0;
    }

    cout<<k<<endl;


}
