#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long n,k;
        cin>>n>>k;
        if(k==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        long long d=n/k;
        if(d%k==0 )
        {
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }







    }

}

