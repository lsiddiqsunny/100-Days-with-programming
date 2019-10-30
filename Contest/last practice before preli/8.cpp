#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long  psum=a[0],ssum=a[n-1];
    long long  pco=1LL,sco=1LL;
    long long  ans=ssum-psum;
    for (int i=2; i<n; i++)
    {
        cout<<ans<<" ";
        if (i%2==1)
        {
            long long  now=a[i-1];
            ans+=((now*pco-psum)+(ssum-now*sco));
            pco++;
            psum+=now;
        }
        else
        {
            long long now=a[n-i];
            ans+=((now*pco-psum)+(ssum-now*sco));
            sco++;
            ssum+=now;
        }
    }
    cout << ans;
}
