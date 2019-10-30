#include<bits/stdc++.h>
using namespace std;
long long int num[1000005];
int main()
{

    long long mod=1000000007;
    num[1]=1;
    for(int i=2; i<=1000000; i++)
    {
        num[i]=(num[i-1]%mod+i%mod+(i%mod*num[i-1]%mod)%mod)%mod;
    }
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        cout<<num[n]<<endl;
    }

}
