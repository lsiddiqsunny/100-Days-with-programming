#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];int mark[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            cout<<1<<endl;
            return 0;
        }
        mark[i]=0;
    }
    vector<int>prime;
    for(int i=2; i<=100; i++)
    {
        bool ok=true;
        for(int j=2; j<=sqrt(i); j++)
        {
            if(i%j==0)
            {
                ok=false;
                break;
            }
        }
        if(ok)
        {
            prime.push_back(i);
           // cout<<i<<endl;
        }
    }

    sort(a,a+n);

    int co=0;
    for(int i=0;i<n;i++){
        int now=a[i];
        int ok=false;
        for(int j=0;j<n;j++){
            if(mark[j]==1){
                continue;
            }
            if(a[j]%now==0){
                ok=true;
                mark[j]=1;
            }
        }
        if(ok){
            co++;
        }
    }
    cout<<co<<endl;


}
